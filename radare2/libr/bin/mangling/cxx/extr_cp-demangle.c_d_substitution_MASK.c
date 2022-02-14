
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_standard_sub_info {char code; char const* set_last_name; int set_last_name_len; char* full_expansion; int full_len; char* simple_expansion; int simple_len; } ;
struct d_info {int options; int expansion; void* last_name; struct demangle_component** subs; scalar_t__ next_sub; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 struct demangle_component* FUNC_2 (struct d_info*,struct demangle_component*) ;
 int FUNC_3 (struct d_info*,struct demangle_component*) ;
 int FUNC_4 (struct d_info*,char) ;
 void* FUNC_5 (struct d_info*,char const*,int) ;
 char FUNC_6 (struct d_info*) ;
 char FUNC_7 (struct d_info*) ;
 struct d_standard_sub_info* VAR_1 ;

__attribute__((used)) static struct demangle_component *
FUNC_8 (struct d_info *VAR_2, int VAR_3)
{
  char VAR_4;

  if (! FUNC_4 (VAR_2, 'S'))
    return ((void*)0);

  VAR_4 = FUNC_6 (VAR_2);
  if (VAR_4 == '_' || FUNC_0 (VAR_4) || FUNC_1 (VAR_4))
    {
      unsigned int VAR_5;

      VAR_5 = 0;
      if (VAR_4 != '_')
 {
   do
     {
       unsigned int VAR_6;

       if (FUNC_0 (VAR_4))
  VAR_6 = VAR_5 * 36 + VAR_4 - '0';
       else if (FUNC_1 (VAR_4))
  VAR_6 = VAR_5 * 36 + VAR_4 - 'A' + 10;
       else
  return ((void*)0);
       if (VAR_6 < VAR_5)
  return ((void*)0);
       VAR_5 = VAR_6;
       VAR_4 = FUNC_6 (VAR_2);
     }
   while (VAR_4 != '_');

   ++VAR_5;
 }

      if (VAR_5 >= (unsigned int) VAR_2->next_sub)
 return ((void*)0);

      return VAR_2->subs[VAR_5];
    }
  else
    {
      int VAR_7;
      const struct d_standard_sub_info *VAR_8;
      const struct d_standard_sub_info *VAR_9;

      VAR_7 = (VAR_2->options & VAR_0) != 0;
      if (! VAR_7 && VAR_3)
 {
   char VAR_10;

   VAR_10 = FUNC_7 (VAR_2);
   if (VAR_10 == 'C' || VAR_10 == 'D')
     VAR_7 = 1;
 }

      VAR_9 = (&VAR_1[0]
       + sizeof VAR_1 / sizeof VAR_1[0]);
      for (VAR_8 = &VAR_1[0]; VAR_8 < VAR_9; ++VAR_8)
 {
   if (VAR_4 == VAR_8->code)
     {
       const char *VAR_11;
       int VAR_12;
       struct demangle_component *VAR_13;

       if (VAR_8->set_last_name != ((void*)0))
  VAR_2->last_name = FUNC_5 (VAR_2, VAR_8->set_last_name,
         VAR_8->set_last_name_len);
       if (VAR_7)
  {
    VAR_11 = VAR_8->full_expansion;
    VAR_12 = VAR_8->full_len;
  }
       else
  {
    VAR_11 = VAR_8->simple_expansion;
    VAR_12 = VAR_8->simple_len;
  }
       VAR_2->expansion += VAR_12;
       VAR_13 = FUNC_5 (VAR_2, VAR_11, VAR_12);
       if (FUNC_7 (VAR_2) == 'B')
  {


    VAR_13 = FUNC_2 (VAR_2, VAR_13);
    if (! FUNC_3 (VAR_2, VAR_13))
      return ((void*)0);
  }
       return VAR_13;
     }
 }

      return ((void*)0);
    }
}
