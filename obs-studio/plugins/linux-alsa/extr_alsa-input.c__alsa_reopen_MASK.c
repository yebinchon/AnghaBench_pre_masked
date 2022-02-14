
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {int reopen; int abort_event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct alsa_data*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int *) ;

void *FUNC_5(void *VAR_3)
{
 struct alsa_data *VAR_4 = VAR_3;
 unsigned long VAR_5 = VAR_2;

 FUNC_1(VAR_1, "Reopen thread started.");

 FUNC_2(&VAR_4->reopen, 1);

 while (FUNC_3(VAR_4->abort_event, VAR_5) == VAR_0) {
  if (FUNC_0(VAR_4))
   break;

  if (VAR_5 < (VAR_2 * 5))
   VAR_5 += VAR_2;
 }

 FUNC_2(&VAR_4->reopen, 0);

 FUNC_1(VAR_1, "Reopen thread is about to exit.");

 FUNC_4(((void*)0));
 return ((void*)0);
}
