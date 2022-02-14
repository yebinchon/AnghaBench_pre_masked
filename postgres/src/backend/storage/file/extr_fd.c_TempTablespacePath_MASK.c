
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (char*,int ,char*,scalar_t__,...) ;

void
FUNC_1(char *VAR_6, Oid VAR_7)
{





 if (VAR_7 == VAR_2 ||
  VAR_7 == VAR_0 ||
  VAR_7 == VAR_1)
  FUNC_0(VAR_6, VAR_3, "base/%s", VAR_4);
 else
 {

  FUNC_0(VAR_6, VAR_3, "pg_tblspc/%u/%s/%s",
     VAR_7, VAR_5,
     VAR_4);
 }
}
