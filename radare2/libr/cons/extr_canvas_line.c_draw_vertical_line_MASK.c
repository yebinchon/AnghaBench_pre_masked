
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sx; scalar_t__ w; } ;
typedef TYPE_1__ RConsCanvas ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_0 ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (RConsCanvas *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 int VAR_6;

 if (VAR_2 + VAR_1->sx < 0) {
  return;
 }
 if (VAR_2 + VAR_1->sx > VAR_1->w) {
  return;
 }
 const char *VAR_7 = VAR_0 ? FUNC_5 (VAR_5) : "|";
 FUNC_3 (((void*)0), ((void*)0));
 for (VAR_6 = VAR_3; VAR_6 < VAR_3 + VAR_4; VAR_6++) {
  if (FUNC_4 ()) {
   break;
  }
  if (FUNC_0 (VAR_2, VAR_6)) {
   FUNC_1 (VAR_7);
  }
 }
 FUNC_2 ();
}
