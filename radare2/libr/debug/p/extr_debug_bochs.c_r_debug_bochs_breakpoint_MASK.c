
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
typedef int bufcmd ;
struct TYPE_6__ {char* data; } ;
struct TYPE_5__ {int addr; } ;
typedef TYPE_1__ RBreakpointItem ;
typedef int RBreakpoint ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 TYPE_3__* VAR_1 ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7 (RBreakpoint *VAR_2, RBreakpointItem *VAR_3, bool VAR_4) {
 char VAR_5[64];
 char VAR_6[4];
 char VAR_7[19];
 char VAR_8[100];
 ut64 VAR_9;
 int VAR_10,VAR_11,VAR_12;

 if (!VAR_3) {
  return 0;
 }
 if (VAR_4) {

  FUNC_3 (VAR_5, "lb 0x%x", (ut32)VAR_3->addr);
  FUNC_0 (VAR_1, VAR_5, 1);
  VAR_0 = 1;
 } else {







  FUNC_0 (VAR_1,"blist",1);
  VAR_12 = FUNC_4 (VAR_1->data);
  VAR_9 = -1;
  VAR_10 = 0;
  if (!FUNC_5 (VAR_1->data, "Num Type", 8)) {
   VAR_11 = 37;
   do {
    if (VAR_1->data[VAR_11 + 24] == 'y') {
     FUNC_6(VAR_6, &VAR_1->data[VAR_11], 3);
     VAR_6[3] = 0;
     FUNC_6(VAR_7, &VAR_1->data[VAR_11 + 28], 18);
     VAR_7[18] = 0;
     VAR_10 = FUNC_1 (((void*)0),VAR_6);
     VAR_9 = FUNC_1 (((void*)0),VAR_7);

     if (VAR_9 == VAR_3->addr) {
      break;
     }
    }
    VAR_11 += 48;
   } while (VAR_1->data[VAR_11] != '<' && VAR_11<VAR_12-4);
  }
  if (VAR_9 == VAR_3->addr) {
   FUNC_2 (VAR_8, sizeof (VAR_8), "d %i", VAR_10);

   FUNC_0 (VAR_1, VAR_8, 1);
  }

 }
 return 1;
}
