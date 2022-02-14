
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int sizeof_strsize_t; } ;
struct TYPE_8__ {void* status; TYPE_1__ target; } ;
typedef TYPE_2__ DumpState ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__*) ;
 void* VAR_0 ;
 int FUNC_2 (char*,int,TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_1, DumpState* VAR_2)
{

 switch(VAR_2->target.sizeof_strsize_t) {
  case 1: {
   if (VAR_1>0xFF) VAR_2->status=VAR_0;
   FUNC_0(VAR_1,VAR_2);
  } break;
  case 2: {
   if (VAR_1>0xFFFF) VAR_2->status=VAR_0;
   uint16_t VAR_3=(uint16_t)VAR_1;
   FUNC_2((char*)&VAR_3,2,VAR_2);
   FUNC_1(VAR_3,VAR_2);
  } break;
  case 4: {

   if (VAR_1>0xFFFFFFFE) VAR_2->status=VAR_0;
   uint32_t VAR_4=VAR_1;
   FUNC_2((char*)&VAR_4,4,VAR_2);
   FUNC_1(VAR_4,VAR_2);
  } break;
  default: FUNC_3(0);
 }
}
