
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 struct connection* VAR_0 ;
 int VAR_1 ;
 struct connection* FUNC_0 (char const*) ;
 int FUNC_1 (struct connection*,char const*,int) ;
 int FUNC_2 (int ,struct connection*) ;

bool
FUNC_3(int VAR_2, const char *VAR_3)
{
 struct connection *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_4, VAR_3, VAR_2))
  return 0;




 VAR_0 = VAR_4;

 return 1;
}
