
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor {int count; } ;


 struct descriptor* FUNC_0 (int,char const*) ;

bool
FUNC_1(int VAR_0, const char *VAR_1, int VAR_2)
{
 struct descriptor *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 == ((void*)0))
  return 0;
 VAR_3->count = VAR_2;
 return 1;
}
