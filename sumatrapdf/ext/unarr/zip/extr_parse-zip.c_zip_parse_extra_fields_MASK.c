
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct zip_entry {scalar_t__ extralen; scalar_t__ uncompressed; scalar_t__ datasize; scalar_t__ header_offset; int disk; int namelen; } ;
typedef scalar_t__ off64_t ;
struct TYPE_4__ {int stream; } ;
struct TYPE_5__ {TYPE_1__ super; } ;
typedef TYPE_2__ ar_archive_zip ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(ar_archive_zip *VAR_2, struct zip_entry *VAR_3)
{
    uint8_t *VAR_4;
    uint32_t VAR_5;

    if (!VAR_3->extralen)
        return 1;


    if (!FUNC_1(VAR_2->super.stream, VAR_3->namelen))
        return 0;
    VAR_4 = FUNC_3(VAR_3->extralen);
    if (!VAR_4 || FUNC_0(VAR_2->super.stream, VAR_4, VAR_3->extralen) != VAR_3->extralen) {
        FUNC_2(VAR_4);
        return 0;
    }
    for (VAR_5 = 0; VAR_5 + 4 < VAR_3->extralen; VAR_5 += 4 + FUNC_4(&VAR_4[VAR_5 + 2])) {
        if (FUNC_4(&VAR_4[VAR_5]) == 0x0001) {
            uint16_t VAR_6 = FUNC_4(&VAR_4[VAR_5 + 2]);
            uint16_t VAR_7 = 0;
            if (VAR_3->uncompressed == VAR_1 && VAR_7 + 8 <= VAR_6) {
                VAR_3->uncompressed = FUNC_6(&VAR_4[VAR_5 + 4 + VAR_7]);
                VAR_7 += 8;
            }
            if (VAR_3->datasize == VAR_1 && VAR_7 + 8 <= VAR_6) {
                VAR_3->datasize = FUNC_6(&VAR_4[VAR_5 + 4 + VAR_7]);
                VAR_7 += 8;
            }
            if (VAR_3->header_offset == VAR_1 && VAR_7 + 8 <= VAR_6) {
                VAR_3->header_offset = (off64_t)FUNC_6(&VAR_4[VAR_5 + 4 + VAR_7]);
                VAR_7 += 8;
            }
            if (VAR_3->disk == VAR_0 && VAR_7 + 4 <= VAR_6) {
                VAR_3->disk = FUNC_5(&VAR_4[VAR_5 + 4 + VAR_7]);
                VAR_7 += 4;
            }
            break;
        }
    }
    FUNC_2(VAR_4);

    return 1;
}
