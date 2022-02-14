
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sockbase; } ;
struct nn_surveyor {int fsm; scalar_t__ timedout; int deadline; int tosend; int timer; int surveyid; int state; TYPE_1__ xsurveyor; } ;
struct nn_sockbase_vfptr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (TYPE_1__*,struct nn_sockbase_vfptr const*,void*) ;

__attribute__((used)) static void FUNC_7 (struct nn_surveyor *VAR_5,
    const struct nn_sockbase_vfptr *VAR_6, void *VAR_7)
{
    FUNC_6 (&VAR_5->xsurveyor, VAR_6, VAR_7);
    FUNC_0 (&VAR_5->fsm, VAR_3, VAR_4,
        FUNC_4 (&VAR_5->xsurveyor.sockbase));
    VAR_5->state = VAR_2;



    FUNC_3 (&VAR_5->surveyid, sizeof (VAR_5->surveyid));

    FUNC_5 (&VAR_5->timer, VAR_1, &VAR_5->fsm);
    FUNC_2 (&VAR_5->tosend, 0);
    VAR_5->deadline = VAR_0;
    VAR_5->timedout = 0;


    FUNC_1 (&VAR_5->fsm);
}
