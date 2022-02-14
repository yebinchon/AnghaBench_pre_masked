
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3(const int VAR_7, const char **const VAR_8, const CommandPtr VAR_9, const ArgvInfoPtr VAR_10)
{
 int VAR_11;
 int VAR_12;

 FUNC_0(VAR_2);
 for (VAR_12=1; VAR_12<VAR_7; VAR_12++) {
  VAR_11 = FUNC_1(&VAR_1, VAR_8[VAR_12], ((void*)0), VAR_6, VAR_0, VAR_5, VAR_3);
  FUNC_2(&VAR_1, VAR_11, VAR_4, "cat", VAR_8[VAR_12]);
 }
}
