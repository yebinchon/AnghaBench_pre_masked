
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsop_t ;
typedef int compiler_ctx_t ;
struct TYPE_5__ {TYPE_1__* arg; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct TYPE_4__ {int lng; } ;
typedef int LONG ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_2(compiler_ctx_t *VAR_2, jsop_t VAR_3, LONG VAR_4)
{
    unsigned VAR_5;

    VAR_5 = FUNC_1(VAR_2, VAR_3);
    if(!VAR_5)
        return VAR_0;

    FUNC_0(VAR_2, VAR_5)->u.arg->lng = VAR_4;
    return VAR_1;
}
