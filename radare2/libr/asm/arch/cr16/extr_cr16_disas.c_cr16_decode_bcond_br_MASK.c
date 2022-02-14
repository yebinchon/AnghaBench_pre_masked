
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
struct cr16_cmd {int reladdr; int operands; int type; int instr; } ;
typedef void* st32 ;
typedef void* st16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 char** VAR_4 ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_7(const ut8 *VAR_5, struct cr16_cmd *VAR_6)
{
 int VAR_7 = 2;

 ut16 VAR_8, VAR_9;
 ut32 VAR_10;

 VAR_8 = FUNC_5 (VAR_5);

 if (VAR_8 & 0x1) {
  return -1;
 }

 if (!(VAR_8 >> 14) && FUNC_3 (VAR_8) != 0xA) {
  return -1;
 }

 if (((VAR_8 >> 5) & 0xF) == 0xE) {
  FUNC_6(VAR_6->instr, VAR_1 - 1, "br");
  if (((VAR_8 >> 1) & 0x7) == 0x7) {
   VAR_9 = FUNC_4 (VAR_5, 2);

   VAR_10 = VAR_9 | (((VAR_8 >> 4) & 0x1) << 16);
   VAR_7 = 4;
   FUNC_6(VAR_6->operands, VAR_1 - 1,
     "0x%08x", VAR_10);

   if (VAR_10 & 0x10000) {
    VAR_10 |= 0xFFFE0000;
    VAR_6->reladdr = (st32)VAR_10;
   } else {
    VAR_6->reladdr = VAR_10;
   }
  } else {
   if (FUNC_2(VAR_8)) {
    VAR_7 = 4;
    VAR_9 = FUNC_4 (VAR_5, 2);
    VAR_10 = VAR_9 | (((VAR_8 >> 1) & 0x7) << 17) | (((VAR_8 >> 4) & 1) << 16);
    if (VAR_10 & 0x80000) {
     VAR_10 |= 0xFFF00000;
     VAR_6->reladdr = (st32)VAR_10;
    } else {
     VAR_6->reladdr = VAR_10;
    }
    FUNC_6(VAR_6->operands, VAR_1 - 1, "0x%08x", VAR_10);
   } else {
    VAR_9 = (VAR_8 & 0x1F) | ((VAR_8 >> 4) & 0x1E0);

    if (VAR_9 & 0x0100) {
     VAR_9 |= 0xFE00;
     VAR_6->reladdr = (st16)VAR_9;
    } else {
     VAR_6->reladdr = VAR_9;
    }

    FUNC_6(VAR_6->operands, VAR_1 - 1, "0x%04x", VAR_9);
   }
  }
  VAR_6->type = VAR_3;
 } else {
  FUNC_6(VAR_6->instr, VAR_1 - 1, "b%s",
    VAR_4[FUNC_1(VAR_8)]);
  if (VAR_8 & 0x1) {
   return -1;
  }

  if ((VAR_8 >> 8) == VAR_0) {
   VAR_9 = FUNC_4 (VAR_5, 2);
   VAR_10 = VAR_9 | (FUNC_0(VAR_8, 4) << 16);
   if (VAR_10 & 0x80000) {
    VAR_10 |= 0xFFF00000;
    VAR_6->reladdr = (st32)VAR_10;
   } else {
    VAR_6->reladdr = VAR_10;
   }
   VAR_7 = 4;
  } else {
   VAR_9 = (VAR_8 & 0x1F) | ((VAR_8 >> 4) & 0x1E0);

   if (VAR_9 & 0x0100) {
    VAR_9 |= 0xFE00;
    VAR_6->reladdr = (st16)VAR_9;
   } else {
    VAR_6->reladdr = VAR_9;
   }

   VAR_10 = VAR_9;
  }

  VAR_6->type = VAR_2;
  FUNC_6(VAR_6->operands, VAR_1 - 1, "0x%04x", VAR_10);
 }

 return VAR_7;
}
