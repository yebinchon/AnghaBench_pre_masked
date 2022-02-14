
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;

Oid
FUNC_6(const char *VAR_5, bool VAR_6)
{
 Oid VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_0,
        VAR_3, FUNC_0(VAR_5));
 if (!FUNC_2(VAR_7) && !VAR_6)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("subscription \"%s\" does not exist", VAR_5)));
 return VAR_7;
}
