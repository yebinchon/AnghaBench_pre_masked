
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int compile_ctx_t ;
struct TYPE_5__ {unsigned int uint; } ;
struct TYPE_4__ {unsigned int uint; } ;
struct TYPE_6__ {TYPE_2__ arg2; TYPE_1__ arg1; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3(compile_ctx_t *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
    unsigned VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_1);
    if(!VAR_6)
        return VAR_0;

    FUNC_0(VAR_3, VAR_6)->arg1.uint = VAR_5;
    FUNC_0(VAR_3, VAR_6)->arg2.uint = VAR_4 + FUNC_2(VAR_3);
    return VAR_2;
}
