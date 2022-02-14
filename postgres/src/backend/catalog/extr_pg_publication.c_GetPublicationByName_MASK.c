
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Publication ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*) ;

Publication *
FUNC_7(const char *VAR_4, bool VAR_5)
{
 Oid VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0,
        FUNC_0(VAR_4));
 if (!FUNC_3(VAR_6))
 {
  if (VAR_5)
   return ((void*)0);

  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("publication \"%s\" does not exist", VAR_4)));
 }

 return FUNC_1(VAR_6);
}
