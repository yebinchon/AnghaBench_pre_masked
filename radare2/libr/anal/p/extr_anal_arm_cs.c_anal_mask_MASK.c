
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;
struct TYPE_12__ {int bits; int big_endian; } ;
struct TYPE_11__ {scalar_t__ bits; scalar_t__ ptr; scalar_t__ jump; int type; int id; } ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_1__ RAnalHint ;
typedef TYPE_3__ RAnal ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,scalar_t__,int const*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int,int) ;
 TYPE_1__* FUNC_5 (TYPE_3__*,scalar_t__) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int const*,int ,int) ;
 int FUNC_8 (int *,int,int ,int) ;

__attribute__((used)) static ut8 *FUNC_9(RAnal *VAR_3, int VAR_4, const ut8 *VAR_5, ut64 VAR_6) {
 RAnalOp *VAR_7 = ((void*)0);
 ut8 *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0, VAR_11 = VAR_3->bits;
 RAnalHint *VAR_12 = ((void*)0);

 if (!VAR_5) {
  return ((void*)0);
 }

 VAR_7 = FUNC_6 ();
 VAR_8 = FUNC_2 (VAR_4);
 FUNC_4 (VAR_8, 0xff, VAR_4);

 while (VAR_10 < VAR_4) {
  VAR_12 = FUNC_5 (VAR_3, VAR_6 + VAR_10);
  if (VAR_12) {
   if (VAR_12->bits != 0) {
    VAR_3->bits = VAR_12->bits;
   }
   FUNC_1 (VAR_12);
  }

  if ((VAR_9 = FUNC_0 (VAR_3, VAR_7, VAR_6 + VAR_10, VAR_5 + VAR_10, VAR_4 - VAR_10, VAR_0)) < 1) {
   break;
  }
  if (VAR_7->ptr != VAR_2 || VAR_7->jump != VAR_2) {
   ut32 VAR_13 = FUNC_7 (VAR_5 + VAR_10, VAR_3->big_endian, VAR_9 * 8);
   switch (VAR_9) {
   case 2:
    FUNC_3 (VAR_8 + VAR_10, "\xf0\x00", 2);
    break;
   case 4:
    if (VAR_3->bits == 64) {
     switch (VAR_7->id) {
     case 167:
     case 147:
     case 146:
     case 145:
     case 144:
     case 166:
     case 168:
     case 159:
     case 158:
     case 157:
     case 156:
     case 155:
     case 154:
     case 153:
     case 152:
     case 151:
     case 150:
     case 149:
     case 148:
     case 142:
     case 143:
     case 132:
     case 131:
     case 130:
      FUNC_8 (VAR_8 + VAR_10, 0xffffffff, VAR_3->big_endian, 32);
      break;
     case 140:
     case 134:
     case 133:
     case 135:
     case 141:
     case 138:
     case 137:
     case 139:
     case 136:
     case 165:
     case 164:
     case 163:
     case 162:
     case 160:
     case 161: {
      bool VAR_14 = (VAR_13 & 0x38000000) == 0x18000000;
      if (VAR_14) {
       FUNC_8 (VAR_8 + VAR_10, 0xff000000, VAR_3->big_endian, 32);
      } else {
       FUNC_8 (VAR_8 + VAR_10, 0xffffffff, VAR_3->big_endian, 32);
      }
      break;
     }
     case 172:
     case 171:
     case 169:
     case 170:
      if (VAR_7->type == VAR_1) {
       FUNC_8 (VAR_8 + VAR_10, 0xff00001f, VAR_3->big_endian, 32);
      } else {
       FUNC_8 (VAR_8 + VAR_10, 0xfc000000, VAR_3->big_endian, 32);
      }
      break;
     case 128:
     case 129:
      FUNC_8 (VAR_8 + VAR_10, 0xfff8001f, VAR_3->big_endian, 32);
      break;
     case 174:
     case 173:
      FUNC_8 (VAR_8 + VAR_10, 0xff00001f, VAR_3->big_endian, 32);
      break;
     default:
      FUNC_8 (VAR_8 + VAR_10, 0xfff00000, VAR_3->big_endian, 32);
     }
    } else {
     FUNC_8 (VAR_8 + VAR_10, 0xfff00000, VAR_3->big_endian, 32);
    }
    break;
   }
  }
  VAR_10 += VAR_9;
 }

 VAR_3->bits = VAR_11;
 FUNC_1 (VAR_7);

 return VAR_8;
}
