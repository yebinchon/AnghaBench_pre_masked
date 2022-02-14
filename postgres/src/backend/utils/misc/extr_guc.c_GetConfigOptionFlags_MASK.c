
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 struct config_generic* FUNC_3 (char const*,int,int ) ;

int
FUNC_4(const char *VAR_3, bool VAR_4)
{
 struct config_generic *VAR_5;

 VAR_5 = FUNC_3(VAR_3, 0, VAR_2);
 if (VAR_5 == ((void*)0))
 {
  if (VAR_4)
   return 0;
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("unrecognized configuration parameter \"%s\"",
      VAR_3)));
 }
 return VAR_5->flags;
}
