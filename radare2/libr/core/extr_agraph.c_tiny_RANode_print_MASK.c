
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {scalar_t__ use_utf8; } ;
typedef TYPE_1__ RCons ;
typedef TYPE_2__ RANode ;
typedef int RAGraph ;


 int FUNC_0 (int ,int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(const RAGraph *VAR_1, const RANode *VAR_2, int VAR_3) {
 FUNC_0 (VAR_2->x, VAR_2->y);
 RCons *VAR_4 = FUNC_2 ();
 char *VAR_5 = VAR_4->use_utf8 ? VAR_0 :"()";
 if (VAR_3) {
  FUNC_1 ("##");
 } else {
  FUNC_1 (VAR_5);
 }
}
