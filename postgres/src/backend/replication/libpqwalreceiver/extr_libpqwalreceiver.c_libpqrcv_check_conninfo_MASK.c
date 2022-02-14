
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQconninfoOption ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 PQconninfoOption *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);

 VAR_3 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_3 == ((void*)0))
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("invalid connection string syntax: %s", VAR_4)));

 FUNC_0(VAR_3);
}
