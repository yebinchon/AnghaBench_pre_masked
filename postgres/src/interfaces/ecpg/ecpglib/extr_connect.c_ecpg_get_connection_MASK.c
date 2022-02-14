
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 struct connection* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct connection* FUNC_0 (char const*) ;
 struct connection* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

struct connection *
FUNC_5(const char *VAR_3)
{
 struct connection *VAR_4 = ((void*)0);

 if ((VAR_3 == ((void*)0)) || (FUNC_4(VAR_3, "CURRENT") == 0))
 {
  VAR_4 = VAR_0;

 }
 else
 {




  VAR_4 = FUNC_0(VAR_3);




 }

 return VAR_4;
}
