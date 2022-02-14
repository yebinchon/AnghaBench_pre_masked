
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ax25_fwd_struct {int port_to; int port_from; } ;
struct TYPE_3__ {int * forward; int * dev; } ;
typedef TYPE_1__ ax25_dev ;


 int VAR_0 ;


 TYPE_1__* FUNC_0 (int *) ;

int FUNC_1(unsigned int VAR_1, struct ax25_fwd_struct *VAR_2)
{
 ax25_dev *VAR_3, *VAR_4;

 if ((VAR_3 = FUNC_0(&VAR_2->port_from)) == ((void*)0))
  return -VAR_0;

 switch (VAR_1) {
 case 129:
  if ((VAR_4 = FUNC_0(&VAR_2->port_to)) == ((void*)0))
   return -VAR_0;
  if (VAR_3->forward != ((void*)0))
   return -VAR_0;
  VAR_3->forward = VAR_4->dev;
  break;

 case 128:
  if (VAR_3->forward == ((void*)0))
   return -VAR_0;
  VAR_3->forward = ((void*)0);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
