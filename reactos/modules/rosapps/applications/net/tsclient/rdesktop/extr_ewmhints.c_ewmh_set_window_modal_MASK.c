
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Window ;
struct TYPE_5__ {int state_modal_atom; } ;
struct TYPE_6__ {TYPE_1__ ewmhints; } ;
typedef TYPE_2__ RDPCLIENT ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,int,int ,int ) ;

int
FUNC_1(RDPCLIENT * VAR_0, Window VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, 1, VAR_0->ewmhints.state_modal_atom, 0) < 0)
  return -1;
 return 0;
}
