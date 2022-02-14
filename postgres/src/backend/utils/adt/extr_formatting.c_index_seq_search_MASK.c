
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int len; } ;
typedef TYPE_1__ KeyWord ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const*,int ) ;

__attribute__((used)) static const KeyWord *
FUNC_2(const char *VAR_0, const KeyWord *VAR_1, const int *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(*VAR_0))
  return ((void*)0);

 if ((VAR_3 = *(VAR_2 + (*VAR_0 - ' '))) > -1)
 {
  const KeyWord *VAR_4 = VAR_1 + VAR_3;

  do
  {
   if (FUNC_1(VAR_0, VAR_4->name, VAR_4->len) == 0)
    return VAR_4;
   VAR_4++;
   if (!VAR_4->name)
    return ((void*)0);
  } while (*VAR_0 == *VAR_4->name);
 }
 return ((void*)0);
}
