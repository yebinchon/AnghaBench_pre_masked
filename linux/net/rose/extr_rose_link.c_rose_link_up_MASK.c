
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rose_neigh {int * ax25; TYPE_1__* dev; int digipeat; int callsign; } ;
typedef int ax25_cb ;
typedef int ax25_address ;
struct TYPE_2__ {scalar_t__ dev_addr; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct rose_neigh *VAR_2)
{
 ax25_address *VAR_3;
 ax25_cb *VAR_4;

 if (FUNC_2(&VAR_1, &VAR_0) == 0)
  VAR_3 = (ax25_address *)VAR_2->dev->dev_addr;
 else
  VAR_3 = &VAR_1;

 VAR_4 = VAR_2->ax25;
 VAR_2->ax25 = FUNC_1(VAR_3, &VAR_2->callsign, VAR_2->digipeat, VAR_2->dev);
 if (VAR_4)
  FUNC_0(VAR_4);

 return VAR_2->ax25 != ((void*)0);
}
