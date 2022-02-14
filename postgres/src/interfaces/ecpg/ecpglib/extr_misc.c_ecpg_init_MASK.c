
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlca_t {int dummy; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sqlca_t* FUNC_0 () ;
 char const* FUNC_1 (char*) ;
 int FUNC_2 (struct sqlca_t*) ;
 int FUNC_3 (int const,int ,int ,char const*) ;

bool
FUNC_4(const struct connection *VAR_4, const char *VAR_5, const int VAR_6)
{
 struct sqlca_t *VAR_7 = FUNC_0();

 if (VAR_7 == ((void*)0))
 {
  FUNC_3(VAR_6, VAR_1, VAR_3,
       ((void*)0));
  return 0;
 }

 FUNC_2(VAR_7);
 if (VAR_4 == ((void*)0))
 {
  FUNC_3(VAR_6, VAR_0, VAR_2,
       VAR_5 ? VAR_5 : FUNC_1("NULL"));
  return 0;
 }

 return 1;
}
