
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef int int32 ;
struct TYPE_5__ {int type; int val; int distance; int length; struct TYPE_5__* next; int flag; } ;
struct TYPE_4__ {int num; TYPE_2__* str; } ;
typedef TYPE_1__ QPRS_STATE ;
typedef TYPE_2__ NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(QPRS_STATE *VAR_2, int32 VAR_3, int32 VAR_4, int32 VAR_5, int32 VAR_6, uint16 VAR_7)
{
 NODE *VAR_8 = (NODE *) FUNC_3(sizeof(NODE));

 VAR_8->type = VAR_3;
 VAR_8->val = VAR_4;
 VAR_8->flag = VAR_7;
 if (VAR_5 > 0xffff)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("value is too big")));
 if (VAR_6 > 0xff)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("operand is too long")));
 VAR_8->distance = VAR_5;
 VAR_8->length = VAR_6;
 VAR_8->next = VAR_2->str;
 VAR_2->str = VAR_8;
 VAR_2->num++;
}
