
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int nports; TYPE_1__* idev; } ;
struct TYPE_3__ {scalar_t__ status; int port; int hub; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;

int FUNC_0(uint32_t VAR_4)
{
 for (int VAR_5 = 0; VAR_5 < VAR_3->nports; VAR_5++) {

  switch (VAR_4) {
  case 128:
   if (VAR_3->idev[VAR_5].hub != VAR_1)
    continue;
  break;
  default:
   if (VAR_3->idev[VAR_5].hub != VAR_0)
    continue;
  break;
  }

  if (VAR_3->idev[VAR_5].status == VAR_2)
   return VAR_3->idev[VAR_5].port;
 }

 return -1;
}
