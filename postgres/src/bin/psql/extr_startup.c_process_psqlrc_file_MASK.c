
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3)
{
 char *VAR_4,
      *VAR_5;





 VAR_4 = FUNC_3("%s-%s", VAR_3, VAR_1);
 VAR_5 = FUNC_3("%s-%s", VAR_3, VAR_0);


 if (FUNC_0(VAR_4, VAR_2) == 0)
  (void) FUNC_2(VAR_4, 0);
 else if (FUNC_0(VAR_5, VAR_2) == 0)
  (void) FUNC_2(VAR_5, 0);
 else if (FUNC_0(VAR_3, VAR_2) == 0)
  (void) FUNC_2(VAR_3, 0);

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
}
