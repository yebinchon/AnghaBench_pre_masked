
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;

int
FUNC_4(StringInfo VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_1);

 FUNC_3(VAR_5);


 for (;;)
 {
  while (VAR_4 >= VAR_3)
  {
   if (FUNC_2())
    return VAR_0;
  }

  for (VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++)
  {
   if (VAR_2[VAR_6] == '\0')
   {

    FUNC_1(VAR_5, VAR_2 + VAR_4,
            VAR_6 - VAR_4 + 1);
    VAR_4 = VAR_6 + 1;
    return 0;
   }
  }


  FUNC_1(VAR_5, VAR_2 + VAR_4,
          VAR_3 - VAR_4);
  VAR_4 = VAR_3;
 }
}
