
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,char*,char*,char*,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int,int *,int *,int *,int *) ;

BOOL FUNC_7(void)
{
  int VAR_8;
  fd_set VAR_9;

  if (!FUNC_4(VAR_6, VAR_1, "", "", "", ""))
    return VAR_0;
  VAR_3 = 1;
  FUNC_1(&VAR_9);
  FUNC_0(VAR_7, &VAR_9);
  VAR_8 = FUNC_6(3, &VAR_9, ((void*)0), ((void*)0), ((void*)0));
  while (VAR_8 >= 0)
  {
    if (VAR_8 & 1)
    {
      FUNC_3();
    }
    else if (VAR_8 & 2)
    {
      FUNC_2();
    }
    else
    {
      if (!FUNC_5(&VAR_4, &VAR_5))
        return VAR_2;
    }
    FUNC_1(&VAR_9);
    FUNC_0(VAR_7, &VAR_9);
    VAR_8 = FUNC_6(3, &VAR_9, ((void*)0), ((void*)0), ((void*)0));
  }
  return VAR_2;
}
