
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {int bytes_left; scalar_t__* data; int offset; scalar_t__ at_eof; } ;
struct TYPE_10__ {int dic; } ;
struct TYPE_7__ {TYPE_4__ dec; int finish; int alloc; } ;
struct TYPE_8__ {TYPE_1__ lzma; } ;
struct ar_archive_zip_uncomp {TYPE_3__ input; TYPE_2__ state; } ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*,void*,scalar_t__*,scalar_t__*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static uint32_t FUNC_4(struct ar_archive_zip_uncomp *VAR_4, void *VAR_5, uint32_t VAR_6, bool VAR_7)
{
    SizeT VAR_8, VAR_9;
    ELzmaStatus VAR_10;
    ELzmaFinishMode VAR_11;
    SRes VAR_12;

    if (!VAR_4->state.lzma.dec.dic) {
        uint8_t VAR_13;
        if (VAR_4->input.bytes_left < 9) {
            FUNC_3("Insufficient data in compressed stream");
            return VAR_0;
        }
        VAR_13 = VAR_4->input.data[VAR_4->input.offset + 2];
        if (VAR_4->input.data[VAR_4->input.offset + 3] != 0 || VAR_4->input.bytes_left < 4 + VAR_13) {
            FUNC_3("Insufficient data in compressed stream");
            return VAR_0;
        }
        VAR_12 = FUNC_0(&VAR_4->state.lzma.dec, &VAR_4->input.data[VAR_4->input.offset + 4], VAR_13, &VAR_4->state.lzma.alloc);
        VAR_4->input.offset += 4 + VAR_13;
        VAR_4->input.bytes_left -= 4 + VAR_13;
        if (VAR_12 != VAR_3)
            return VAR_0;
        FUNC_2(&VAR_4->state.lzma.dec);
    }

    VAR_8 = VAR_4->input.bytes_left;
    VAR_9 = VAR_6;
    VAR_11 = VAR_4->input.at_eof && VAR_7 ? VAR_4->state.lzma.finish : VAR_1;
    VAR_12 = FUNC_1(&VAR_4->state.lzma.dec, VAR_5, &VAR_9, &VAR_4->input.data[VAR_4->input.offset], &VAR_8, VAR_11, &VAR_10);

    VAR_4->input.offset += (uint16_t)VAR_8;
    VAR_4->input.bytes_left -= (uint16_t)VAR_8;

    if (VAR_12 != VAR_3 || (VAR_8 == 0 && VAR_9 == 0)) {
        FUNC_3("Unexpected LZMA error %d", VAR_12);
        return VAR_0;
    }
    if (VAR_10 == VAR_2 && (!VAR_7 || VAR_9 != VAR_6)) {
        FUNC_3("Premature EOS in LZMA stream");
        return VAR_0;
    }

    return (uint32_t)VAR_9;
}
