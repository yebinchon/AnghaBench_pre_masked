
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_10__ {int member_2; int member_1; int * member_0; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
struct TYPE_11__ {size_t outBuffContentSize; size_t outBuffFlushedSize; } ;
typedef TYPE_3__ ZSTD_CStream ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_1 ;

size_t FUNC_3(ZSTD_CStream* VAR_2, ZSTD_outBuffer* VAR_3)
{
    ZSTD_inBuffer VAR_4 = { ((void*)0), 0, 0 };
    if (VAR_3->pos > VAR_3->size) return FUNC_1(VAR_0);
    FUNC_0( FUNC_2(VAR_2, VAR_3, &VAR_4, VAR_1) );
    return VAR_2->outBuffContentSize - VAR_2->outBuffFlushedSize;
}
