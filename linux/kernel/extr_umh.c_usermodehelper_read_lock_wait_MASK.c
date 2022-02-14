
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 long FUNC_4 (long) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

long FUNC_6(long VAR_6)
{
 FUNC_0(VAR_5);

 if (VAR_6 < 0)
  return -VAR_0;

 FUNC_1(&VAR_2);
 for (;;) {
  FUNC_3(&VAR_4, &VAR_5,
    VAR_1);
  if (!VAR_3)
   break;

  FUNC_5(&VAR_2);

  VAR_6 = FUNC_4(VAR_6);
  if (!VAR_6)
   break;

  FUNC_1(&VAR_2);
 }
 FUNC_2(&VAR_4, &VAR_5);
 return VAR_6;
}
