
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
   char VAR_4[VAR_1];

   FUNC_0(VAR_3, VAR_4, VAR_1);
   if (!FUNC_2(VAR_4, "foo"))
   {
       FUNC_3(VAR_4, "bar");
       FUNC_1(VAR_3, VAR_2, 0, (LPARAM)VAR_4);
   }

   FUNC_1(VAR_3, VAR_0, VAR_1 - 1, VAR_1 - 1);
}
