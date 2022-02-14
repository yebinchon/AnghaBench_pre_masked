
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_2, int (*VAR_3)(struct module *, int),
     struct module *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_5 < 32 && !(VAR_2 & (1U << VAR_5)))
   continue;
  if (!FUNC_0(VAR_5, VAR_1)) {
   if (VAR_3(VAR_4, VAR_5))
    return VAR_5;
  }
 }
 return VAR_2;
}
