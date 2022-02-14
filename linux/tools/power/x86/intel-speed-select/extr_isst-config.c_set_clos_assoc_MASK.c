
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_0) {
  FUNC_2(VAR_4, "Associate a clos id to a CPU\n");
  FUNC_2(VAR_4,
   "\tSpecify targeted clos id with [--clos|-c]\n");
  FUNC_0(0);
 }

 if (VAR_1 < 0 || VAR_1 > 3) {
  FUNC_2(VAR_4, "Invalid clos id\n");
  FUNC_0(0);
 }
 if (VAR_2)
  FUNC_1(VAR_3, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
 else {
  FUNC_2(VAR_4,
   "Invalid target cpu. Specify with [-c|--cpu]\n");
 }
}
