
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ file; int bin; } ;
typedef TYPE_1__ RCore ;
typedef int RBinObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_3, int VAR_4, int VAR_5) {
 RBinObject *VAR_6 = FUNC_2 (VAR_3->bin);
 int VAR_7 = 0;
 if (VAR_3->file) {
  if ((VAR_5 & VAR_2) && !(VAR_5 & VAR_1)) {
   VAR_5 = VAR_2;
   FUNC_3 ("{\"core\":");
  }
  if ((VAR_5 & VAR_2) && (VAR_5 & VAR_1)) {
   VAR_5 = VAR_2;
   VAR_7 = 1;
   FUNC_3 (",\"core\":");
  }
  FUNC_5 (VAR_3, VAR_5);
  if (FUNC_0 (VAR_6)) {
   if ((VAR_5 & VAR_2)) {
    FUNC_3 (",\"bin\":");
   }
   FUNC_4 (VAR_3, VAR_0, VAR_5, VAR_4, ((void*)0), ((void*)0));
  }
  if ((VAR_5 & VAR_2) && VAR_7 == 0) {
   FUNC_3 ("}\n");
  }
 } else {
  FUNC_1 ("No file selected\n");
 }
}
