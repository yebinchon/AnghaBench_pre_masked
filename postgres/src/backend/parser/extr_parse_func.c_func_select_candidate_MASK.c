
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; scalar_t__* args; } ;
typedef scalar_t__ TYPCATEGORY ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* FuncCandidateList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__*,int*) ;

FuncCandidateList
FUNC_8(int VAR_7,
       Oid *VAR_8,
       FuncCandidateList VAR_9)
{
 FuncCandidateList VAR_10,
    VAR_11,
    VAR_12;
 Oid *VAR_13;
 Oid VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17,
    VAR_18,
    VAR_19;
 Oid VAR_20[VAR_3];
 TYPCATEGORY VAR_21[VAR_3],
    VAR_22;
 bool VAR_23;
 bool VAR_24[VAR_3];
 bool VAR_25;


 if (VAR_7 > VAR_3)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("cannot pass more than %d argument to a function",
          "cannot pass more than %d arguments to a function",
          VAR_3,
          VAR_3)));
 VAR_19 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
 {
  if (VAR_8[VAR_15] != VAR_6)
   VAR_20[VAR_15] = FUNC_6(VAR_8[VAR_15]);
  else
  {

   VAR_20[VAR_15] = VAR_6;
   VAR_19++;
  }
 }





 VAR_16 = 0;
 VAR_17 = 0;
 VAR_12 = ((void*)0);
 for (VAR_10 = VAR_9;
   VAR_10 != ((void*)0);
   VAR_10 = VAR_10->next)
 {
  VAR_13 = VAR_10->args;
  VAR_18 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  {
   if (VAR_20[VAR_15] != VAR_6 &&
    VAR_13[VAR_15] == VAR_20[VAR_15])
    VAR_18++;
  }


  if ((VAR_18 > VAR_17) || (VAR_12 == ((void*)0)))
  {
   VAR_17 = VAR_18;
   VAR_9 = VAR_10;
   VAR_12 = VAR_10;
   VAR_16 = 1;
  }

  else if (VAR_18 == VAR_17)
  {
   VAR_12->next = VAR_10;
   VAR_12 = VAR_10;
   VAR_16++;
  }

 }

 if (VAR_12)
  VAR_12->next = ((void*)0);

 if (VAR_16 == 1)
  return VAR_9;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  VAR_21[VAR_15] = FUNC_1(VAR_20[VAR_15]);
 VAR_16 = 0;
 VAR_17 = 0;
 VAR_12 = ((void*)0);
 for (VAR_10 = VAR_9;
   VAR_10 != ((void*)0);
   VAR_10 = VAR_10->next)
 {
  VAR_13 = VAR_10->args;
  VAR_18 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  {
   if (VAR_20[VAR_15] != VAR_6)
   {
    if (VAR_13[VAR_15] == VAR_20[VAR_15] ||
     FUNC_0(VAR_21[VAR_15], VAR_13[VAR_15]))
     VAR_18++;
   }
  }

  if ((VAR_18 > VAR_17) || (VAR_12 == ((void*)0)))
  {
   VAR_17 = VAR_18;
   VAR_9 = VAR_10;
   VAR_12 = VAR_10;
   VAR_16 = 1;
  }
  else if (VAR_18 == VAR_17)
  {
   VAR_12->next = VAR_10;
   VAR_12 = VAR_10;
   VAR_16++;
  }
 }

 if (VAR_12)
  VAR_12->next = ((void*)0);

 if (VAR_16 == 1)
  return VAR_9;







 if (VAR_19 == 0)
  return ((void*)0);
 VAR_25 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
 {
  bool VAR_26;

  if (VAR_20[VAR_15] != VAR_6)
   continue;
  VAR_25 = 1;
  VAR_21[VAR_15] = VAR_4;
  VAR_24[VAR_15] = 0;
  VAR_26 = 0;
  for (VAR_10 = VAR_9;
    VAR_10 != ((void*)0);
    VAR_10 = VAR_10->next)
  {
   VAR_13 = VAR_10->args;
   VAR_14 = VAR_13[VAR_15];
   FUNC_7(VAR_14,
          &VAR_22,
          &VAR_23);
   if (VAR_21[VAR_15] == VAR_4)
   {

    VAR_21[VAR_15] = VAR_22;
    VAR_24[VAR_15] = VAR_23;
   }
   else if (VAR_22 == VAR_21[VAR_15])
   {

    VAR_24[VAR_15] |= VAR_23;
   }
   else
   {

    if (VAR_22 == VAR_5)
    {

     VAR_21[VAR_15] = VAR_22;
     VAR_24[VAR_15] = VAR_23;
    }
    else
    {



     VAR_26 = 1;
    }
   }
  }
  if (VAR_26 && VAR_21[VAR_15] != VAR_5)
  {

   VAR_25 = 0;
   break;
  }
 }

 if (VAR_25)
 {

  VAR_16 = 0;
  VAR_11 = VAR_9;
  VAR_12 = ((void*)0);
  for (VAR_10 = VAR_9;
    VAR_10 != ((void*)0);
    VAR_10 = VAR_10->next)
  {
   bool VAR_27 = 1;

   VAR_13 = VAR_10->args;
   for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
   {
    if (VAR_20[VAR_15] != VAR_6)
     continue;
    VAR_14 = VAR_13[VAR_15];
    FUNC_7(VAR_14,
           &VAR_22,
           &VAR_23);
    if (VAR_22 != VAR_21[VAR_15])
    {
     VAR_27 = 0;
     break;
    }
    if (VAR_24[VAR_15] && !VAR_23)
    {
     VAR_27 = 0;
     break;
    }
   }
   if (VAR_27)
   {

    VAR_12 = VAR_10;
    VAR_16++;
   }
   else
   {

    if (VAR_12)
     VAR_12->next = VAR_10->next;
    else
     VAR_11 = VAR_10->next;
   }
  }


  if (VAR_12)
  {
   VAR_9 = VAR_11;

   VAR_12->next = ((void*)0);
  }

  if (VAR_16 == 1)
   return VAR_9;
 }
 if (VAR_19 < VAR_7)
 {
  Oid VAR_28 = VAR_6;

  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  {
   if (VAR_20[VAR_15] == VAR_6)
    continue;
   if (VAR_28 == VAR_6)
    VAR_28 = VAR_20[VAR_15];
   else if (VAR_28 != VAR_20[VAR_15])
   {

    VAR_28 = VAR_6;
    break;
   }
  }

  if (VAR_28 != VAR_6)
  {

   for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
    VAR_20[VAR_15] = VAR_28;
   VAR_16 = 0;
   VAR_12 = ((void*)0);
   for (VAR_10 = VAR_9;
     VAR_10 != ((void*)0);
     VAR_10 = VAR_10->next)
   {
    VAR_13 = VAR_10->args;
    if (FUNC_2(VAR_7, VAR_20, VAR_13,
         VAR_0))
    {
     if (++VAR_16 > 1)
      break;
     VAR_12 = VAR_10;
    }
   }
   if (VAR_16 == 1)
   {

    VAR_12->next = ((void*)0);
    return VAR_12;
   }
  }
 }

 return ((void*)0);
}
