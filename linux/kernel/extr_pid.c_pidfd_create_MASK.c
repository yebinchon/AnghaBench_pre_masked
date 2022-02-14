
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int ,int) ;
 int FUNC_1 (struct pid*) ;
 int VAR_2 ;
 int FUNC_2 (struct pid*) ;

__attribute__((used)) static int FUNC_3(struct pid *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0("[pidfd]", &VAR_2, FUNC_1(VAR_3),
         VAR_1 | VAR_0);
 if (VAR_4 < 0)
  FUNC_2(VAR_3);

 return VAR_4;
}
