
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct listen_struct {struct net_device* dev; int callsign; struct listen_struct* next; } ;
typedef int ax25_address ;


 scalar_t__ FUNC_0 (int *,int *) ;
 struct listen_struct* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(ax25_address *VAR_2, struct net_device *VAR_3)
{
 struct listen_struct *VAR_4;

 FUNC_1(&VAR_1);
 for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  if (FUNC_0(&VAR_4->callsign, VAR_2) == 0 &&
      (VAR_4->dev == VAR_3 || VAR_4->dev == ((void*)0))) {
   FUNC_2(&VAR_1);
   return 1;
 }
 FUNC_2(&VAR_1);

 return 0;
}
