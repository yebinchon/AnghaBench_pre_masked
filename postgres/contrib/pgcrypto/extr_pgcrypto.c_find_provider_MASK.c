
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int (* PFN ) (char*,void**) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void *
FUNC_8(text *VAR_2,
     PFN VAR_3,
     const char *VAR_4, int VAR_5)
{
 void *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_0(VAR_2),
            FUNC_1(VAR_2),
            0);

 VAR_8 = VAR_3(VAR_7, &VAR_6);

 if (VAR_8 && !VAR_5)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("Cannot use \"%s\": %s", VAR_7, FUNC_7(VAR_8))));

 FUNC_6(VAR_7);

 return VAR_8 ? ((void*)0) : VAR_6;
}
