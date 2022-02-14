
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct d_info*,int) ;
 struct demangle_component* FUNC_1 (struct d_info*,char) ;
 struct demangle_component* FUNC_2 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_3 (struct d_info*,char const*,int) ;
 char FUNC_4 (struct d_info*) ;
 int FUNC_5 (struct d_info*) ;
 char* FUNC_6 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_7 (struct d_info *VAR_2)
{
  struct demangle_component *VAR_3 = ((void*)0);
  struct demangle_component *VAR_4 = ((void*)0);
  int VAR_5, VAR_6;
  char VAR_7;
  const char *VAR_8;

  VAR_5 = FUNC_5 (VAR_2);
  if (VAR_5 <= 1)
    return ((void*)0);


  if (FUNC_4 (VAR_2) != '_')
    return ((void*)0);
  VAR_5--;

  VAR_8 = FUNC_6 (VAR_2);
  VAR_6 = 0;

  while (VAR_5 > 0)
    {
      VAR_7 = VAR_8[VAR_6];
      if (!VAR_7)
 return ((void*)0);


      if (VAR_7 == '$')
 {
   VAR_6++;
   switch (VAR_8[VAR_6++])
     {
     case 'S':
       VAR_7 = '/';
       break;
     case '_':
       VAR_7 = '.';
       break;
     case '$':
       VAR_7 = '$';
       break;
     default:
       return ((void*)0);
     }
   VAR_4 = FUNC_1 (VAR_2, VAR_7);
   FUNC_0 (VAR_2, VAR_6);
   VAR_8 = FUNC_6 (VAR_2);
   VAR_5 -= VAR_6;
   VAR_6 = 0;
   if (VAR_4 == ((void*)0))
     return ((void*)0);
 }

      else
 {
   while (VAR_6 < VAR_5 && VAR_8[VAR_6] && VAR_8[VAR_6] != '$')
     VAR_6++;

   VAR_4 = FUNC_3 (VAR_2, VAR_8, VAR_6);
   FUNC_0 (VAR_2, VAR_6);
   VAR_8 = FUNC_6 (VAR_2);
   VAR_5 -= VAR_6;
   VAR_6 = 0;
   if (VAR_4 == ((void*)0))
     return ((void*)0);
 }

      if (VAR_3 == ((void*)0))
 VAR_3 = VAR_4;
      else
 {
   VAR_3 = FUNC_2 (VAR_2, VAR_0, VAR_3, VAR_4);
   if (VAR_3 == ((void*)0))
     return ((void*)0);
 }
    }

  VAR_3 = FUNC_2 (VAR_2, VAR_1, VAR_3, ((void*)0));

  return VAR_3;
}
