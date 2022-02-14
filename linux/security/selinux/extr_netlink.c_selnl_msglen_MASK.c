
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selnl_msg_setenforce {int dummy; } ;
struct selnl_msg_policyload {int dummy; } ;


 int FUNC_0 () ;



__attribute__((used)) static int FUNC_1(int VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0) {
 case 128:
  VAR_1 = sizeof(struct selnl_msg_setenforce);
  break;

 case 129:
  VAR_1 = sizeof(struct selnl_msg_policyload);
  break;

 default:
  FUNC_0();
 }
 return VAR_1;
}
