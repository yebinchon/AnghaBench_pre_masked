
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,int) ;

void
FUNC_5(char *VAR_3, int VAR_4, bool VAR_5)
{
 if (VAR_4 >= VAR_1)
 {
  VAR_4 = FUNC_4(VAR_3, VAR_4, VAR_1 - 1);
  if (VAR_5)
  {




   char VAR_6[VAR_1];

   FUNC_3(VAR_6, VAR_3, VAR_4);
   VAR_6[VAR_4] = '\0';
   FUNC_0(VAR_2,
     (FUNC_1(VAR_0),
      FUNC_2("identifier \"%s\" will be truncated to \"%s\"",
       VAR_3, VAR_6)));
  }
  VAR_3[VAR_4] = '\0';
 }
}
