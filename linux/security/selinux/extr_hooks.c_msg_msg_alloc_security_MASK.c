
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_security_struct {int sid; } ;
struct msg_msg {int dummy; } ;


 int VAR_0 ;
 struct msg_security_struct* FUNC_0 (struct msg_msg*) ;

__attribute__((used)) static int FUNC_1(struct msg_msg *VAR_1)
{
 struct msg_security_struct *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->sid = VAR_0;

 return 0;
}
