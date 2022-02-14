
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int AclMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static AclMode
FUNC_5(text *VAR_15)
{
 char *VAR_16 = FUNC_4(VAR_15);

 if (FUNC_3(VAR_16, "SELECT") == 0)
  return VAR_8;
 if (FUNC_3(VAR_16, "INSERT") == 0)
  return VAR_5;
 if (FUNC_3(VAR_16, "UPDATE") == 0)
  return VAR_11;
 if (FUNC_3(VAR_16, "DELETE") == 0)
  return VAR_3;
 if (FUNC_3(VAR_16, "TRUNCATE") == 0)
  return VAR_10;
 if (FUNC_3(VAR_16, "REFERENCES") == 0)
  return VAR_7;
 if (FUNC_3(VAR_16, "TRIGGER") == 0)
  return VAR_9;
 if (FUNC_3(VAR_16, "EXECUTE") == 0)
  return VAR_4;
 if (FUNC_3(VAR_16, "USAGE") == 0)
  return VAR_12;
 if (FUNC_3(VAR_16, "CREATE") == 0)
  return VAR_1;
 if (FUNC_3(VAR_16, "TEMP") == 0)
  return VAR_2;
 if (FUNC_3(VAR_16, "TEMPORARY") == 0)
  return VAR_2;
 if (FUNC_3(VAR_16, "CONNECT") == 0)
  return VAR_0;
 if (FUNC_3(VAR_16, "RULE") == 0)
  return 0;

 FUNC_0(VAR_14,
   (FUNC_1(VAR_13),
    FUNC_2("unrecognized privilege type: \"%s\"", VAR_16)));
 return VAR_6;
}
