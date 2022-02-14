
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_3__ ZSTD_outBuffer ;
struct TYPE_14__ {int member_2; int member_1; int * member_0; } ;
typedef TYPE_4__ ZSTD_inBuffer ;
struct TYPE_11__ {int checksumFlag; } ;
struct TYPE_12__ {TYPE_1__ fParams; } ;
struct TYPE_15__ {size_t const outBuffContentSize; size_t const outBuffFlushedSize; TYPE_2__ appliedParams; scalar_t__ frameEnded; } ;
typedef TYPE_5__ ZSTD_CStream ;
typedef int U32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*,TYPE_4__*,int ) ;
 int VAR_2 ;

size_t FUNC_4(ZSTD_CStream* VAR_3, ZSTD_outBuffer* VAR_4)
{
    ZSTD_inBuffer VAR_5 = { ((void*)0), 0, 0 };
    if (VAR_4->pos > VAR_4->size) return FUNC_2(VAR_0);
    FUNC_0( FUNC_3(VAR_3, VAR_4, &VAR_5, VAR_2) );
    { size_t const VAR_6 = VAR_3->frameEnded ? 0 : VAR_1;
        size_t const VAR_7 = VAR_3->frameEnded ? 0 : VAR_3->appliedParams.fParams.checksumFlag * 4;
        size_t const VAR_8 = VAR_3->outBuffContentSize - VAR_3->outBuffFlushedSize + VAR_6 + VAR_7;
        FUNC_1(4, "ZSTD_endStream : remaining to flush : %u", (U32)VAR_8);
        return VAR_8;
    }
}
