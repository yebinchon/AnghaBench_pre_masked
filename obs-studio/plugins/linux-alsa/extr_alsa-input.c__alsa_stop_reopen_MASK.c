
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {int abort_event; scalar_t__ reopen_thread; int reopen; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int *) ;

void FUNC_4(struct alsa_data *VAR_0)
{
 if (FUNC_0(&VAR_0->reopen))
  FUNC_2(VAR_0->abort_event);

 if (VAR_0->reopen_thread) {
  FUNC_3(VAR_0->reopen_thread, ((void*)0));
  VAR_0->reopen_thread = 0;
 }

 FUNC_1(VAR_0->abort_event);
}
