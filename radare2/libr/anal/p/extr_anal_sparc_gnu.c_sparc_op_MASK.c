
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char ut8 ;
typedef int ut64 ;
typedef int ut32 ;
struct TYPE_11__ {int big_endian; } ;
struct TYPE_10__ {int size; int jump; int fail; int ptr; int val; void* type; int addr; int family; } ;
typedef int RAnalOpMask ;
typedef TYPE_1__ RAnalOp ;
typedef TYPE_2__ RAnal ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_10(RAnal *VAR_6, RAnalOp *VAR_7, ut64 VAR_8, const ut8 *VAR_9, int VAR_10, RAnalOpMask VAR_11) {
 int VAR_12 = 4;
 ut32 VAR_13;

 FUNC_9 (VAR_7, 0, sizeof (RAnalOp));
 VAR_7->family = VAR_4;
 VAR_7->addr = VAR_8;
 VAR_7->size = VAR_12;
 VAR_7->jump = VAR_7->fail = -1;
 VAR_7->ptr = VAR_7->val = -1;

 if(!VAR_6->big_endian) {
  ((char*)&VAR_13)[0] = VAR_9[3];
  ((char*)&VAR_13)[1] = VAR_9[2];
  ((char*)&VAR_13)[2] = VAR_9[1];
  ((char*)&VAR_13)[3] = VAR_9[0];
 } else {
  FUNC_8(&VAR_13, VAR_9, VAR_12);
 }

 if (FUNC_0(VAR_13) == VAR_0) {
  switch(FUNC_1(VAR_13)) {
  case 154:
  case 153:
   VAR_7->type = VAR_5;
   VAR_12 = 0;
   break;
  case 159:
  case 157:
  case 158:
  case 156:
  case 155:
   FUNC_5(VAR_7, VAR_13, VAR_8);
   break;
  }
 } else if(FUNC_0(VAR_13) == VAR_1) {
  FUNC_6(VAR_7, VAR_13, VAR_8);
 } else if(FUNC_0(VAR_13) == VAR_2) {
  switch(FUNC_2(VAR_13))
   {
  case 149:
  case 148:
  case 147:
  case 146:
  case 145:
   VAR_7->type = VAR_5;
   VAR_12 = 0;
   break;
  case 152:
   if(FUNC_3(VAR_13) == 1) {
    VAR_7->type = VAR_5;
    VAR_12 = 0;
   }
   break;
  case 151:
   if(FUNC_4(VAR_13) == 1) {
    VAR_7->type = VAR_5;
    VAR_12 = 0;
   }
   break;
  case 150:
   if(FUNC_4(VAR_13) != 0) {
    VAR_7->type = VAR_5;
    VAR_12 = 0;
   }
   break;

  case 144:
   FUNC_7(VAR_6, VAR_7, VAR_13, VAR_8);
   break;
   }
 } else if (FUNC_0(VAR_13) == VAR_3) {
  switch(FUNC_2(VAR_13)) {
  case 143:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
   VAR_7->type = VAR_5;
   VAR_12 = 0;
   break;
   }
 }

 return VAR_12;
}
