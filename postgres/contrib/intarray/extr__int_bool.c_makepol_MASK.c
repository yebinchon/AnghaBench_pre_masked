
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int WORKSTATE ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int const,int) ;

__attribute__((used)) static int32
FUNC_6(WORKSTATE *VAR_5)
{
 int32 VAR_6,
    VAR_7;
 int32 VAR_8[VAR_4];
 int32 VAR_9 = 0;


 FUNC_0();

 while ((VAR_7 = FUNC_4(VAR_5, &VAR_6)) != VAR_0)
 {
  switch (VAR_7)
  {
   case 128:
    FUNC_5(VAR_5, VAR_7, VAR_6);
    while (VAR_9 && (VAR_8[VAR_9 - 1] == (int32) '&' ||
         VAR_8[VAR_9 - 1] == (int32) '!'))
    {
     VAR_9--;
     FUNC_5(VAR_5, 129, VAR_8[VAR_9]);
    }
    break;
   case 129:
    if (VAR_9 && VAR_6 == (int32) '|')
     FUNC_5(VAR_5, 129, VAR_6);
    else
    {
     if (VAR_9 == VAR_4)
      FUNC_1(VAR_3,
        (FUNC_2(VAR_1),
         FUNC_3("statement too complex")));
     VAR_8[VAR_9] = VAR_6;
     VAR_9++;
    }
    break;
   case 130:
    if (FUNC_6(VAR_5) == 131)
     return 131;
    while (VAR_9 && (VAR_8[VAR_9 - 1] == (int32) '&' ||
         VAR_8[VAR_9 - 1] == (int32) '!'))
    {
     VAR_9--;
     FUNC_5(VAR_5, 129, VAR_8[VAR_9]);
    }
    break;
   case 132:
    while (VAR_9)
    {
     VAR_9--;
     FUNC_5(VAR_5, 129, VAR_8[VAR_9]);
    };
    return VAR_0;
    break;
   case 131:
   default:
    FUNC_1(VAR_3,
      (FUNC_2(VAR_2),
       FUNC_3("syntax error")));
    return 131;

  }
 }

 while (VAR_9)
 {
  VAR_9--;
  FUNC_5(VAR_5, 129, VAR_8[VAR_9]);
 };
 return VAR_0;
}
