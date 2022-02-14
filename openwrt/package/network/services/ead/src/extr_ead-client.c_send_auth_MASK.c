
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ead_msg_auth {int data; } ;
struct TYPE_3__ {void* len; void* type; } ;


 int VAR_0 ;
 struct ead_msg_auth* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ead_msg_auth* VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(void)
{
 struct ead_msg_auth *VAR_9 = FUNC_0(VAR_5, VAR_9);

 FUNC_4();
 FUNC_7(VAR_8, VAR_6);
 VAR_7 = FUNC_6(VAR_8, &VAR_0);
 if (!VAR_7)
  return 0;

 FUNC_1(VAR_7);
 VAR_5->type = FUNC_2(VAR_2);
 VAR_5->len = FUNC_2(sizeof(struct ead_msg_auth));
 FUNC_3(VAR_9->data, FUNC_8(VAR_8), sizeof(VAR_9->data));
 return FUNC_5(VAR_1, VAR_4, 1);
}
