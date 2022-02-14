
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int args; } ;
struct TYPE_6__ {TYPE_1__* op; } ;
struct TYPE_8__ {TYPE_3__ s_extended_operator; TYPE_2__ s_operator; } ;
struct demangle_component {int type; TYPE_4__ u; } ;
struct d_info {int expansion; } ;
struct TYPE_5__ {char* code; int len; int args; } ;


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
 scalar_t__ FUNC_0 (char) ;
 struct demangle_component* FUNC_1 (struct d_info*) ;
 int FUNC_2 (struct d_info*,int) ;
 int FUNC_3 (struct d_info*,char) ;
 int FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct d_info*) ;
 struct demangle_component* FUNC_6 (struct d_info*,char) ;
 struct demangle_component* FUNC_7 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_8 (struct d_info*,int) ;
 struct demangle_component* FUNC_9 (struct d_info*) ;
 char FUNC_10 (struct d_info*) ;
 char FUNC_11 (struct d_info*) ;
 struct demangle_component* FUNC_12 (struct d_info*) ;
 struct demangle_component* FUNC_13 (struct d_info*) ;
 struct demangle_component* FUNC_14 (struct d_info*) ;
 struct demangle_component* FUNC_15 (struct d_info*) ;
 int FUNC_16 (struct demangle_component*) ;
 scalar_t__ FUNC_17 (char const*,char*) ;

