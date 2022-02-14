
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int expansion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,char) ;
 scalar_t__ FUNC_2 (struct d_info*,char) ;
 struct demangle_component* FUNC_3 (struct d_info*,int ) ;
 struct demangle_component* FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_6 (struct d_info*) ;
 int FUNC_7 (struct d_info*) ;
 int FUNC_8 (struct d_info*) ;
 struct demangle_component* FUNC_9 (struct d_info*) ;
 struct demangle_component* FUNC_10 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_11 (struct d_info *VAR_18)
{
  VAR_18->expansion += 20;
  if (FUNC_2 (VAR_18, 'T'))
    {
      switch (FUNC_7 (VAR_18))
 {
 case 'V':
   VAR_18->expansion -= 5;
   return FUNC_5 (VAR_18, VAR_16,
         FUNC_0 (VAR_18), ((void*)0));
 case 'T':
   VAR_18->expansion -= 10;
   return FUNC_5 (VAR_18, VAR_17,
         FUNC_0 (VAR_18), ((void*)0));
 case 'I':
   return FUNC_5 (VAR_18, VAR_12,
         FUNC_0 (VAR_18), ((void*)0));
 case 'S':
   return FUNC_5 (VAR_18, VAR_14,
         FUNC_0 (VAR_18), ((void*)0));

 case 'h':
   if (! FUNC_1 (VAR_18, 'h'))
     return ((void*)0);
   return FUNC_5 (VAR_18, VAR_7,
         FUNC_3 (VAR_18, 0), ((void*)0));

 case 'v':
   if (! FUNC_1 (VAR_18, 'v'))
     return ((void*)0);
   return FUNC_5 (VAR_18, VAR_15,
         FUNC_3 (VAR_18, 0), ((void*)0));

 case 'c':
   if (! FUNC_1 (VAR_18, '\0'))
     return ((void*)0);
   if (! FUNC_1 (VAR_18, '\0'))
     return ((void*)0);
   return FUNC_5 (VAR_18, VAR_1,
         FUNC_3 (VAR_18, 0), ((void*)0));

 case 'C':
   {
     struct demangle_component *VAR_19;
     int VAR_20;
     struct demangle_component *VAR_21;

     VAR_19 = FUNC_0 (VAR_18);
     VAR_20 = FUNC_8 (VAR_18);
     if (VAR_20 < 0)
       return ((void*)0);
     if (! FUNC_2 (VAR_18, '_'))
       return ((void*)0);
     VAR_21 = FUNC_0 (VAR_18);


     VAR_18->expansion += 5;
     return FUNC_5 (VAR_18, VAR_0,
    VAR_21, VAR_19);
   }

 case 'F':
   return FUNC_5 (VAR_18, VAR_13,
         FUNC_0 (VAR_18), ((void*)0));
 case 'J':
   return FUNC_5 (VAR_18, VAR_4,
         FUNC_0 (VAR_18), ((void*)0));

 case 'H':
   return FUNC_5 (VAR_18, VAR_8,
         FUNC_6 (VAR_18), ((void*)0));

 case 'W':
   return FUNC_5 (VAR_18, VAR_9,
         FUNC_6 (VAR_18), ((void*)0));

 case 'A':
   return FUNC_5 (VAR_18, VAR_10,
         FUNC_10 (VAR_18), ((void*)0));

 default:
   return ((void*)0);
 }
    }
  else if (FUNC_2 (VAR_18, 'G'))
    {
      switch (FUNC_7 (VAR_18))
 {
 case 'V':
   return FUNC_5 (VAR_18, VAR_2,
         FUNC_6 (VAR_18), ((void*)0));

 case 'R':
   {
     struct demangle_component *VAR_22 = FUNC_6 (VAR_18);
     return FUNC_5 (VAR_18, VAR_6, VAR_22,
    FUNC_9 (VAR_18));
   }

 case 'A':
   return FUNC_5 (VAR_18, VAR_3,
         FUNC_3 (VAR_18, 0), ((void*)0));

 case 'T':
   switch (FUNC_7 (VAR_18))
     {
     case 'n':
       return FUNC_5 (VAR_18, VAR_5,
      FUNC_3 (VAR_18, 0), ((void*)0));
     default:





     case 't':
       return FUNC_5 (VAR_18, VAR_11,
      FUNC_3 (VAR_18, 0), ((void*)0));
     }

 case 'r':
   return FUNC_4 (VAR_18);

 default:
   return ((void*)0);
 }
    }
  else
    return ((void*)0);
}
