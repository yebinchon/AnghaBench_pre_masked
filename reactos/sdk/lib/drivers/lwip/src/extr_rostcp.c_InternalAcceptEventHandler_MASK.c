
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int err_t ;
struct TYPE_4__ {scalar_t__ callback_arg; } ;
typedef TYPE_1__* PTCP_PCB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,TYPE_1__*) ;

__attribute__((used)) static
err_t
FUNC_1(void *VAR_2, PTCP_PCB VAR_3, const err_t VAR_4)
{

    if (!VAR_2)
        return VAR_0;

    FUNC_0(VAR_2, VAR_3);


    if (VAR_3->callback_arg)
        return VAR_1;
    else
        return VAR_0;
}
