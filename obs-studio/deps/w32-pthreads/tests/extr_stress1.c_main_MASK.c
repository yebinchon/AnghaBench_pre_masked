
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mx; int cv; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

int
FUNC_9 ()
{
  unsigned int VAR_17;

  FUNC_0(FUNC_3(&VAR_14, ((void*)0), 3) == 0);
  FUNC_0(FUNC_3(&VAR_9, ((void*)0), 3) == 0);
  FUNC_0(FUNC_3(&VAR_6, ((void*)0), 3) == 0);

  FUNC_0(FUNC_6(&VAR_7, ((void*)0), VAR_8, (void *)(size_t)VAR_15) == 0);
  FUNC_0(FUNC_6(&VAR_12, ((void*)0), VAR_13, ((void*)0)) == 0);

  VAR_3 = VAR_0;

  FUNC_4(&VAR_14);

  for (VAR_17 = 1; !VAR_3; VAR_17++)
    {
      FUNC_4(&VAR_6);
      if (VAR_17 >= VAR_1)
 {
   VAR_3 = VAR_2;
 }
      FUNC_4(&VAR_9);
    }

  FUNC_0(FUNC_7(VAR_12, ((void*)0)) == 0);
  FUNC_0(FUNC_7(VAR_7, ((void*)0)) == 0);

  FUNC_1("Signals sent = %d\nWait timeouts = %d\nSignals taken = %d\nBias = %d\nTimeout = %d\n",
  VAR_10,
  VAR_16,
  VAR_11,
  (int) VAR_4,
  VAR_15);


  FUNC_0(FUNC_2(&VAR_6) == 0);
  FUNC_0(FUNC_2(&VAR_9) == 0);
  FUNC_0(FUNC_2(&VAR_14) == 0);
  FUNC_0(FUNC_5(&VAR_5.cv) == 0);
  FUNC_0(FUNC_8(&VAR_5.mx) == 0);


  return 0;
}
