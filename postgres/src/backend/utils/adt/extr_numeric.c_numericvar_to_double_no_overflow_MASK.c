
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NumericVar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int const*) ;
 int FUNC_4 (char*) ;
 double FUNC_5 (char*,char**) ;

__attribute__((used)) static double
FUNC_6(const NumericVar *VAR_2)
{
 char *VAR_3;
 double VAR_4;
 char *VAR_5;

 VAR_3 = FUNC_3(VAR_2);


 VAR_4 = FUNC_5(VAR_3, &VAR_5);
 if (*VAR_5 != '\0')
 {

  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      "double precision", VAR_3)));
 }

 FUNC_4(VAR_3);

 return VAR_4;
}
