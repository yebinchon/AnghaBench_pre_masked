
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int name; int * connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct connection* FUNC_0 (char const*) ;
 int FUNC_1 (struct connection*,char const*,int) ;
 int FUNC_2 (int,int ,int ,int ) ;

bool
FUNC_3(int VAR_2, const char *VAR_3)
{
 struct connection *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_4, VAR_3, VAR_2))
  return 0;


 if (VAR_4->connection == ((void*)0))
 {
  FUNC_2(VAR_2, VAR_0, VAR_1, VAR_4->name);
  return 0;
 }

 return 1;
}