__attribute__((used)) static inline struct demangle_component *
FUNC_18 (struct d_info *VAR_12)
{
  char VAR_13;

  VAR_13 = FUNC_10 (VAR_12);
  if (VAR_13 == 'L')
    return FUNC_5 (VAR_12);
  else if (VAR_13 == 'T')
    return FUNC_14 (VAR_12);
  else if (VAR_13 == 's' && FUNC_11 (VAR_12) == 'r')
    {
      struct demangle_component *VAR_14;
      struct demangle_component *VAR_15;

      FUNC_2 (VAR_12, 2);
      VAR_14 = FUNC_1 (VAR_12);
      VAR_15 = FUNC_15 (VAR_12);
      if (FUNC_10 (VAR_12) != 'I')
 return FUNC_7 (VAR_12, VAR_5, VAR_14, VAR_15);
      else
 return FUNC_7 (VAR_12, VAR_5, VAR_14,
       FUNC_7 (VAR_12, VAR_6, VAR_15,
      FUNC_12 (VAR_12)));
    }
  else if (VAR_13 == 's' && FUNC_11 (VAR_12) == 'p')
    {
      FUNC_2 (VAR_12, 2);
      return FUNC_7 (VAR_12, VAR_4,
     FUNC_18 (VAR_12), ((void*)0));
    }
  else if (VAR_13 == 'f' && FUNC_11 (VAR_12) == 'p')
    {

      int VAR_16;
      FUNC_2 (VAR_12, 2);
      if (FUNC_10 (VAR_12) == 'T')
 {

   FUNC_2 (VAR_12, 1);
   VAR_16 = 0;
 }
      else
 {
   VAR_16 = FUNC_4 (VAR_12);
   if (VAR_16 == VAR_11 || VAR_16 == -1)
     return ((void*)0);
   VAR_16++;
 }
      return FUNC_8 (VAR_12, VAR_16);
    }
  else if (FUNC_0 (VAR_13)
    || (VAR_13 == 'o' && FUNC_11 (VAR_12) == 'n'))
    {


      struct demangle_component *VAR_17;

      if (VAR_13 == 'o')

 FUNC_2 (VAR_12, 2);

      VAR_17 = FUNC_15 (VAR_12);
      if (VAR_17 == ((void*)0))
 return ((void*)0);
      if (FUNC_10 (VAR_12) == 'I')
 return FUNC_7 (VAR_12, VAR_6, VAR_17,
       FUNC_12 (VAR_12));
      else
 return VAR_17;
    }
  else if ((VAR_13 == 'i' || VAR_13 == 't')
    && FUNC_11 (VAR_12) == 'l')
    {

      struct demangle_component *VAR_18 = ((void*)0);
      FUNC_2 (VAR_12, 2);
      if (VAR_13 == 't')
 VAR_18 = FUNC_1 (VAR_12);
      if (!FUNC_11 (VAR_12))
 return ((void*)0);
      return FUNC_7 (VAR_12, VAR_2,
     VAR_18, FUNC_6 (VAR_12, 'E'));
    }
  else
    {
      struct demangle_component *VAR_19;
      const char *VAR_20 = ((void*)0);
      int VAR_21;

      VAR_19 = FUNC_9 (VAR_12);
      if (VAR_19 == ((void*)0))
 return ((void*)0);

      if (VAR_19->type == 128)
 {
   VAR_20 = VAR_19->u.s_operator.op->code;
   VAR_12->expansion += VAR_19->u.s_operator.op->len - 2;
   if (FUNC_17 (VAR_20, "st") == 0)
     return FUNC_7 (VAR_12, VAR_10, VAR_19,
    FUNC_1 (VAR_12));
 }

      switch (VAR_19->type)
 {
 default:
   return ((void*)0);
 case 128:
   VAR_21 = VAR_19->u.s_operator.op->args;
   break;
 case 129:
   VAR_21 = VAR_19->u.s_extended_operator.args;
   break;
 case 130:
   VAR_21 = 1;
   break;
 }

      switch (VAR_21)
 {
 case 0:
   return FUNC_7 (VAR_12, VAR_3, VAR_19, ((void*)0));

 case 1:
   {
     struct demangle_component *VAR_22;
     int VAR_23 = 0;

     if (VAR_20 && (VAR_20[0] == 'p' || VAR_20[0] == 'm')
  && VAR_20[1] == VAR_20[0])

       VAR_23 = !FUNC_3 (VAR_12, '_');

     if (VAR_19->type == 130
  && FUNC_3 (VAR_12, '_'))
       VAR_22 = FUNC_6 (VAR_12, 'E');
     else if (VAR_20 && !FUNC_17 (VAR_20, "sP"))
       VAR_22 = FUNC_13 (VAR_12);
     else
       VAR_22 = FUNC_18 (VAR_12);

     if (VAR_23)

       VAR_22 = FUNC_7 (VAR_12, VAR_1,
         VAR_22, VAR_22);

     return FUNC_7 (VAR_12, VAR_10, VAR_19, VAR_22);
   }
 case 2:
   {
     struct demangle_component *VAR_24;
     struct demangle_component *VAR_25;

     if (VAR_20 == ((void*)0))
       return ((void*)0);
     if (FUNC_16 (VAR_19))
       VAR_24 = FUNC_1 (VAR_12);
     else if (VAR_20[0] == 'f')

       VAR_24 = FUNC_9 (VAR_12);
     else
       VAR_24 = FUNC_18 (VAR_12);
     if (!FUNC_17 (VAR_20, "cl"))
       VAR_25 = FUNC_6 (VAR_12, 'E');
     else if (!FUNC_17 (VAR_20, "dt") || !FUNC_17 (VAR_20, "pt"))
       {
  VAR_25 = FUNC_15 (VAR_12);
  if (FUNC_10 (VAR_12) == 'I')
    VAR_25 = FUNC_7 (VAR_12, VAR_6,
           VAR_25, FUNC_12 (VAR_12));
       }
     else
       VAR_25 = FUNC_18 (VAR_12);

     return FUNC_7 (VAR_12, VAR_0, VAR_19,
    FUNC_7 (VAR_12,
          VAR_1,
          VAR_24, VAR_25));
   }
 case 3:
   {
     struct demangle_component *VAR_26;
     struct demangle_component *VAR_27;
     struct demangle_component *VAR_28;

     if (VAR_20 == ((void*)0))
       return ((void*)0);
     else if (!FUNC_17 (VAR_20, "qu"))
       {

  VAR_26 = FUNC_18 (VAR_12);
  VAR_27 = FUNC_18 (VAR_12);
  VAR_28 = FUNC_18 (VAR_12);
  if (VAR_28 == ((void*)0))
    return ((void*)0);
       }
     else if (VAR_20[0] == 'f')
       {

  VAR_26 = FUNC_9 (VAR_12);
  VAR_27 = FUNC_18 (VAR_12);
  VAR_28 = FUNC_18 (VAR_12);
  if (VAR_28 == ((void*)0))
    return ((void*)0);
       }
     else if (VAR_20[0] == 'n')
       {

  if (VAR_20[1] != 'w' && VAR_20[1] != 'a')
    return ((void*)0);
  VAR_26 = FUNC_6 (VAR_12, '_');
  VAR_27 = FUNC_1 (VAR_12);
  if (FUNC_10 (VAR_12) == 'E')
    {
      FUNC_2 (VAR_12, 1);
      VAR_28 = ((void*)0);
    }
  else if (FUNC_10 (VAR_12) == 'p'
    && FUNC_11 (VAR_12) == 'i')
    {

      FUNC_2 (VAR_12, 2);
      VAR_28 = FUNC_6 (VAR_12, 'E');
    }
  else if (FUNC_10 (VAR_12) == 'i'
    && FUNC_11 (VAR_12) == 'l')

    VAR_28 = FUNC_18 (VAR_12);
  else
    return ((void*)0);
       }
     else
       return ((void*)0);
     return FUNC_7 (VAR_12, VAR_7, VAR_19,
    FUNC_7 (VAR_12,
          VAR_8,
          VAR_26,
          FUNC_7 (VAR_12,
         VAR_9,
         VAR_27, VAR_28)));
   }
 default:
   return ((void*)0);
 }
    }
}
