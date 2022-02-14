
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut16 ;
struct cr16_cmd {int operands; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 char** VAR_1 ;
 int FUNC_1 (int ,scalar_t__,char*,size_t,...) ;

__attribute__((used)) static inline int FUNC_2(struct cr16_cmd *VAR_2,
    ut8 VAR_3, ut16 VAR_4, ut8 VAR_5)
{
 if (FUNC_0(VAR_5)) {
  return -1;
 }

 if (VAR_4) {
  FUNC_1(VAR_2->operands, VAR_0 - 1,
   "$0x%02x,0x%04x(%s)", VAR_3, VAR_4, VAR_1[VAR_5]);
 } else {
  FUNC_1(VAR_2->operands, VAR_0 - 1,
   "$0x%02x,0(%s)", VAR_3, VAR_1[VAR_5]);
 }

 return 0;
}
