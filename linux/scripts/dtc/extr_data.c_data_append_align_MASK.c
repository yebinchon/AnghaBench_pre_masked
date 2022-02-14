
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {scalar_t__ len; } ;


 int FUNC_0 (scalar_t__,int) ;
 struct data FUNC_1 (struct data,scalar_t__) ;

struct data FUNC_2(struct data VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0.len, VAR_1);
 return FUNC_1(VAR_0, VAR_2 - VAR_0.len);
}
