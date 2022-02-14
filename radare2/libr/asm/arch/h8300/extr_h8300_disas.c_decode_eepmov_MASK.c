
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct h8300_cmd {char* operands; } ;




 scalar_t__ FUNC_0 (int const*,struct h8300_cmd*) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_0, struct h8300_cmd *VAR_1)
{
 int VAR_2 = 4;

 if (FUNC_0(VAR_0, VAR_1)) {
  return -1;
 }
 VAR_1->operands[0] = '\0';

 switch (VAR_0[0]) {
 case 128:
 case 129:
  VAR_2 = 2;
  break;
 }

 return VAR_2;
}
