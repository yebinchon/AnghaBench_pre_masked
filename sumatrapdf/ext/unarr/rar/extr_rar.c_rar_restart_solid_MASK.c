
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ off64_t ;
typedef int buffer ;
struct TYPE_8__ {int restart; } ;
struct TYPE_9__ {TYPE_1__ solid; } ;
typedef TYPE_2__ ar_archive_rar ;
struct TYPE_10__ {scalar_t__ entry_offset; scalar_t__ entry_offset_first; size_t entry_size_uncompressed; } ;
typedef TYPE_3__ ar_archive ;


 int FUNC_0 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (size_t,int) ;

__attribute__((used)) static bool FUNC_5(ar_archive *VAR_0)
{
    ar_archive_rar *VAR_1 = (ar_archive_rar *)VAR_0;
    off64_t VAR_2 = VAR_0->entry_offset;
    FUNC_3("Restarting decompression for solid entry");
    if (!FUNC_2(VAR_0, VAR_0->entry_offset_first)) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    while (VAR_0->entry_offset < VAR_2) {
        size_t VAR_3 = VAR_0->entry_size_uncompressed;
        VAR_1->solid.restart = 0;
        while (VAR_3 > 0) {
            unsigned char VAR_4[1024];
            size_t VAR_5 = FUNC_4(VAR_3, sizeof(VAR_4));
            if (!FUNC_0(VAR_0, VAR_4, VAR_5)) {
                FUNC_2(VAR_0, VAR_2);
                return 0;
            }
            VAR_3 -= VAR_5;
        }
        if (!FUNC_1(VAR_0)) {
            FUNC_2(VAR_0, VAR_2);
            return 0;
        }
    }
    VAR_1->solid.restart = 0;
    return 1;
}
