
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int perm; int addr; int hw; } ;
typedef TYPE_1__ RBreakpointItem ;
typedef int RBreakpoint ;






 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (int ,int ,char*,int) ;
 int FUNC_8 (int ,int ,char*,int) ;
 int FUNC_9 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_10 (RBreakpoint *VAR_1, RBreakpointItem *VAR_2, bool VAR_3) {
 int VAR_4 = 0, VAR_5;
 if (!VAR_2) {
  return 0;
 }
 VAR_5 = VAR_2->size;

 switch (VAR_2->perm) {
 case 131 : {
  if (VAR_3) {
   VAR_4 = VAR_2->hw?
     FUNC_7 (VAR_0, VAR_2->addr, "", VAR_5):
     FUNC_5 (VAR_0, VAR_2->addr, "", VAR_5);
  } else {
   VAR_4 = VAR_2->hw ? FUNC_2 (VAR_0, VAR_2->addr, VAR_5) : FUNC_0 (VAR_0, VAR_2->addr, VAR_5);
  }
  break;
 }

 case 128: {
  if (VAR_3) {
   FUNC_9 (VAR_0, VAR_2->addr, "", 1);
  } else {
   FUNC_4 (VAR_0, VAR_2->addr, 1);
  }
  break;
 }
 case 129: {
  if (VAR_3) {
   FUNC_8 (VAR_0, VAR_2->addr, "", 1);
  } else {
   FUNC_3 (VAR_0, VAR_2->addr, 1);
  }
  break;
 }
 case 130: {
  if (VAR_3) {
   FUNC_6 (VAR_0, VAR_2->addr, "", 1);
  } else {
   FUNC_1 (VAR_0, VAR_2->addr, 1);
  }
  break;
 }
 }
 return !VAR_4;
}
