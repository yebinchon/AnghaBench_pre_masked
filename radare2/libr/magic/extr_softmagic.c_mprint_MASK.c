
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
union VALUETYPE {int l; int q; char* s; float f; double d; int h; int b; } ;
typedef int time_t ;
struct TYPE_11__ {char* s; } ;
struct r_magic {int type; char reln; int vallen; int str_flags; TYPE_2__ value; } ;
typedef int st32 ;
struct TYPE_10__ {int rm_len; int offset; scalar_t__ s; } ;
struct TYPE_12__ {int offset; TYPE_1__ search; union VALUETYPE ms_value; } ;
typedef TYPE_3__ RMagic ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct r_magic*) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,char*,int const) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,...) ;
 int FUNC_5 (TYPE_3__*,struct r_magic*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,double) ;
 size_t FUNC_9 (char*,char*) ;
 char* FUNC_10 (char const*,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static st32 FUNC_12(RMagic *VAR_2, struct r_magic *VAR_3) {
 ut64 VAR_4;
 float VAR_5;
 double VAR_6;
 ut64 VAR_7 = 0;
  char *VAR_8 = ((void*)0);
 union VALUETYPE *VAR_9 = &VAR_2->ms_value;

   switch (VAR_3->type) {
   case 155:
  VAR_4 = FUNC_5(VAR_2, VAR_3, (ut64)VAR_9->b);
  switch (FUNC_0(VAR_2, VAR_3)) {
  case -1:
   return -1;
  case 1:
   VAR_8 = FUNC_7 (2);
   if (FUNC_8 (VAR_8, 2, "%c", (ut8)VAR_4)<0) {
    FUNC_6 (VAR_8);
    return -1;
   }
   if (FUNC_4 (VAR_2, VAR_1, VAR_8) == -1) {
    FUNC_6 (VAR_8);
    return -1;
   }
   break;
  default:
   if (FUNC_4 (VAR_2, VAR_1, (ut8)VAR_4) == -1) {
    return -1;
   }
   break;
  }
  VAR_7 = VAR_2->offset + sizeof(char);
  break;
   case 129:
   case 157:
   case 141:
  VAR_4 = FUNC_5 (VAR_2, VAR_3, (ut64)VAR_9->h);
  switch (FUNC_0 (VAR_2, VAR_3)) {
  case -1:
   return -1;
  case 1:
   VAR_8 = FUNC_7 (32);
   if (FUNC_8 (VAR_8, 32, "%hu", (unsigned short)VAR_4) < 0) {
    FUNC_6 (VAR_8);
    return -1;
   }
   if (FUNC_4(VAR_2, VAR_1, VAR_8) == -1) {
    FUNC_6 (VAR_8);
    return -1;
   }
   break;
  default:
   if (FUNC_4 (VAR_2, VAR_1, (unsigned short)VAR_4) == -1) {
    return -1;
   }
   break;
  }
  VAR_7 = VAR_2->offset + sizeof(short);
  break;
   case 139:
   case 161:
   case 145:
   case 136:
  VAR_4 = FUNC_5(VAR_2, VAR_3, (ut64)VAR_9->l);
  switch (FUNC_0(VAR_2, VAR_3)) {
  case -1:
   return -1;
  case 1:
   VAR_8 = FUNC_7 (32);
   if (FUNC_8 (VAR_8, 32, "%u", (ut32)VAR_4) < 0) {
    FUNC_6 (VAR_8);
    return -1;
   }
   if (FUNC_4(VAR_2, VAR_1, VAR_8) == -1) {
    FUNC_6 (VAR_8);
    return -1;
   }
   break;
  default:
   if (FUNC_4 (VAR_2, VAR_1, (ut32)VAR_4) == -1) {
    return -1;
   }
   break;
  }
  VAR_7 = VAR_2->offset + sizeof(st32);
    break;
   case 132:
   case 158:
   case 142:
  VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_9->q);
  if (FUNC_4 (VAR_2, VAR_1, (ut64)VAR_4) == -1) {
   return -1;
  }
  VAR_7 = VAR_2->offset + sizeof(ut64);
    break;

   case 128:
   case 135:
   case 156:
   case 140:
  if (VAR_3->reln == '=' || VAR_3->reln == '!') {
   if (FUNC_4 (VAR_2, VAR_1, VAR_3->value.s) == -1) {
    return -1;
   }
   VAR_7 = VAR_2->offset + VAR_3->vallen;
  }
  else {
   if (*VAR_3->value.s == '\0') {
    VAR_9->s[FUNC_9 (VAR_9->s, "\n")] = '\0';
   }
   if (FUNC_4 (VAR_2, VAR_1, VAR_9->s) == -1) {
    return -1;
   }
   VAR_7 = VAR_2->offset + FUNC_11 (VAR_9->s);
   if (VAR_3->type == 135) {
    VAR_7++;
   }
  }
  break;
 case 154:
 case 165:
 case 149:
 case 138:
  if (FUNC_4 (VAR_2, VAR_1, FUNC_1 (VAR_9->l, 1)) == -1) {
   return -1;
  }
  VAR_7 = VAR_2->offset + sizeof(time_t);
  break;
 case 150:
 case 162:
 case 146:
 case 137:
  if (FUNC_4 (VAR_2, VAR_1, FUNC_1 (VAR_9->l, 0)) == -1) {
   return -1;
  }
  VAR_7 = VAR_2->offset + sizeof(time_t);
  break;
 case 134:
 case 160:
 case 144:
  if (FUNC_4 (VAR_2, VAR_1, FUNC_1 ((ut32)VAR_9->q, 1)) == -1) {
   return -1;
  }
  VAR_7 = VAR_2->offset + sizeof(ut64);
  break;
 case 133:
 case 159:
 case 143:
  if (FUNC_4 (VAR_2, VAR_1, FUNC_1 ((ut32)VAR_9->q, 0)) == -1) {
   return -1;
  }
  VAR_7 = VAR_2->offset + sizeof(ut64);
  break;
   case 151:
   case 163:
   case 147:
  VAR_5 = VAR_9->f;
  switch (FUNC_0(VAR_2, VAR_3)) {
  case -1:
   return -1;
  case 1:
   VAR_8 = FUNC_7 (32);
   if (FUNC_8 (VAR_8, 32, "%g", VAR_5) < 0) {
    FUNC_6 (VAR_8);
    return -1;
   }
   if (FUNC_4 (VAR_2, VAR_1, VAR_8) == -1) {
    FUNC_6 (VAR_8);
    return -1;
   }
   break;
  default:
   if (FUNC_4 (VAR_2, VAR_1, VAR_5) == -1) {
    return -1;
   }
   break;
  }
  VAR_7 = VAR_2->offset + sizeof(float);
    break;
   case 152:
   case 164:
   case 148:
  VAR_6 = VAR_9->d;
  switch (FUNC_0(VAR_2, VAR_3)) {
  case -1:
   return -1;
  case 1:
   VAR_8 = FUNC_7 (32);
   if (FUNC_8 (VAR_8, 32, "%g", VAR_6) < 0) {
    FUNC_6 (VAR_8);
    return -1;
   }
   if (FUNC_4 (VAR_2, VAR_1, VAR_8) == -1) {
    FUNC_6 (VAR_8);
    return -1;
   }
   break;
  default:
   if (FUNC_4 (VAR_2, VAR_1, VAR_6) == -1) {
    return -1;
   }
   break;
  }
  VAR_7 = VAR_2->offset + sizeof(double);
    break;
 case 131: {
  char *VAR_10;
  int VAR_11;

  VAR_10 = FUNC_10((const char *)VAR_2->search.s, VAR_2->search.rm_len);
  if (!VAR_10) {
   FUNC_3(VAR_2, VAR_2->search.rm_len);
   return -1;
  }
  VAR_11 = FUNC_4(VAR_2, VAR_1, VAR_10);
  FUNC_6(VAR_10);

  if (VAR_11 == -1) {
   return -1;
  }

  if ((VAR_3->str_flags & VAR_0)) {
   VAR_7 = VAR_2->search.offset;
  } else {
   VAR_7 = VAR_2->search.offset + VAR_2->search.rm_len;
  }
  break;
 }

 case 130:
  if (FUNC_4 (VAR_2, VAR_1, VAR_3->value.s) == -1) {
   return -1;
  }
  if ((VAR_3->str_flags & VAR_0)) {
   VAR_7 = VAR_2->search.offset;
  } else {
   VAR_7 = VAR_2->search.offset + VAR_3->vallen;
  }
  break;
 case 153:
  if (FUNC_4 (VAR_2, VAR_1, VAR_3->value.s) == -1) {
   return -1;
  }
  VAR_7 = VAR_2->offset;
  break;
 default:
  FUNC_2(VAR_2, "invalid m->type (%d) in mprint()", VAR_3->type);
  return -1;
 }
 FUNC_6 (VAR_8);
 return VAR_7;
}
