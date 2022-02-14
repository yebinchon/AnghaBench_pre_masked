
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timestamp ;
struct ECPGgeneric_varchar {int* arr; int len; } ;
struct ECPGgeneric_bytea {int len; } ;
struct TYPE_3__ {void* sign; } ;
typedef TYPE_1__ numeric ;
typedef int interval ;
typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;
struct TYPE_4__ {void* sign; } ;
typedef TYPE_2__ decimal ;
 int VAR_0 ;
 long long VAR_1 ;
 long VAR_2 ;
 void* VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (char*,int,int) ;

void
FUNC_1(enum ECPGttype VAR_5, void *VAR_6)
{
 switch (VAR_5)
 {
  case 146:
  case 133:
  case 135:
   *((char *) VAR_6) = '\0';
   break;
  case 136:
  case 129:
   *((short int *) VAR_6) = VAR_4;
   break;
  case 141:
  case 132:
   *((int *) VAR_6) = VAR_0;
   break;
  case 139:
  case 131:
  case 145:
   *((long *) VAR_6) = VAR_2;
   break;
  case 138:
  case 130:
   *((long long *) VAR_6) = VAR_1;
   break;
  case 142:
   FUNC_0((char *) VAR_6, 0xff, sizeof(float));
   break;
  case 143:
   FUNC_0((char *) VAR_6, 0xff, sizeof(double));
   break;
  case 128:
   *(((struct ECPGgeneric_varchar *) VAR_6)->arr) = 0x00;
   ((struct ECPGgeneric_varchar *) VAR_6)->len = 0;
   break;
  case 147:
   ((struct ECPGgeneric_bytea *) VAR_6)->len = 0;
   break;
  case 144:
   FUNC_0((char *) VAR_6, 0, sizeof(decimal));
   ((decimal *) VAR_6)->sign = VAR_3;
   break;
  case 137:
   FUNC_0((char *) VAR_6, 0, sizeof(numeric));
   ((numeric *) VAR_6)->sign = VAR_3;
   break;
  case 140:
   FUNC_0((char *) VAR_6, 0xff, sizeof(interval));
   break;
  case 134:
   FUNC_0((char *) VAR_6, 0xff, sizeof(timestamp));
   break;
  default:
   break;
 }
}
