
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int seamless_hidden; int seamless_started; } ;
struct TYPE_6__ {TYPE_1__ xwin; int seamless_rdp; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(RDPCLIENT * VAR_1)
{
 if (!VAR_1->seamless_rdp)
  return;

 if (!VAR_1->xwin.seamless_started)
  return;

 VAR_1->xwin.seamless_hidden = VAR_0;

 FUNC_0(VAR_1);
}
