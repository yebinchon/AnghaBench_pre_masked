
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int cycles; } ;
typedef TYPE_1__ RAnalOp ;


 int FUNC_0 (char*,int,char*,int const) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, const ut8* VAR_1, int VAR_2, char* VAR_3, int VAR_4) {
 if (VAR_2 < 1) {
  return;
 }

 switch (VAR_1[0] & 0x1f) {
 case 0x09:
  VAR_0->cycles = 2;
  FUNC_0 (VAR_3, VAR_4,"0x%02x", (VAR_2 > 1)? VAR_1[1]: 0);
  break;
 case 0x05:
  VAR_0->cycles = 3;
  FUNC_0 (VAR_3, VAR_4,"0x%02x", (VAR_2 > 1)? VAR_1[1]: 0);
  break;
 case 0x15:
  VAR_0->cycles = 4;
  FUNC_0 (VAR_3, VAR_4,"x,0x%02x,+", (VAR_2 > 1)? VAR_1[1]: 0);
  break;
 case 0x0d:
  VAR_0->cycles = 4;
  FUNC_0 (VAR_3, VAR_4,"0x%04x", (VAR_2 > 2) ? (VAR_1[1] | VAR_1[2] << 8): 0);
  break;
 case 0x1d:

  VAR_0->cycles = 4;
  FUNC_0 (VAR_3, VAR_4,"x,0x%04x,+", (VAR_2 > 2) ? VAR_1[1] | VAR_1[2] << 8: 0);
  break;
 case 0x19:

  VAR_0->cycles = 4;
  FUNC_0 (VAR_3, VAR_4,"y,0x%04x,+", (VAR_2 > 2)? VAR_1[1] | VAR_1[2] << 8: 0);
  break;
 case 0x01:
  VAR_0->cycles = 6;
  FUNC_0 (VAR_3, VAR_4,"x,0x%02x,+,[2]", (VAR_2 > 1)? VAR_1[1]: 0);
  break;
 case 0x11:

  VAR_0->cycles = 5;
  FUNC_0 (VAR_3, VAR_4,"y,0x%02x,[2],+", (VAR_2 > 1) ? VAR_1[1]: 0);
  break;
 }
}
