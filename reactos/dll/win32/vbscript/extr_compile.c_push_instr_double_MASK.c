
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vbsop_t ;
struct TYPE_8__ {int code; } ;
typedef TYPE_2__ compile_ctx_t ;
struct TYPE_7__ {double* dbl; } ;
struct TYPE_9__ {TYPE_1__ arg1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 double* FUNC_0 (int ,int) ;
 TYPE_5__* FUNC_1 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compile_ctx_t *VAR_2, vbsop_t VAR_3, double VAR_4)
{
    unsigned VAR_5;
    double *VAR_6;

    VAR_6 = FUNC_0(VAR_2->code, sizeof(double));
    if(!VAR_6)
        return VAR_0;

    VAR_5 = FUNC_2(VAR_2, VAR_3);
    if(!VAR_5)
        return VAR_0;

    *VAR_6 = VAR_4;
    FUNC_1(VAR_2, VAR_5)->arg1.dbl = VAR_6;
    return VAR_1;
}
