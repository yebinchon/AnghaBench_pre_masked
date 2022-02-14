
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int expansion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct d_info*,struct demangle_component*) ;
 int FUNC_1 (struct d_info*,int) ;
 struct demangle_component* FUNC_2 (struct d_info*) ;
 struct demangle_component* FUNC_3 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_4 (struct d_info*,char*,int) ;
 struct demangle_component* FUNC_5 (struct d_info*) ;
 char FUNC_6 (struct d_info*) ;
 char FUNC_7 (struct d_info*) ;
 struct demangle_component* FUNC_8 (struct d_info*,int ) ;
 struct demangle_component* FUNC_9 (struct d_info*) ;
 struct demangle_component* FUNC_10 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_11 (struct d_info *VAR_2)
{
  char VAR_3 = FUNC_6 (VAR_2);
  struct demangle_component *VAR_4;

  switch (VAR_3)
    {
    case 'N':
      return FUNC_5 (VAR_2);

    case 'Z':
      return FUNC_2 (VAR_2);

    case 'U':
      return FUNC_10 (VAR_2);

    case 'S':
      {
 int VAR_5;

 if (FUNC_7 (VAR_2) != 't')
   {
     VAR_4 = FUNC_8 (VAR_2, 0);
     VAR_5 = 1;
   }
 else
   {
     FUNC_1 (VAR_2, 2);
     VAR_4 = FUNC_3 (VAR_2, VAR_0,
         FUNC_4 (VAR_2, "std", 3),
         FUNC_10 (VAR_2));
     VAR_2->expansion += 3;
     VAR_5 = 0;
   }

 if (FUNC_6 (VAR_2) != 'I')
   {



   }
 else
   {




     if (! VAR_5)
       {
  if (! FUNC_0 (VAR_2, VAR_4))
    return ((void*)0);
       }
     VAR_4 = FUNC_3 (VAR_2, VAR_1, VAR_4,
         FUNC_9 (VAR_2));
   }

 return VAR_4;
      }

    case 'L':
    default:
      VAR_4 = FUNC_10 (VAR_2);
      if (FUNC_6 (VAR_2) == 'I')
 {



   if (! FUNC_0 (VAR_2, VAR_4))
     return ((void*)0);
   VAR_4 = FUNC_3 (VAR_2, VAR_1, VAR_4,
       FUNC_9 (VAR_2));
 }
      return VAR_4;
    }
}
