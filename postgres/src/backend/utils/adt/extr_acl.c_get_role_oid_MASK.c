
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;

Oid
FUNC_6(const char *VAR_4, bool VAR_5)
{
 Oid VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1,
        FUNC_0(VAR_4));
 if (!FUNC_2(VAR_6) && !VAR_5)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("role \"%s\" does not exist", VAR_4)));
 return VAR_6;
}
