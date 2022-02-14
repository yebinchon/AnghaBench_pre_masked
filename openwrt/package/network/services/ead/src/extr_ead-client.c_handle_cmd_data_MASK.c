
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ead_msg_cmd_data {int done; int data; } ;


 struct ead_msg_cmd_data* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int) ;

__attribute__((used)) static bool
FUNC_3(void)
{
 struct ead_msg_cmd_data *VAR_2 = FUNC_0(VAR_1, VAR_0);
 int VAR_3 = FUNC_1(VAR_1) - sizeof(struct ead_msg_cmd_data);

 if (VAR_3 < 0)
  return 0;

 if (VAR_3 > 0) {
  FUNC_2(1, VAR_2->data, VAR_3);
 }

 return !!VAR_2->done;
}
