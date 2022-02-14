
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int* VAR_5 ;

void *
FUNC_5(void * VAR_6)
{
  int VAR_7;
  pthread_t VAR_8 = FUNC_4();
  HANDLE VAR_9 = FUNC_3(VAR_8);

  FUNC_2("Using GetThreadPriority\n");
  FUNC_2("%10s %10s\n", "Set value", "Get value");

  for (VAR_7 = VAR_4;
       VAR_7 <= VAR_3;
       VAR_7++)
    {





        if (VAR_7 < 0)
   FUNC_1(VAR_9, VAR_2);
        else
   FUNC_1(VAR_9, VAR_1);
 FUNC_1(VAR_9, VAR_7);
 VAR_5[VAR_7+(VAR_0/2)] = FUNC_0(VAR_9);
 FUNC_2("%10d %10d\n", VAR_7, VAR_5[VAR_7+(VAR_0/2)]);
    }

  return (void *) 0;
}
