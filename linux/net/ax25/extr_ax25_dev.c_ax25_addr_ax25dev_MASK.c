
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dev; struct TYPE_6__* next; } ;
typedef TYPE_2__ ax25_dev ;
typedef int ax25_address ;
struct TYPE_5__ {scalar_t__ dev_addr; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

ax25_dev *FUNC_3(ax25_address *VAR_2)
{
 ax25_dev *VAR_3, *VAR_4 = ((void*)0);

 FUNC_1(&VAR_1);
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (FUNC_0(VAR_2, (ax25_address *)VAR_3->dev->dev_addr) == 0) {
   VAR_4 = VAR_3;
  }
 FUNC_2(&VAR_1);

 return VAR_4;
}
