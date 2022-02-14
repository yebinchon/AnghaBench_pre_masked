
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ead_msg {int len; } ;
struct ead_packet {struct ead_msg msg; } ;
struct ead_msg_number {int data; } ;
struct TYPE_6__ {int len; int data; } ;
struct TYPE_5__ {int len; int data; } ;
struct TYPE_4__ {struct ead_msg msg; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct ead_msg_number* FUNC_0 (struct ead_msg*,struct ead_msg_number*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 struct ead_msg_number* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static bool
FUNC_4(struct ead_packet *VAR_7, int VAR_8, int *VAR_9)
{
 struct ead_msg *VAR_10 = &VAR_7->msg;
 struct ead_msg_number *VAR_11 = FUNC_0(VAR_10, VAR_11);
 VAR_8 = FUNC_3(VAR_10->len) - sizeof(struct ead_msg_number);

 if (VAR_8 > VAR_3 + 1)
  return 0;

 VAR_0.len = VAR_8;
 VAR_0.data = VAR_4;
 FUNC_2(VAR_0.data, VAR_11->data, VAR_8);

 VAR_10 = &VAR_6->msg;
 VAR_11 = FUNC_0(VAR_10, VAR_11);
 VAR_10->len = FUNC_1(sizeof(struct ead_msg_number) + VAR_1->len);
 FUNC_2(VAR_11->data, VAR_1->data, VAR_1->len);

 *VAR_9 = VAR_2;
 return 1;
}
