
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ead_msg_user {int dummy; } ;
struct TYPE_5__ {int username; } ;
struct TYPE_4__ {void* len; void* type; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(void)
{
 VAR_3->type = FUNC_1(VAR_1);
 VAR_3->len = FUNC_1(sizeof(struct ead_msg_user));
 FUNC_3(FUNC_0(VAR_3, VAR_4)->username, VAR_5);
 return FUNC_2(VAR_0, VAR_2, 1);
}
