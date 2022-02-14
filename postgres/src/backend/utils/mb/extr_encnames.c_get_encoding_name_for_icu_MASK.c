
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char**) ;
 char** VAR_3 ;
 int FUNC_5 (int) ;

const char *
FUNC_6(int VAR_4)
{
 const char *VAR_5;

 FUNC_0(FUNC_4(VAR_3) == VAR_2 + 1,
      "pg_enc2icu_tbl incomplete");

 VAR_5 = VAR_3[VAR_4];

 if (!VAR_5)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("encoding \"%s\" not supported by ICU",
      FUNC_5(VAR_4))));

 return VAR_5;
}
