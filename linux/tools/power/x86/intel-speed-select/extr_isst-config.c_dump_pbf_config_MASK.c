
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
 if (VAR_0) {
  FUNC_3(VAR_4,
   "Print Intel(R) Speed Select Technology base frequency configuration for a TDP level\n");
  FUNC_3(VAR_4,
   "\tArguments: -l|--level : Specify tdp level\n");
  FUNC_0(0);
 }

 if (VAR_5 == 0xff) {
  FUNC_3(VAR_3, "Invalid command: specify tdp_level\n");
  FUNC_0(1);
 }

 FUNC_5(VAR_3);
 if (VAR_2)
  FUNC_2(VAR_1, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
 else
  FUNC_1(VAR_1, ((void*)0),
            ((void*)0), ((void*)0), ((void*)0));
 FUNC_4(VAR_3);
}
