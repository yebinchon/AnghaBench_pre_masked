
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int n; TYPE_1__* fields; } ;
typedef TYPE_2__ vle_t ;
typedef int ut32 ;
struct TYPE_8__ {int type; int * types; } ;
typedef TYPE_3__ ppc_t ;
struct TYPE_6__ {int value; int type; } ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(vle_t * VAR_1, const ppc_t* VAR_2, ut32 VAR_3) {
 if (!VAR_1) {
  return;
 }
 switch (VAR_2->type) {
  case 133:
  case 130:
  case 137:
  {
   VAR_1->n = 0;
   if (VAR_2->types[0] != VAR_0) {
    VAR_1->fields[0].value = (VAR_3 & 0x3E00000) >> 21;
    VAR_1->fields[0].type = VAR_2->types[0];
    VAR_1->n++;
   }
   if (VAR_2->types[1] != VAR_0) {
    VAR_1->fields[1].value = (VAR_3 & 0x1F0000) >> 16;
    VAR_1->fields[1].type = VAR_2->types[1];
    VAR_1->n++;
   }
   if (VAR_2->types[2] != VAR_0) {
    VAR_1->fields[2].value = (VAR_3 & 0xF800) >> 11;
    VAR_1->fields[2].type = VAR_2->types[2];
    VAR_1->n++;
   }
  }
   break;
  case 128:
  {
   VAR_1->n = 1;
   VAR_1->fields[0].value = (VAR_3 & 0x8000) >> 15;
   VAR_1->fields[0].type = VAR_2->types[0];
  }
   break;
  case 129:
  {
   VAR_1->n = 3;
   VAR_1->fields[1].value = (VAR_3 & 0x3E00000) >> 21;
   VAR_1->fields[1].type = VAR_2->types[0];
   VAR_1->fields[0].value = (VAR_3 & 0x1F0000) >> 16;
   VAR_1->fields[0].type = VAR_2->types[1];
   VAR_1->fields[2].value = (VAR_3 & 0xF800) >> 11;
   VAR_1->fields[2].type = VAR_2->types[2];
  }
   break;
  case 141:
  {
   VAR_1->n = 3;
   VAR_1->fields[0].value = (VAR_3 & 0x3800000) >> 23;
   VAR_1->fields[0].type = VAR_2->types[0];
   VAR_1->fields[1].value = (VAR_3 & 0x1F0000) >> 16;
   VAR_1->fields[1].type = VAR_2->types[1];
   VAR_1->fields[2].value = (VAR_3 & 0xF800) >> 11;
   VAR_1->fields[2].type = VAR_2->types[2];
  }
   break;
  case 140:
  {
   VAR_1->n = 3;
   VAR_1->fields[0].value = (VAR_3 & 0x0E00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
   VAR_1->fields[1].value = (VAR_3 & 0x1F0000) >> 16;
   VAR_1->fields[1].type = VAR_2->types[1];
   VAR_1->fields[2].value = (VAR_3 & 0xF800) >> 11;
   VAR_1->fields[2].type = VAR_2->types[2];
  }
   break;
  case 139:
  {
   VAR_1->n = 3;
   VAR_1->fields[0].value = (VAR_3 & 0x1E00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
   VAR_1->fields[1].value = (VAR_3 & 0x1F0000) >> 16;
   VAR_1->fields[1].type = VAR_2->types[1];
   VAR_1->fields[2].value = (VAR_3 & 0xF800) >> 11;
   VAR_1->fields[2].type = VAR_2->types[2];
  }
   break;
  case 138:
  {
   VAR_1->n = 1;
   VAR_1->fields[0].value = (VAR_3 & 0xE00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
  }
   break;
  case 136:
  {
   VAR_1->n = 2;
   VAR_1->fields[0].value = (VAR_3 & 0x3E00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
   VAR_1->fields[1].value = (VAR_3 & 0x1F0000) >> 16;
   VAR_1->fields[1].type = VAR_2->types[1];
  }
   break;
  case 142:
  {
   VAR_1->n = 4;
   VAR_1->fields[0].value = (VAR_3 & 0x1E00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
   VAR_1->fields[1].value = (VAR_3 & 0x1F0000) >> 16;
   VAR_1->fields[1].type = VAR_2->types[1];
   VAR_1->fields[2].value = (VAR_3 & 0xF800) >> 11;
   VAR_1->fields[2].type = VAR_2->types[2];
   VAR_1->fields[3].value = (VAR_3 & 0x7C0) >> 6;
   VAR_1->fields[3].type = VAR_2->types[3];
  }
   break;
  case 131:
  {
   VAR_1->n = 1;
   VAR_1->fields[0].value = (VAR_3 & 0x3E00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
  }
   break;
  case 132:
  {
   VAR_1->n = 1;
   VAR_1->fields[0].value = (VAR_3 & 0x3800000) >> 23;
   VAR_1->fields[0].type = VAR_2->types[0];
  }
   break;
  case 135:
  {
   VAR_1->n = 2;
   VAR_1->fields[0].value = (VAR_3 & 0x1E00000) >> 21;
   VAR_1->fields[0].type = VAR_2->types[0];
   VAR_1->fields[1].value = (VAR_3 & 0x1FF800) >> 11;
   VAR_1->fields[1].type = VAR_2->types[1];
   break;
  }
  case 134:
  {
   VAR_1->n = 2;

   VAR_1->fields[1].value = (VAR_3 & 0x1E00000) >> 21;
   VAR_1->fields[1].type = VAR_2->types[1];
   VAR_1->fields[0].value = (VAR_3 & 0x1FF800) >> 11;
   VAR_1->fields[0].type = VAR_2->types[0];
  }
   break;
  case 143:
  default:
   VAR_1->n = 0;
   break;
 }
}
