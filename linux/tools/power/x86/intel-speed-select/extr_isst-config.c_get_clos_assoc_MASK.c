
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_0) {
  FUNC_2(VAR_4, "Get associate clos id to a CPU\n");
  FUNC_2(VAR_4, "\tSpecify targeted cpu id with [--cpu|-c]\n");
  FUNC_0(0);
 }

 if (!VAR_2) {
  FUNC_2(VAR_4,
   "Invalid target cpu. Specify with [-c|--cpu]\n");
  FUNC_0(0);
 }

 FUNC_4(VAR_3);
 FUNC_1(VAR_1, ((void*)0),
       ((void*)0), ((void*)0), ((void*)0));
 FUNC_3(VAR_3);
}
