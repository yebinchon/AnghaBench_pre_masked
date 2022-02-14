
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_6__ {void* status; } ;
typedef TYPE_1__ DumpState ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 void* VAR_0 ;
 int FUNC_2 (char*,int,TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2, DumpState* VAR_3)
{

 switch(VAR_2) {
  case 1: {
   if (VAR_1>0x7F || VAR_1<(-0x80)) VAR_3->status=VAR_0;
   FUNC_0(VAR_1,VAR_3);
  } break;
  case 2: {
   if (VAR_1>0x7FFF || VAR_1<(-0x8000)) VAR_3->status=VAR_0;
   int16_t VAR_4=(int16_t)VAR_1;
   FUNC_2((char*)&VAR_4,2,VAR_3);
   FUNC_1(VAR_4,VAR_3);
  } break;
  case 4: {

   if (VAR_1>0x7FFFFFFE || VAR_1<(-0x7FFFFFFF)) VAR_3->status=VAR_0;
   int32_t VAR_5=(int32_t)VAR_1;
   FUNC_2((char*)&VAR_5,4,VAR_3);
   FUNC_1(VAR_5,VAR_3);
  } break;
  default: FUNC_3(0);
 }
}
