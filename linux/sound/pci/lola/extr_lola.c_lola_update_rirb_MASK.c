
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int wp; unsigned int rp; scalar_t__ cmds; int * buf; } ;
struct lola {int res; int res_ex; TYPE_1__ rirb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lola*,int,int) ;
 unsigned int FUNC_2 (struct lola*,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct lola *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_3);
 if (VAR_6 == VAR_4->rirb.wp)
  return;
 VAR_4->rirb.wp = VAR_6;

 while (VAR_4->rirb.rp != VAR_6) {
  VAR_4->rirb.rp++;
  VAR_4->rirb.rp %= VAR_1;

  VAR_5 = VAR_4->rirb.rp << 1;
  VAR_8 = FUNC_0(VAR_4->rirb.buf[VAR_5 + 1]);
  VAR_7 = FUNC_0(VAR_4->rirb.buf[VAR_5]);
  if (VAR_8 & VAR_2)
   FUNC_1(VAR_4, VAR_7, VAR_8);
  else if (VAR_4->rirb.cmds) {
   VAR_4->res = VAR_7;
   VAR_4->res_ex = VAR_8;
   FUNC_3();
   VAR_4->rirb.cmds--;
  }
 }
}
