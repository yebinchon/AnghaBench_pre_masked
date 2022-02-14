
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {scalar_t__ len; scalar_t__ val; } ;


 struct data FUNC_0 (struct data,int) ;
 int FUNC_1 (scalar_t__,void const*,int) ;

struct data FUNC_2(struct data VAR_0, const void *VAR_1, int VAR_2)
{
 VAR_0 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0.val + VAR_0.len, VAR_1, VAR_2);
 VAR_0.len += VAR_2;
 return VAR_0;
}
