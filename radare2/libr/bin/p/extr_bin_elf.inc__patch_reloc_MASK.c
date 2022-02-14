
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
typedef int st64 ;
struct TYPE_6__ {int addend; int rva; int type; } ;
struct TYPE_5__ {int io; int (* write_at ) (int ,int,int*,int) ;int (* read_at ) (int ,int,int*,int) ;} ;
typedef TYPE_1__ RIOBind ;
typedef TYPE_2__ RBinElfReloc ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int ,int,int*,int) ;
 int FUNC_5 (int ,int,int*,int) ;
 int FUNC_6 (int ,int,int*,int) ;
 int FUNC_7 (int ,int,int*,int) ;
 int FUNC_8 (int ,int,int*,int) ;
 int FUNC_9 (int ,int,int*,int) ;
 int FUNC_10 (int ,int,int*,int) ;
 int FUNC_11 (int ,int,int*,int) ;
 int FUNC_12 (int ,int,int*,int) ;
 int FUNC_13 (int ,int,int*,int) ;

__attribute__((used)) static void FUNC_14(ut16 VAR_0, RIOBind *VAR_1, RBinElfReloc *VAR_2, ut64 VAR_3, ut64 VAR_4, ut64 VAR_5) {
 ut64 VAR_6;
 ut64 VAR_7 = VAR_2->addend, VAR_8 = VAR_2->rva;
 ut8 VAR_9[8];
 switch (VAR_0) {
 case 147: {
  int VAR_10 = 0, VAR_11 = 0;
  switch (VAR_2->type) {
  case 144:
   VAR_11 = 2;
   VAR_6 = (VAR_3 + VAR_7 - VAR_8 + 0x8000) >> 16;
   break;
  case 143:
   VAR_11 = 2;
   VAR_6 = (VAR_3 + VAR_7 - VAR_8) & 0xffff;
   break;
  case 145:
   VAR_10 = 14;
   VAR_6 = (st64)(VAR_3 + VAR_7 - VAR_8) >> 2;
   break;
  case 142:
   VAR_10 = 24;
   VAR_6 = (st64)(VAR_3 + VAR_7 - VAR_8) >> 2;
   break;
  case 141:
   VAR_11 = 4;
   VAR_6 = VAR_3 + VAR_7 - VAR_8;
   break;
  default:
   break;
  }
  if (VAR_10) {

   switch (VAR_10) {
   case 14:
    VAR_6 &= (1 << 14) - 1;
    VAR_1->read_at (VAR_1->io, VAR_2->rva, VAR_9, 2);
    FUNC_2 (VAR_9, (FUNC_0 (VAR_9) & ~((1<<16) - (1<<2))) | VAR_6 << 2);
    VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 2);
    break;
   case 24:
    VAR_6 &= (1 << 24) - 1;
    VAR_1->read_at (VAR_1->io, VAR_2->rva, VAR_9, 4);
    FUNC_2 (VAR_9, (FUNC_0 (VAR_9) & ~((1<<26) - (1<<2))) | VAR_6 << 2);
    VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 4);
    break;
   }
  } else if (VAR_11) {

   switch (VAR_11) {
   case 2:
    FUNC_1 (VAR_9, VAR_6);
    VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 2);
    break;
   case 4:
    FUNC_2 (VAR_9, VAR_6);
    VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 4);
    break;
   }
  }
  break;
 }
 case 146: {
  int VAR_12 = 0;
  switch (VAR_2->type) {
  case 136:
   VAR_12 = 1;
   VAR_6 = VAR_3 + VAR_7;
   break;
  case 140:
   VAR_12 = 2;
   VAR_6 = VAR_3 + VAR_7;
   break;
  case 139:
  case 138:
   VAR_12 = 4;
   VAR_6 = VAR_3 + VAR_7;
   break;
  case 137:
   VAR_12 = 8;
   VAR_6 = VAR_3 + VAR_7;
   break;
  case 135:
  case 134:
   VAR_12 = 4;
   VAR_6 = VAR_3;
   break;
  case 130:
   VAR_12 = 1;
   VAR_6 = VAR_3 + VAR_7 - VAR_8;
   break;
  case 133:
   VAR_12 = 2;
   VAR_6 = VAR_3 + VAR_7 - VAR_8;
   break;
  case 132:
   VAR_12 = 4;
   VAR_6 = VAR_3 + VAR_7 - VAR_8;
   break;
  case 131:
   VAR_12 = 8;
   VAR_6 = VAR_3 + VAR_7 - VAR_8;
   break;
  case 129:
   VAR_12 = 4;
   VAR_6 = VAR_5 + VAR_7 - VAR_8;
   break;
  case 128:
   VAR_12 = 8;
   VAR_6 = VAR_4 + VAR_7;
   break;
  default:

   break;
  }
  switch (VAR_12) {
  case 0:
   break;
  case 1:
   VAR_9[0] = VAR_6;
   VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 1);
   break;
  case 2:
   FUNC_1 (VAR_9, VAR_6);
   VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 2);
   break;
  case 4:
   FUNC_2 (VAR_9, VAR_6);
   VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 4);
   break;
  case 8:
   FUNC_3 (VAR_9, VAR_6);
   VAR_1->write_at (VAR_1->io, VAR_2->rva, VAR_9, 8);
   break;
  }
  break;
 }
 }
}
