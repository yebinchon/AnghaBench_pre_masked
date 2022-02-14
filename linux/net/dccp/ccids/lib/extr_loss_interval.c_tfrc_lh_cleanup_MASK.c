
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfrc_loss_hist {scalar_t__ counter; int ** ring; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tfrc_loss_hist*) ;
 int VAR_1 ;

void FUNC_3(struct tfrc_loss_hist *VAR_2)
{
 if (!FUNC_2(VAR_2))
  return;

 for (VAR_2->counter = 0; VAR_2->counter < VAR_0; VAR_2->counter++)
  if (VAR_2->ring[FUNC_0(VAR_2->counter)] != ((void*)0)) {
   FUNC_1(VAR_1,
     VAR_2->ring[FUNC_0(VAR_2->counter)]);
   VAR_2->ring[FUNC_0(VAR_2->counter)] = ((void*)0);
  }
}
