
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef int RDebug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,char*,int) ;
 void* FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(RDebug *VAR_5, int VAR_6) {
 if (!FUNC_2 (VAR_5)) {
  return 0;
 }
 char VAR_7[19];
 int VAR_8 = 0;
 const char *VAR_9;
 char *VAR_10 = 0, *VAR_11 = 0;



 if (VAR_1) {
  VAR_1 = 0;
 } else {
  FUNC_4 (VAR_2, VAR_5);
  VAR_8 = 500;
  do {
   FUNC_0 (VAR_3);
   if (VAR_0) {
    if (VAR_3->data[0]) {
     FUNC_1 ("ctrl+c %s\n", VAR_3->data);
     VAR_0 = 0;
     break;
    }
    VAR_8--;
    if (!VAR_8) {
     VAR_0 = 0;
     FUNC_1 ("empty ctrl+c.\n");
     break;
    }
   } else if (VAR_3->data[0]) {

    break;
   }
  } while(1);
  FUNC_3 ();
 }



 VAR_4 = 0;
 if ((VAR_9 = FUNC_7 (VAR_3->data, "Next at"))) {
  if ((VAR_10 = FUNC_7 (VAR_9, "[0x"))) {
   if ((VAR_11 = FUNC_7 (VAR_10,"]"))) {
    int VAR_12 = VAR_11 - VAR_10 - 1;
    FUNC_6 (VAR_7, VAR_10+1, VAR_12);
    VAR_7[VAR_12] = 0;

    VAR_4 = FUNC_5 (((void*)0), VAR_7);
   }
  }
 }
 VAR_3->data[0] = 0;

 return 1;
}
