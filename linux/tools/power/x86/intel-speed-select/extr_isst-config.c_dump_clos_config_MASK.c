
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
 if (VAR_0) {
  FUNC_3(VAR_5,
   "Print Intel Speed Select Technology core power configuration\n");
  FUNC_3(VAR_5,
   "\tArguments: [-c | --clos]: Specify clos id\n");
  FUNC_0(0);
 }
 if (VAR_1 < 0 || VAR_1 > 3) {
  FUNC_3(VAR_5, "Invalid clos id\n");
  FUNC_0(0);
 }

 FUNC_5(VAR_4);
 if (VAR_3)
  FUNC_2(VAR_2,
        ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 else
  FUNC_1(VAR_2, ((void*)0),
            ((void*)0), ((void*)0), ((void*)0));
 FUNC_4(VAR_4);
}
