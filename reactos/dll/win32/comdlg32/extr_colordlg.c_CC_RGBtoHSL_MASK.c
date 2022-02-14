
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int COLORREF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(char VAR_0, COLORREF VAR_1)
{
 WORD VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 = 0;
 int VAR_7 = 0, VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_2(VAR_1);
 VAR_9 = FUNC_1(VAR_1);
 VAR_10 = FUNC_0(VAR_1);

 VAR_2 = FUNC_3(VAR_8, VAR_10);
 VAR_2 = FUNC_3(VAR_2, VAR_9);
 VAR_3 = FUNC_4(VAR_8, VAR_10);
 VAR_3 = FUNC_4(VAR_3, VAR_9);

 VAR_4 = VAR_2 + VAR_3;
 VAR_5 = VAR_2 - VAR_3;

 switch(VAR_0)
 {

  case 'L': VAR_4 *= 120;
    VAR_6 = VAR_4 / 255;
    break;

  case 'S': if (!VAR_4)
     VAR_6 = 0;
    else
     if (!VAR_3 || VAR_2 == 255)
      VAR_6 = 240;
    else
    {
     VAR_6 = VAR_5 * 240;
     VAR_6 /= (VAR_4 > 255 ? 510 - VAR_4 : VAR_4);
    }
    break;

  case 'H': if (!VAR_5)
     VAR_6 = 160;
    else
    {
     if (VAR_2 == VAR_8)
     {
      VAR_7 = 40 * (VAR_9 - VAR_10);
      VAR_7 /= (int) VAR_5;
      if (VAR_7 < 0)
       VAR_7 += 240;
     }
     else
      if (VAR_2 == VAR_9)
      {
       VAR_7 = 40 * (VAR_10 - VAR_8);
       VAR_7 /= (int) VAR_5;
       VAR_7 += 80;
      }
      else
       if (VAR_2 == VAR_10)
       {
        VAR_7 = 40 * (VAR_8 - VAR_9);
        VAR_7 /= (int) VAR_5;
        VAR_7 += 160;
       }
     VAR_6 = VAR_7;
    }
    break;
 }
 return VAR_6;
}
