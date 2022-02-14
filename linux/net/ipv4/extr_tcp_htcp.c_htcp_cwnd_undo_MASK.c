
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct htcp {scalar_t__ undo_last_cong; int undo_old_maxB; int old_maxB; int undo_maxRTT; int maxRTT; scalar_t__ last_cong; } ;


 struct htcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static u32 FUNC_2(struct sock *VAR_0)
{
 struct htcp *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->undo_last_cong) {
  VAR_1->last_cong = VAR_1->undo_last_cong;
  VAR_1->maxRTT = VAR_1->undo_maxRTT;
  VAR_1->old_maxB = VAR_1->undo_old_maxB;
  VAR_1->undo_last_cong = 0;
 }

 return FUNC_1(VAR_0);
}
