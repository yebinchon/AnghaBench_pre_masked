
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct h8300_cmd {char* operands; } ;


 scalar_t__ FUNC_0 (int const*,struct h8300_cmd*) ;

__attribute__((used)) static int FUNC_1(const ut8 *VAR_0, struct h8300_cmd *VAR_1)
{
 int VAR_2 = 2;

 if (FUNC_0(VAR_0, VAR_1)) {
  return -1;
 }

 VAR_1->operands[0] = '\0';

 return VAR_2;
}
