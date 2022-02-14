
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (void*,struct nlattr*,int) ;

__attribute__((used)) static void FUNC_2(struct nlattr **VAR_1,
      void *VAR_2, int VAR_3,
      void *VAR_4, int VAR_5, int VAR_6)
{
 if (!VAR_1[VAR_3])
  return;
 FUNC_1(VAR_2, VAR_1[VAR_3], VAR_6);
 if (VAR_5 == VAR_0 || !VAR_1[VAR_5])
  FUNC_0(VAR_4, 0xff, VAR_6);
 else
  FUNC_1(VAR_4, VAR_1[VAR_5], VAR_6);
}
