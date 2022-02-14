
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int code; int range; scalar_t__ needFlush; } ;
typedef TYPE_1__ CLzmaDec ;
typedef scalar_t__ Byte ;



__attribute__((used)) static void FUNC_0(CLzmaDec *VAR_0, const Byte *VAR_1)
{
  VAR_0->code = ((UInt32)VAR_1[1] << 24) | ((UInt32)VAR_1[2] << 16) | ((UInt32)VAR_1[3] << 8) | ((UInt32)VAR_1[4]);
  VAR_0->range = 0xFFFFFFFF;
  VAR_0->needFlush = 0;
}
