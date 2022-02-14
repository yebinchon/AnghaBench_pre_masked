
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
 if (VAR_0) {
  FUNC_3(VAR_4, "Set Config TDP level\n");
  FUNC_3(VAR_4,
   "\t Arguments: -l|--level : Specify tdp level\n");
  FUNC_3(VAR_4,
   "\t Optional Arguments: -o | online : online/offline for the tdp level\n");
  FUNC_0(0);
 }

 if (VAR_5 == 0xff) {
  FUNC_3(VAR_2, "Invalid command: specify tdp_level\n");
  FUNC_0(1);
 }
 FUNC_5(VAR_2);
 if (VAR_1)
  FUNC_2(VAR_3, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
 else
  FUNC_1(VAR_3, ((void*)0),
            ((void*)0), ((void*)0), ((void*)0));
 FUNC_4(VAR_2);
}
