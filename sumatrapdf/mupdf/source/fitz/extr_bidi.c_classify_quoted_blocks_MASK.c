
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
typedef int fz_bidi_chartype ;






 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const uint32_t *VAR_3,
  fz_bidi_chartype *VAR_4,
  size_t VAR_5)
{
 size_t VAR_6;
 int VAR_7 = VAR_1;
 int VAR_8 = VAR_1;
 int VAR_9 = VAR_1;
 int VAR_10 = VAR_1;




 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  switch (FUNC_0(VAR_4[VAR_6]))
  {
  case 129:
   VAR_9 = VAR_2;
   break;

  case 128:
   VAR_10 = VAR_2;
   break;

  default:
   break;
  }
 }




 if (!VAR_9 || !VAR_10)
 {
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  if (VAR_3[VAR_6]=='"')
  {



   if (VAR_7)
   {
    VAR_7 = VAR_1;
    if (VAR_8)
    {
     VAR_8 = VAR_1;
     VAR_4[VAR_6] = VAR_0;
    }
   }
   else
   {
    size_t VAR_11;
    int VAR_12 = VAR_1;

    VAR_7 = VAR_2;







    for (VAR_11 = VAR_6 + 1; !VAR_12 && (VAR_11 < VAR_5) && VAR_3[VAR_11] != '"'; ++VAR_11)
    {
     switch(VAR_4[VAR_11])
     {
     case 130:
     case 132:
      VAR_12 = VAR_2;
      break;

     case 133:
     case 134:
      VAR_4[VAR_6] = 132;
      VAR_8 = VAR_2;
      VAR_12 = VAR_2;
      break;

     case 131:
     case 135:
      VAR_4[VAR_6] = 130;
      VAR_8 = VAR_2;
      VAR_12 = VAR_2;
      break;

     default:
      break;
     }
    }
   }
  }
 }
}
