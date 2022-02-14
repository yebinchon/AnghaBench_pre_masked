
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcp {int last_cong; int old_maxB; int undo_old_maxB; int maxRTT; int undo_maxRTT; int undo_last_cong; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct htcp *VAR_1)
{
 VAR_1->undo_last_cong = VAR_1->last_cong;
 VAR_1->undo_maxRTT = VAR_1->maxRTT;
 VAR_1->undo_old_maxB = VAR_1->old_maxB;

 VAR_1->last_cong = VAR_0;
}
