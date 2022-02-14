
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct nlattr **VAR_3, u8 VAR_4)
{
 if (VAR_4 != 0) {
  FUNC_1("only policy match revision 0 supported");
  return -VAR_0;
 }

 if (FUNC_0(VAR_3[VAR_2]) != VAR_1) {
  FUNC_1("policy can only be matched on NF_INET_PRE_ROUTING");
  return -VAR_0;
 }

 return 0;
}
