
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ,char*,char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(const int VAR_3, const char **const VAR_4, const CommandPtr VAR_5, const ArgvInfoPtr VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_1);
 VAR_7 = FUNC_2(&VAR_0, VAR_4[1], VAR_4[2]);
 if (VAR_7 < 0)
  FUNC_1(&VAR_0, VAR_7, VAR_2, "rename", VAR_4[1]);
 else {

  FUNC_3();
 }
}
