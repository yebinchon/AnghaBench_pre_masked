
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbsop_t ;
typedef int compile_ctx_t ;
struct TYPE_3__ {unsigned int uint; } ;
struct TYPE_4__ {TYPE_1__ arg1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_2(compile_ctx_t *VAR_2, vbsop_t VAR_3, unsigned VAR_4)
{
    unsigned VAR_5;

    VAR_5 = FUNC_1(VAR_2, VAR_3);
    if(!VAR_5)
        return VAR_0;

    FUNC_0(VAR_2, VAR_5)->arg1.uint = VAR_4;
    return VAR_1;
}
