
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (int *,int *,int ) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int ,char*,char*) ;
 int FUNC_11 (int ,int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*) ;
 int VAR_8 ;
 int FUNC_16 () ;

int FUNC_17(int VAR_9, char **VAR_10)
{
 char *VAR_11;
 char *VAR_12 = "";
 int VAR_13, VAR_14;

 while ((VAR_13 = FUNC_8(VAR_9, VAR_10, "p:rN")) != -1)
 {
  switch (VAR_13)
  {
  case 'p': VAR_12 = VAR_6; break;
  case 'r': VAR_5++; break;
  case 'N': VAR_4^=1; break;
  default: FUNC_16(); break;
  }
 }

 if (VAR_7 == VAR_9)
  FUNC_16();

 VAR_11 = VAR_10[VAR_7++];

 VAR_2 = FUNC_9(((void*)0), ((void*)0), VAR_1);
 if (!VAR_2)
 {
  FUNC_3(VAR_8, "cannot initialise context\n");
  FUNC_1(1);
 }

 if (VAR_4)
  FUNC_6(VAR_2);
 else
  FUNC_4(VAR_2);

 VAR_3 = FUNC_15(VAR_2, VAR_11);
 if (FUNC_14(VAR_2, VAR_3))
  if (!FUNC_11(VAR_2, VAR_3, VAR_12))
   FUNC_10(VAR_2, VAR_0, "cannot authenticate password: %s", VAR_11);

 if (VAR_7 == VAR_9)
 {
  int VAR_15 = FUNC_12(VAR_2, VAR_3);
  for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++)
   FUNC_2(VAR_14);
 }
 else
 {
  while (VAR_7 < VAR_9)
  {
   FUNC_2(FUNC_0(VAR_10[VAR_7]));
   VAR_7++;
  }
 }

 FUNC_13(VAR_2, VAR_3);
 FUNC_7(VAR_2);
 FUNC_5(VAR_2);
 return 0;
}
