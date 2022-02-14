
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int ut64 ;
struct r_magic {int flag; int type; } ;
typedef unsigned int int64_t ;
typedef unsigned int int32_t ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ RMagic ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;

ut64 FUNC_1(RMagic *VAR_2, struct r_magic *VAR_3, ut64 VAR_4) {
 if (!(VAR_3->flag & VAR_1)) {
  switch (VAR_3->type) {





  case 155:
   VAR_4 = (char) VAR_4;
   break;
  case 129:
  case 157:
  case 141:
   VAR_4 = (short) VAR_4;
   break;
  case 154:
  case 165:
  case 149:
  case 138:
  case 150:
  case 162:
  case 146:
  case 137:
  case 139:
  case 161:
  case 145:
  case 136:
  case 151:
  case 163:
  case 147:
   VAR_4 = (int32_t) VAR_4;
   break;
  case 132:
  case 158:
  case 142:
  case 134:
  case 133:
  case 160:
  case 159:
  case 144:
  case 143:
  case 152:
  case 164:
  case 148:
   VAR_4 = (int64_t) VAR_4;
   break;
  case 128:
  case 135:
  case 156:
  case 140:
  case 131:
  case 130:
  case 153:
   break;
  default:
   if (VAR_2->flags & VAR_0) {
    FUNC_0 (VAR_2, "cannot happen: m->type=%d\n",
     VAR_3->type);
   }
   return ~0U;
  }
 }
 return VAR_4;
}
