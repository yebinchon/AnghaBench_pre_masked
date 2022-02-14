
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {char* sourcefile; int sourceline; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct config_generic* FUNC_1 (char const*,int,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,char*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, char *VAR_5, int VAR_6)
{
 struct config_generic *VAR_7;
 int VAR_8;





 VAR_8 = VAR_2 ? VAR_0 : VAR_3;

 VAR_7 = FUNC_1(VAR_4, 1, VAR_8);

 if (VAR_7 == ((void*)0))
  FUNC_0(VAR_1, "unrecognized configuration parameter \"%s\"", VAR_4);

 VAR_5 = FUNC_3(VAR_8, VAR_5);
 if (VAR_7->sourcefile)
  FUNC_2(VAR_7->sourcefile);
 VAR_7->sourcefile = VAR_5;
 VAR_7->sourceline = VAR_6;
}
