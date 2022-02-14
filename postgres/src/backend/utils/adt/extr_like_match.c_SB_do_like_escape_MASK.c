
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int *,int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static text *
FUNC_14(text *VAR_3, text *VAR_4)
{
 text *VAR_5;
 char *VAR_6,
      *VAR_7,
      *VAR_8;
 int VAR_9,
    VAR_10;
 bool VAR_11;

 VAR_6 = FUNC_5(VAR_3);
 VAR_9 = FUNC_7(VAR_3);
 VAR_7 = FUNC_5(VAR_4);
 VAR_10 = FUNC_7(VAR_4);





 VAR_5 = (text *) FUNC_13(VAR_9 * 2 + VAR_2);
 VAR_8 = FUNC_4(VAR_5);

 if (VAR_10 == 0)
 {




  while (VAR_9 > 0)
  {
   if (*VAR_6 == '\\')
    *VAR_8++ = '\\';
   FUNC_1(VAR_8, VAR_6, VAR_9);
  }
 }
 else
 {



  FUNC_2(VAR_7, VAR_10);
  if (VAR_10 != 0)
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_11("invalid escape string"),
      FUNC_10("Escape string must be empty or one character.")));

  VAR_7 = FUNC_5(VAR_4);




  if (*VAR_7 == '\\')
  {
   FUNC_12(VAR_5, VAR_3, FUNC_6(VAR_3));
   return VAR_5;
  }






  VAR_11 = 0;
  while (VAR_9 > 0)
  {
   if (FUNC_0(VAR_6, VAR_7) && !VAR_11)
   {
    *VAR_8++ = '\\';
    FUNC_2(VAR_6, VAR_9);
    VAR_11 = 1;
   }
   else if (*VAR_6 == '\\')
   {
    *VAR_8++ = '\\';
    if (!VAR_11)
     *VAR_8++ = '\\';
    FUNC_2(VAR_6, VAR_9);
    VAR_11 = 0;
   }
   else
   {
    FUNC_1(VAR_8, VAR_6, VAR_9);
    VAR_11 = 0;
   }
  }
 }

 FUNC_3(VAR_5, VAR_8 - ((char *) VAR_5));

 return VAR_5;
}
