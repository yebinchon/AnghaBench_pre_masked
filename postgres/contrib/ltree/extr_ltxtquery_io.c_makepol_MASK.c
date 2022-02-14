
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int int32 ;
typedef int QPRS_STATE ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int*,int*,char**,int *) ;
 int FUNC_6 (int *,int const,int,int ,int ,int ) ;
 int FUNC_7 (int *,int const,char*,int,int ) ;

__attribute__((used)) static int32
FUNC_8(QPRS_STATE *VAR_4)
{
 int32 VAR_5 = 0,
    VAR_6;
 int32 VAR_7 = 0;
 char *VAR_8 = ((void*)0);
 int32 VAR_9[VAR_3];
 int32 VAR_10 = 0;
 uint16 VAR_11 = 0;


 FUNC_0();

 while ((VAR_6 = FUNC_5(VAR_4, &VAR_5, &VAR_7, &VAR_8, &VAR_11)) != VAR_0)
 {
  switch (VAR_6)
  {
   case 128:
    FUNC_7(VAR_4, 128, VAR_8, VAR_7, VAR_11);
    while (VAR_10 && (VAR_9[VAR_10 - 1] == (int32) '&' ||
         VAR_9[VAR_10 - 1] == (int32) '!'))
    {
     VAR_10--;
     FUNC_6(VAR_4, 129, VAR_9[VAR_10], 0, 0, 0);
    }
    break;
   case 129:
    if (VAR_10 && VAR_5 == (int32) '|')
     FUNC_6(VAR_4, 129, VAR_5, 0, 0, 0);
    else
    {
     if (VAR_10 == VAR_3)

      FUNC_1(VAR_2, "stack too short");
     VAR_9[VAR_10] = VAR_5;
     VAR_10++;
    }
    break;
   case 130:
    if (FUNC_8(VAR_4) == 131)
     return 131;
    while (VAR_10 && (VAR_9[VAR_10 - 1] == (int32) '&' ||
         VAR_9[VAR_10 - 1] == (int32) '!'))
    {
     VAR_10--;
     FUNC_6(VAR_4, 129, VAR_9[VAR_10], 0, 0, 0);
    }
    break;
   case 132:
    while (VAR_10)
    {
     VAR_10--;
     FUNC_6(VAR_4, 129, VAR_9[VAR_10], 0, 0, 0);
    };
    return VAR_0;
    break;
   case 131:
   default:
    FUNC_2(VAR_2,
      (FUNC_3(VAR_1),
       FUNC_4("syntax error")));

    return 131;

  }
 }
 while (VAR_10)
 {
  VAR_10--;
  FUNC_6(VAR_4, 129, VAR_9[VAR_10], 0, 0, 0);
 };
 return VAR_0;
}
