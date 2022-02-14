
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timestamp ;
struct ECPGgeneric_varchar {int* arr; } ;
struct ECPGgeneric_bytea {int len; } ;
struct TYPE_3__ {int sign; } ;
typedef TYPE_1__ numeric ;
typedef int interval ;
typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;
struct TYPE_4__ {int sign; } ;
typedef TYPE_2__ decimal ;
 int const VAR_0 ;
 long long const VAR_1 ;
 long const VAR_2 ;
 int VAR_3 ;
 short const VAR_4 ;
 int FUNC_0 (void const*,int) ;

bool
FUNC_1(enum ECPGttype VAR_5, const void *VAR_6)
{
 switch (VAR_5)
 {
  case 146:
  case 133:
  case 135:
   if (*((const char *) VAR_6) == '\0')
    return 1;
   break;
  case 136:
  case 129:
   if (*((const short int *) VAR_6) == VAR_4)
    return 1;
   break;
  case 141:
  case 132:
   if (*((const int *) VAR_6) == VAR_0)
    return 1;
   break;
  case 139:
  case 131:
  case 145:
   if (*((const long *) VAR_6) == VAR_2)
    return 1;
   break;
  case 138:
  case 130:
   if (*((const long long *) VAR_6) == VAR_1)
    return 1;
   break;
  case 142:
   return FUNC_0(VAR_6, sizeof(float));
   break;
  case 143:
   return FUNC_0(VAR_6, sizeof(double));
   break;
  case 128:
   if (*(((const struct ECPGgeneric_varchar *) VAR_6)->arr) == 0x00)
    return 1;
   break;
  case 147:
   if (((const struct ECPGgeneric_bytea *) VAR_6)->len == 0)
    return 1;
   break;
  case 144:
   if (((const decimal *) VAR_6)->sign == VAR_3)
    return 1;
   break;
  case 137:
   if (((const numeric *) VAR_6)->sign == VAR_3)
    return 1;
   break;
  case 140:
   return FUNC_0(VAR_6, sizeof(interval));
   break;
  case 134:
   return FUNC_0(VAR_6, sizeof(timestamp));
   break;
  default:
   break;
 }

 return 0;
}
