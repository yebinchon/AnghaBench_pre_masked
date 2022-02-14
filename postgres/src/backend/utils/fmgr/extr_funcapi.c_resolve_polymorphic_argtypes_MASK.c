
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;







 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int const,int,int const) ;

bool
FUNC_3(int VAR_4, Oid *VAR_5, char *VAR_6,
        Node *VAR_7)
{
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 Oid VAR_11 = VAR_0;
 Oid VAR_12 = VAR_0;
 Oid VAR_13 = VAR_0;
 int VAR_14;
 int VAR_15;


 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
 {
  char VAR_16 = VAR_6 ? VAR_6[VAR_15] : VAR_1;

  switch (VAR_5[VAR_15])
  {
   case 131:
   case 129:
   case 130:
    if (VAR_16 == VAR_2 || VAR_16 == VAR_3)
     VAR_8 = 1;
    else
    {
     if (!FUNC_0(VAR_11))
     {
      VAR_11 = FUNC_1(VAR_7,
                VAR_14);
      if (!FUNC_0(VAR_11))
       return 0;
     }
     VAR_5[VAR_15] = VAR_11;
    }
    break;
   case 132:
    if (VAR_16 == VAR_2 || VAR_16 == VAR_3)
     VAR_9 = 1;
    else
    {
     if (!FUNC_0(VAR_12))
     {
      VAR_12 = FUNC_1(VAR_7,
                 VAR_14);
      if (!FUNC_0(VAR_12))
       return 0;
     }
     VAR_5[VAR_15] = VAR_12;
    }
    break;
   case 128:
    if (VAR_16 == VAR_2 || VAR_16 == VAR_3)
     VAR_10 = 1;
    else
    {
     if (!FUNC_0(VAR_13))
     {
      VAR_13 = FUNC_1(VAR_7,
                 VAR_14);
      if (!FUNC_0(VAR_13))
       return 0;
     }
     VAR_5[VAR_15] = VAR_13;
    }
    break;
   default:
    break;
  }
  if (VAR_16 != VAR_2 && VAR_16 != VAR_3)
   VAR_14++;
 }


 if (!VAR_8 && !VAR_9 &&
  !VAR_10)
  return 1;


 if (!FUNC_0(VAR_11) && !FUNC_0(VAR_12) &&
  !FUNC_0(VAR_13))
  return 0;


 if (VAR_8 && !FUNC_0(VAR_11))
 {
  if (FUNC_0(VAR_12))
   VAR_11 = FUNC_2(131,
               VAR_12,
               132);
  if (FUNC_0(VAR_13))
  {
   Oid VAR_17 = FUNC_2(131,
                VAR_13,
                128);


   if (FUNC_0(VAR_11) && VAR_11 != VAR_17)
    return 0;
   VAR_11 = VAR_17;
  }
 }

 if (VAR_9 && !FUNC_0(VAR_12))
  VAR_12 = FUNC_2(132,
            VAR_11,
            131);





 if (VAR_10 && !FUNC_0(VAR_13))
  return 0;




 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
 {
  switch (VAR_5[VAR_15])
  {
   case 131:
   case 129:
   case 130:
    VAR_5[VAR_15] = VAR_11;
    break;
   case 132:
    VAR_5[VAR_15] = VAR_12;
    break;
   case 128:
    VAR_5[VAR_15] = VAR_13;
    break;
   default:
    break;
  }
 }

 return 1;
}
