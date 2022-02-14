
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,void**) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_7 ()
{
  pthread_t VAR_5;
  void *VAR_6;

  if (FUNC_6 (VAR_1))
    {
      FUNC_2 ("Cancel sleeping thread.\n");
      FUNC_1 (FUNC_4 (&VAR_5, ((void*)0), VAR_2, ((void*)0)) == 0);

      FUNC_0 (100);
      FUNC_1 (FUNC_3 (VAR_5) == 0);
      FUNC_1 (FUNC_5 (VAR_5, &VAR_6) == 0);
      FUNC_1 (VAR_6 == VAR_0 && "test_sleep" != ((void*)0));

      FUNC_2 ("Cancel waiting thread.\n");
      FUNC_1 (FUNC_4 (&VAR_5, ((void*)0), VAR_4, ((void*)0)) == 0);

      FUNC_0 (100);
      FUNC_1 (FUNC_3 (VAR_5) == 0);
      FUNC_1 (FUNC_5 (VAR_5, &VAR_6) == 0);
      FUNC_1 (VAR_6 == VAR_0 && "test_wait");

      FUNC_2 ("Cancel blocked thread (blocked on network I/O).\n");
      FUNC_1 (FUNC_4 (&VAR_5, ((void*)0), VAR_3, ((void*)0)) == 0);

      FUNC_0 (100);
      FUNC_1 (FUNC_3 (VAR_5) == 0);
      FUNC_1 (FUNC_5 (VAR_5, &VAR_6) == 0);
      FUNC_1 (VAR_6 == VAR_0 && "test_udp" != ((void*)0));
    }
  else
    {
      FUNC_2 ("Alertable async cancel not available.\n");
    }




  return 0;
}
