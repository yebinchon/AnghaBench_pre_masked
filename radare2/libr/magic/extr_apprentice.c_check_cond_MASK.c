
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_6__ {TYPE_2__* li; } ;
struct TYPE_8__ {int flags; TYPE_1__ c; } ;
struct TYPE_7__ {int last_cond; } ;
typedef TYPE_3__ RMagic ;






 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_1(RMagic *VAR_1, int VAR_2, ut32 VAR_3) {
 int VAR_4;
 VAR_4 = VAR_1->c.li[VAR_3].last_cond;

 switch (VAR_2) {
 case 129:
  if (VAR_4 != 128 && VAR_4 != 131) {
   if (VAR_1->flags & VAR_0) {
    FUNC_0 (VAR_1, "syntax error: `if'");
   }
   return -1;
  }
  VAR_4 = 129;
  break;
 case 131:
  if (VAR_4 != 129 && VAR_4 != 131) {
   if (VAR_1->flags & VAR_0) {
    FUNC_0 (VAR_1, "syntax error: `elif'");
   }
   return -1;
  }
  VAR_4 = 131;
  break;
 case 130:
  if (VAR_4 != 129 && VAR_4 != 131) {
   if (VAR_1->flags & VAR_0) {
    FUNC_0 (VAR_1, "syntax error: `else'");
   }
   return -1;
  }
  VAR_4 = 128;
  break;
 case 128:
  VAR_4 = 128;
  break;
 }

 VAR_1->c.li[VAR_3].last_cond = VAR_4;
 return 0;
}
