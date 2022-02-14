
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
struct h8300_cmd {int operands; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 scalar_t__ FUNC_0 (int const*,struct h8300_cmd*) ;
 int FUNC_1 (int ,int ,char*,int const,...) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_6, struct h8300_cmd *VAR_7)
{
 int VAR_8 = 2;

 if (FUNC_0(VAR_6, VAR_7)) {
  return -1;
 }

 if (VAR_6[0] == VAR_2 || VAR_6[0] == VAR_5 ||
   VAR_6[0] == VAR_3) {
  FUNC_1(VAR_7->operands, VAR_0,
    "#0x%x:8,ccr", VAR_6[1]);
 } else if (VAR_6[0] == VAR_1) {
  FUNC_1(VAR_7->operands, VAR_0,
    "r%u%c,ccr", VAR_6[1] & 0x7,
    VAR_6[1] & 0x8 ? 'l' : 'h');
 } else if (VAR_6[0] == VAR_4) {
  FUNC_1(VAR_7->operands, VAR_0,
    "ccr,r%u%c", VAR_6[1] & 0x7,
    VAR_6[1] & 0x8 ? 'l' : 'h');
 }

 return VAR_8;
}
