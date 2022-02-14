
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int str; } ;
typedef TYPE_1__ fnditem ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2 (fnditem* VAR_0, unsigned char* VAR_1, int VAR_2) {
 fnditem* VAR_3;
 for (VAR_3 = VAR_0; VAR_3->next != ((void*)0); VAR_3 = VAR_3->next) {
  ;
 }
 VAR_3->next = (fnditem*) FUNC_0 (sizeof (fnditem));
 VAR_3 = VAR_3->next;
 FUNC_1 (VAR_3->str, VAR_1, VAR_2);
 VAR_3->next = ((void*)0);
}
