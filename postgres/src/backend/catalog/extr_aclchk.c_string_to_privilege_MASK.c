
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static AclMode
FUNC_4(const char *VAR_14)
{
 if (FUNC_3(VAR_14, "insert") == 0)
  return VAR_5;
 if (FUNC_3(VAR_14, "select") == 0)
  return VAR_7;
 if (FUNC_3(VAR_14, "update") == 0)
  return VAR_10;
 if (FUNC_3(VAR_14, "delete") == 0)
  return VAR_3;
 if (FUNC_3(VAR_14, "truncate") == 0)
  return VAR_9;
 if (FUNC_3(VAR_14, "references") == 0)
  return VAR_6;
 if (FUNC_3(VAR_14, "trigger") == 0)
  return VAR_8;
 if (FUNC_3(VAR_14, "execute") == 0)
  return VAR_4;
 if (FUNC_3(VAR_14, "usage") == 0)
  return VAR_11;
 if (FUNC_3(VAR_14, "create") == 0)
  return VAR_1;
 if (FUNC_3(VAR_14, "temporary") == 0)
  return VAR_2;
 if (FUNC_3(VAR_14, "temp") == 0)
  return VAR_2;
 if (FUNC_3(VAR_14, "connect") == 0)
  return VAR_0;
 if (FUNC_3(VAR_14, "rule") == 0)
  return 0;
 FUNC_0(VAR_13,
   (FUNC_1(VAR_12),
    FUNC_2("unrecognized privilege type \"%s\"", VAR_14)));
 return 0;
}
