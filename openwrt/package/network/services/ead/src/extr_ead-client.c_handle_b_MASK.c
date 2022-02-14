
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ead_msg_number {int data; } ;
struct TYPE_5__ {int len; int data; } ;
struct TYPE_4__ {int len; } ;


 TYPE_3__ VAR_0 ;
 struct ead_msg_number* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_3(void)
{
 struct ead_msg_number *VAR_4 = FUNC_0(VAR_2, VAR_3);
 int VAR_5 = FUNC_2(VAR_2->len) - sizeof(struct ead_msg_number);

 VAR_0.data = VAR_1;
 VAR_0.len = VAR_5;
 FUNC_1(VAR_1, VAR_4->data, VAR_5);
 return 1;
}
