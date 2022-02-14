
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int len; int val; } ;


 struct data FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;

struct data FUNC_2(const char *VAR_1, int VAR_2)
{
 struct data VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);

 VAR_3.len = VAR_2;
 FUNC_1(VAR_3.val, VAR_1, VAR_2);

 return VAR_3;
}
