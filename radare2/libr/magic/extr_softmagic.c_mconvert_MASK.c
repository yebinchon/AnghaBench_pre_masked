
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
union VALUETYPE {char* s; short h; int* hs; int l; int* hl; int q; int * hq; } ;
struct r_magic {int type; } ;
typedef void* st32 ;
struct TYPE_4__ {union VALUETYPE ms_value; } ;
typedef TYPE_1__ RMagic ;
 int FUNC_0 (union VALUETYPE*,struct r_magic*) ;
 int FUNC_1 (union VALUETYPE*,struct r_magic*) ;
 int FUNC_2 (union VALUETYPE*,struct r_magic*) ;
 int FUNC_3 (union VALUETYPE*,struct r_magic*) ;
 int FUNC_4 (union VALUETYPE*,struct r_magic*) ;
 int FUNC_5 (union VALUETYPE*,struct r_magic*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 size_t FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(RMagic *VAR_0, struct r_magic *VAR_1) {
 union VALUETYPE *VAR_2 = &VAR_0->ms_value;

 switch (VAR_1->type) {
 case 155:
  FUNC_3(VAR_2, VAR_1);
  return 1;
 case 129:
  FUNC_0(VAR_2, VAR_1);
  return 1;
 case 139:
 case 154:
 case 150:
  FUNC_1(VAR_2, VAR_1);
  return 1;
 case 132:
 case 134:
 case 133:
  FUNC_2(VAR_2, VAR_1);
  return 1;
 case 128:
 case 156:
 case 140: {
  size_t VAR_3;


  VAR_2->s[sizeof(VAR_2->s) - 1] = '\0';
  VAR_3 = FUNC_9(VAR_2->s);
  if (VAR_3-- && VAR_2->s[VAR_3] == '\n') {
   VAR_2->s[VAR_3] = '\0';
  }
  return 1;
 }
 case 135: {
  char *VAR_4 = VAR_2->s, *VAR_5 = VAR_4 + 1;
  size_t VAR_6 = *VAR_2->s;
  if (VAR_6 >= sizeof (VAR_2->s)) {
   VAR_6 = sizeof (VAR_2->s) - 1;
  }
  while (VAR_6--) {
   *VAR_4++ = *VAR_5++;
  }
  *VAR_4 = '\0';
  VAR_6 = FUNC_9(VAR_2->s);
  if (VAR_6-- && VAR_2->s[VAR_6] == '\n') {
   VAR_2->s[VAR_6] = '\0';
  }
  return 1;
 }
 case 157:
  VAR_2->h = (short)((VAR_2->hs[0]<<8)|(VAR_2->hs[1]));
  FUNC_0(VAR_2, VAR_1);
  return 1;
 case 161:
 case 165:
 case 162:
  VAR_2->l = (st32) FUNC_7 (VAR_2->hl);
  FUNC_1(VAR_2, VAR_1);
  return 1;
 case 158:
 case 160:
 case 159:
  VAR_2->q = (ut64)
      (((ut64)VAR_2->hq[0]<<56)|((ut64)VAR_2->hq[1]<<48)|
       ((ut64)VAR_2->hq[2]<<40)|((ut64)VAR_2->hq[3]<<32)|
       ((ut64)VAR_2->hq[4]<<24)|((ut64)VAR_2->hq[5]<<16)|
       ((ut64)VAR_2->hq[6]<<8)|((ut64)VAR_2->hq[7]));
  FUNC_2(VAR_2, VAR_1);
  return 1;
 case 141:
  VAR_2->h = (short)((VAR_2->hs[1]<<8)|(VAR_2->hs[0]));
  FUNC_0(VAR_2, VAR_1);
  return 1;
 case 145:
 case 149:
 case 146:
  VAR_2->l = (st32) FUNC_8 (VAR_2->hl);
  FUNC_1(VAR_2, VAR_1);
  return 1;
 case 142:
 case 144:
 case 143:
  VAR_2->q = (ut64)
      (((ut64)VAR_2->hq[7]<<56)|((ut64)VAR_2->hq[6]<<48)|
       ((ut64)VAR_2->hq[5]<<40)|((ut64)VAR_2->hq[4]<<32)|
       ((ut64)VAR_2->hq[3]<<24)|((ut64)VAR_2->hq[2]<<16)|
       ((ut64)VAR_2->hq[1]<<8)|((ut64)VAR_2->hq[0]));
  FUNC_2(VAR_2, VAR_1);
  return 1;
 case 136:
 case 138:
 case 137:
  VAR_2->l = (st32)
      ((VAR_2->hl[1]<<24)|(VAR_2->hl[0]<<16)|(VAR_2->hl[3]<<8)|(VAR_2->hl[2]));
  FUNC_1(VAR_2, VAR_1);
  return 1;
 case 151:
  FUNC_5(VAR_2, VAR_1);
  return 1;
 case 163:
  VAR_2->l = ((ut32)VAR_2->hl[0]<<24)|((ut32)VAR_2->hl[1]<<16)|
   ((ut32)VAR_2->hl[2]<<8) |((ut32)VAR_2->hl[3]);
  FUNC_5(VAR_2, VAR_1);
  return 1;
 case 147:
  VAR_2->l = ((ut32)VAR_2->hl[3]<<24)|((ut32)VAR_2->hl[2]<<16)|
   ((ut32)VAR_2->hl[1]<<8) |((ut32)VAR_2->hl[0]);
  FUNC_5(VAR_2, VAR_1);
  return 1;
 case 152:
  FUNC_4(VAR_2, VAR_1);
  return 1;
 case 164:
  VAR_2->q = ((ut64)VAR_2->hq[0]<<56)|((ut64)VAR_2->hq[1]<<48)|
   ((ut64)VAR_2->hq[2]<<40)|((ut64)VAR_2->hq[3]<<32)|
   ((ut64)VAR_2->hq[4]<<24)|((ut64)VAR_2->hq[5]<<16)|
   ((ut64)VAR_2->hq[6]<<8) |((ut64)VAR_2->hq[7]);
  FUNC_4(VAR_2, VAR_1);
  return 1;
 case 148:
  VAR_2->q = ((ut64)VAR_2->hq[7]<<56)|((ut64)VAR_2->hq[6]<<48)|
   ((ut64)VAR_2->hq[5]<<40)|((ut64)VAR_2->hq[4]<<32)|
   ((ut64)VAR_2->hq[3]<<24)|((ut64)VAR_2->hq[2]<<16)|
   ((ut64)VAR_2->hq[1]<<8) |((ut64)VAR_2->hq[0]);
  FUNC_4(VAR_2, VAR_1);
  return 1;
 case 131:
 case 130:
 case 153:
  return 1;
 default:
  FUNC_6(VAR_0, "invalid type %d in mconvert()", VAR_1->type);
  return 0;
 }
}
