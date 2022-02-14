
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Window ;
struct TYPE_5__ {int state_maximized_horz_atom; int state_maximized_vert_atom; } ;
struct TYPE_6__ {TYPE_1__ ewmhints; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int,int ,int ) ;

int
FUNC_1(RDPCLIENT * VAR_1, Window VAR_2, int VAR_3)
{



 if (VAR_3 == VAR_0)
 {
  if (FUNC_0
      (VAR_1, VAR_2, 1, VAR_1->ewmhints.state_maximized_vert_atom,
       VAR_1->ewmhints.state_maximized_horz_atom) < 0)
   return -1;
 }
 else
 {
  if (FUNC_0
      (VAR_1, VAR_2, 0, VAR_1->ewmhints.state_maximized_vert_atom,
       VAR_1->ewmhints.state_maximized_horz_atom) < 0)
   return -1;
 }

 return 0;
}
