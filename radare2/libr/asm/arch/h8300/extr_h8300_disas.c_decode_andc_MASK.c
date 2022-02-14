
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct h8300_cmd {int operands; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,struct h8300_cmd*) ;
 int FUNC_1 (int ,int ,char*,int const) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_1, struct h8300_cmd *VAR_2)
{
 int VAR_3 = 2;

 if (FUNC_0(VAR_1, VAR_2)) {
  return -1;
 }

 FUNC_1(VAR_2->operands, VAR_0, "#0x%x:8,ccr", VAR_1[1]);

 return VAR_3;
}
