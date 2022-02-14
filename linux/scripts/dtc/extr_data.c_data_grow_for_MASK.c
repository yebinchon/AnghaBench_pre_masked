
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int len; int val; } ;


 int FUNC_0 (int ,int) ;

struct data FUNC_1(struct data VAR_0, int VAR_1)
{
 struct data VAR_2;
 int VAR_3;

 if (VAR_1 == 0)
  return VAR_0;

 VAR_2 = VAR_0;

 VAR_3 = VAR_1;

 while ((VAR_0.len + VAR_1) > VAR_3)
  VAR_3 *= 2;

 VAR_2.val = FUNC_0(VAR_0.val, VAR_3);

 return VAR_2;
}
