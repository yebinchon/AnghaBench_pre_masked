
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct nlattr **VAR_1, u8 VAR_2)
{
 if (VAR_2 != 1) {
  FUNC_0("only addrtype match revision 1 supported");
  return -VAR_0;
 }

 return 0;
}
