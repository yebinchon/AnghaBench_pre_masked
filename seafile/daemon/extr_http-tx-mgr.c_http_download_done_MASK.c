
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ error; scalar_t__ state; } ;
typedef TYPE_1__ HttpTxTask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_5)
{
    HttpTxTask *VAR_6 = VAR_5;

    if (VAR_6->error != VAR_4)
        FUNC_0 (VAR_6, VAR_2, VAR_0);
    else if (VAR_6->state == VAR_1)
        FUNC_0 (VAR_6, VAR_6->state, VAR_0);
    else
        FUNC_0 (VAR_6, VAR_3, VAR_0);
}
