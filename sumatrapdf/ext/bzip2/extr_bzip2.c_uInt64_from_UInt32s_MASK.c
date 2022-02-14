
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** b; } ;
typedef TYPE_1__ UInt64 ;
typedef int UInt32 ;
typedef void* UChar ;



__attribute__((used)) static
void FUNC_0 ( UInt64* VAR_0, UInt32 VAR_1, UInt32 VAR_2 )
{
   VAR_0->b[7] = (UChar)((VAR_2 >> 24) & 0xFF);
   VAR_0->b[6] = (UChar)((VAR_2 >> 16) & 0xFF);
   VAR_0->b[5] = (UChar)((VAR_2 >> 8) & 0xFF);
   VAR_0->b[4] = (UChar) (VAR_2 & 0xFF);
   VAR_0->b[3] = (UChar)((VAR_1 >> 24) & 0xFF);
   VAR_0->b[2] = (UChar)((VAR_1 >> 16) & 0xFF);
   VAR_0->b[1] = (UChar)((VAR_1 >> 8) & 0xFF);
   VAR_0->b[0] = (UChar) (VAR_1 & 0xFF);
}
