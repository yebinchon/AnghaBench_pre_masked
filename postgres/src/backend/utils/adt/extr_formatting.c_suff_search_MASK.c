
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int len; int * name; } ;
typedef TYPE_1__ KeySuffix ;


 scalar_t__ FUNC_0 (char const*,int *,int ) ;

__attribute__((used)) static const KeySuffix *
FUNC_1(const char *VAR_0, const KeySuffix *VAR_1, int VAR_2)
{
 const KeySuffix *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++)
 {
  if (VAR_3->type != VAR_2)
   continue;

  if (FUNC_0(VAR_0, VAR_3->name, VAR_3->len) == 0)
   return VAR_3;
 }
 return ((void*)0);
}
