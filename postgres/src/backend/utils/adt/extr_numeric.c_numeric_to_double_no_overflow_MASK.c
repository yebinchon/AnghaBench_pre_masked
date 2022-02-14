
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Numeric ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 double FUNC_7 (char*,char**) ;

__attribute__((used)) static double
FUNC_8(Numeric VAR_3)
{
 char *VAR_4;
 double VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_0(FUNC_1(VAR_2,
             FUNC_2(VAR_3)));


 VAR_5 = FUNC_7(VAR_4, &VAR_6);
 if (*VAR_6 != '\0')
 {

  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("invalid input syntax for type %s: \"%s\"",
      "double precision", VAR_4)));
 }

 FUNC_6(VAR_4);

 return VAR_5;
}
