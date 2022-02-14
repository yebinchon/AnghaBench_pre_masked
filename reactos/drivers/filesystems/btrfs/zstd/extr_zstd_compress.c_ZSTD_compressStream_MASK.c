
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ size; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_CStream ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int *,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_1 ;

size_t FUNC_2(ZSTD_CStream* VAR_2, ZSTD_outBuffer* VAR_3, ZSTD_inBuffer* VAR_4)
{

    if (VAR_3->pos > VAR_3->size) return FUNC_0(VAR_0);
    if (VAR_4->pos > VAR_4->size) return FUNC_0(VAR_0);

    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);
}
