
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcpip_init_done_fn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int ,int ) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;

void
FUNC_5(tcpip_init_done_fn VAR_10, void *VAR_11)
{
  FUNC_1();

  VAR_7 = VAR_10;
  VAR_8 = VAR_11;
  if(FUNC_2(&VAR_6, VAR_1) != VAR_0) {
    FUNC_0("failed to create tcpip_thread mbox", 0);
  }






  FUNC_4(VAR_2, VAR_9, ((void*)0), VAR_4, VAR_3);
}
