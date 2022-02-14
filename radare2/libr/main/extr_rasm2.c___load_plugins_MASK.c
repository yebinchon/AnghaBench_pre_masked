
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int l; } ;
typedef TYPE_1__ RAsmState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(RAsmState *VAR_9) {
 char *VAR_10 = FUNC_5 ("RASM2_NOPLUGINS");
 if (VAR_10) {
  FUNC_0 (VAR_10);
  return;
 }
 FUNC_1 (VAR_9->l, VAR_6, "(dis)assembly plugins", &VAR_8, ((void*)0), VAR_9);
 FUNC_1 (VAR_9->l, VAR_5, "analysis/emulation plugins", &VAR_7, ((void*)0), VAR_9);

 char *VAR_11 = FUNC_5 (VAR_4);
 if (VAR_11 && *VAR_11) {
  FUNC_2 (VAR_9->l, VAR_11);
 }


 char *VAR_12 = FUNC_3 (VAR_2);
 FUNC_2 (VAR_9->l, VAR_12);
 FUNC_0 (VAR_12);


 char *VAR_13 = FUNC_4 (VAR_3);
 char *VAR_14 = FUNC_4 (VAR_1);
 char *VAR_15 = FUNC_4 (VAR_0);
 FUNC_2 (VAR_9->l, VAR_13);
 FUNC_2 (VAR_9->l, VAR_14);
 FUNC_2 (VAR_9->l, VAR_15);
 FUNC_0 (VAR_13);
 FUNC_0 (VAR_14);
 FUNC_0 (VAR_15);

 FUNC_0 (VAR_10);
 FUNC_0 (VAR_11);
}
