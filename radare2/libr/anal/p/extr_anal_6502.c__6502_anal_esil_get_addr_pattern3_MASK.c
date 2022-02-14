
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int cycles; } ;
typedef TYPE_1__ RAnalOp ;


 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, const ut8* VAR_1, int VAR_2, char* VAR_3, int VAR_4, char VAR_5) {

 if (VAR_2 < 1) {
  return;
 }
 switch (VAR_1[0] & 0x1f) {
 case 0x00:
  VAR_0->cycles = 2;
  FUNC_0 (VAR_3, VAR_4, "0x%02x", (VAR_2 > 1) ? VAR_1[1]: 0);
  break;
 case 0x08:
  VAR_0->cycles = 2;
  FUNC_0 (VAR_3, VAR_4, "a");
  break;
 case 0x04:
  VAR_0->cycles = 5;
  FUNC_0 (VAR_3, VAR_4, "0x%02x", (VAR_2 > 1)? VAR_1[1]: 0);
  break;
 case 0x14:
  VAR_0->cycles = 6;
  FUNC_0 (VAR_3, VAR_4, "%c,0x%02x,+", VAR_5, (VAR_2>1)? VAR_1[1]:0);
  break;
 case 0x0c:
  VAR_0->cycles = 6;
  FUNC_0 (VAR_3, VAR_4, "0x%04x", (VAR_2>2)? VAR_1[1] | VAR_1[2] << 8: 0);
  break;
 case 0x1c:
  VAR_0->cycles = 7;
  FUNC_0 (VAR_3, VAR_4, "%c,0x%04x,+", VAR_5, (VAR_2>2)? VAR_1[1] | VAR_1[2] << 8: 0);
  break;
 }
}
