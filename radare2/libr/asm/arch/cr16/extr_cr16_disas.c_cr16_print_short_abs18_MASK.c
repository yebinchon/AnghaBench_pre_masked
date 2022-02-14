
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
struct cr16_cmd {int operands; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,char*,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct cr16_cmd *VAR_1,
  ut8 VAR_2, ut32 VAR_3) {
 FUNC_0(VAR_1->operands, VAR_0 - 1,
   "$0x%02x,0x%08x", VAR_2, VAR_3);
 return 0;
}
