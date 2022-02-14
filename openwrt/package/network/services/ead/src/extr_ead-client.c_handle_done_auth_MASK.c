
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ead_msg_auth {int data; } ;


 struct ead_msg_auth* FUNC_0 (int ,int ) ;
 struct ead_msg_auth* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_3(void)
{
 struct ead_msg_auth *VAR_4 = FUNC_0(VAR_1, VAR_4);
 if (FUNC_2(VAR_3, VAR_4->data) != 0) {
  FUNC_1(VAR_2, "Client auth verify failed\n");
  return 0;
 }
 return 1;
}
