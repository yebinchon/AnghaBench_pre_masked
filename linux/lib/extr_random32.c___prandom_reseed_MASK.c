
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEFINE_SPINLOCK ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(bool VAR_1)
{
 unsigned long VAR_2;
 static bool VAR_3 = 0;
 static DEFINE_SPINLOCK(VAR_4);
 if (!FUNC_1(&VAR_4, VAR_2))
  return;

 if (VAR_3 && !VAR_1)
  goto out;

 VAR_3 = 1;
 FUNC_0(&VAR_0);
out:
 FUNC_2(&VAR_4, VAR_2);
}
