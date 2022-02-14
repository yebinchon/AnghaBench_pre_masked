
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,char const*,int,char const*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5(List *VAR_3, const char *VAR_4, List *VAR_5, const char *VAR_6, int VAR_7)
{
 if (FUNC_4(VAR_3) == 0 ||
  FUNC_4(VAR_3) == 1 ||
  FUNC_4(VAR_3) == FUNC_4(VAR_5))
  return 1;

 FUNC_0(VAR_2,
   (FUNC_1(VAR_0),
    FUNC_3("the number of %s (%d) must be 1 or the same as the number of %s (%d)",
     VAR_4,
     FUNC_4(VAR_3),
     VAR_6,
     FUNC_4(VAR_5)
     ),
    FUNC_2("line %d of configuration file \"%s\"",
      VAR_7, VAR_1)));
 return 0;
}
