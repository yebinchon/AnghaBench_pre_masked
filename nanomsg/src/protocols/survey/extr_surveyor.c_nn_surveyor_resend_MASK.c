
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sockbase; } ;
struct nn_surveyor {TYPE_1__ xsurveyor; int tosend; } ;
struct nn_msg {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nn_msg*,int *) ;
 int FUNC_2 (int *,struct nn_msg*) ;

__attribute__((used)) static void FUNC_3 (struct nn_surveyor *VAR_0)
{
    int VAR_1;
    struct nn_msg VAR_2;

    FUNC_1 (&VAR_2, &VAR_0->tosend);
    VAR_1 = FUNC_2 (&VAR_0->xsurveyor.sockbase, &VAR_2);
    FUNC_0 (VAR_1 == 0, -VAR_1);
}
