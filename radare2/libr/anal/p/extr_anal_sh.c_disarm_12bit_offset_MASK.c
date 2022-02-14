
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int addr; } ;
typedef TYPE_1__ RAnalOp ;



__attribute__((used)) static ut64 FUNC_0 (RAnalOp *VAR_0, unsigned int VAR_1) {
 ut64 VAR_2 = VAR_1;

 if ((VAR_2 & 0x0800) == 0x0800)
 {
  VAR_2 |= ~0xFFF;
 }
 return (VAR_0->addr) + (VAR_2 << 1) + 4;
}
