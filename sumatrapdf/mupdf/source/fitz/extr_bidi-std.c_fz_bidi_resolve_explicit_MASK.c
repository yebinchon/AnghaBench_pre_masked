
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ fz_bidi_level ;
typedef int fz_bidi_chartype ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;


 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

size_t FUNC_3(fz_bidi_level VAR_5, fz_bidi_chartype VAR_6, fz_bidi_chartype *VAR_7, fz_bidi_level *VAR_8, size_t VAR_9,
    fz_bidi_level VAR_10)
{
 size_t VAR_11;



 int VAR_12 = VAR_10;


 FUNC_0(VAR_10 >= 0 && VAR_5 >= 0 && VAR_5 <= VAR_4);


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
 {
  fz_bidi_chartype VAR_13 = VAR_7[VAR_11];
  switch (VAR_13)
  {
  case 131:
  case 132:
   VAR_10++;
   if (FUNC_1(VAR_5) <= VAR_4)
   {
    VAR_8[VAR_11] = FUNC_1(VAR_5);
    VAR_7[VAR_11] = VAR_0;
    VAR_11 += FUNC_3(VAR_8[VAR_11], (VAR_13 == 132 ? VAR_2 : VAR_1),
       &VAR_7[VAR_11+1], &VAR_8[VAR_11+1],
        VAR_9 - (VAR_11+1), VAR_10);
    VAR_10--;
    continue;
   }
   VAR_13 = VAR_7[VAR_11] = VAR_0;
   break;

  case 128:
  case 129:
   VAR_10++;
   if (FUNC_2(VAR_5) <= VAR_4)
   {
    VAR_8[VAR_11] = FUNC_2(VAR_5);
    VAR_7[VAR_11] = VAR_0;
    VAR_11 += FUNC_3(VAR_8[VAR_11], (VAR_13 == 129 ? VAR_2 : VAR_3),
        &VAR_7[VAR_11+1], &VAR_8[VAR_11+1],
         VAR_9 - (VAR_11+1), VAR_10);
    VAR_10--;
    continue;
   }
   VAR_13 = VAR_7[VAR_11] = VAR_0;
   break;

  case 130:
   VAR_13 = VAR_7[VAR_11] = VAR_0;
   if (VAR_10)
   {
    if (VAR_12 < VAR_10)
    {
     VAR_10--;
    }
    else
    {
     VAR_9 = VAR_11;
    }
   }
   break;
  }


  if (VAR_6 != VAR_2)
  {
   VAR_13 = VAR_6;
  }
  VAR_8[VAR_11] = VAR_5;
  if (VAR_7[VAR_11] != VAR_0)
   VAR_7[VAR_11] = VAR_13;
 }

 return VAR_11;
}
