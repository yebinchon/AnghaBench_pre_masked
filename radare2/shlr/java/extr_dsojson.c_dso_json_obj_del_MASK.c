
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int _dict_entry; int _dict; int _str; int _num; } ;
struct TYPE_9__ {TYPE_2__ val; TYPE_1__* info; } ;
struct TYPE_7__ {int type; } ;
typedef TYPE_3__ DsoJsonObj ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6 (DsoJsonObj *VAR_0) {
 if (!VAR_0) return;
 switch (VAR_0->info->type) {
 case 130: break;
 case 129: FUNC_3 (VAR_0->val._num); break;
 case 128: FUNC_4 (VAR_0->val._str); break;
 case 131: FUNC_2 (VAR_0); break;
 case 133: FUNC_1 (VAR_0->val._dict); break;
 case 132: FUNC_0 (VAR_0->val._dict_entry); break;
 default: break;
 }




}
