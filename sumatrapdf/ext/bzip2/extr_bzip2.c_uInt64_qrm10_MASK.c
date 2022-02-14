
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* b; } ;
typedef TYPE_1__ UInt64 ;
typedef int UInt32 ;
typedef size_t Int32 ;



__attribute__((used)) static
Int32 FUNC_0 ( UInt64* VAR_0 )
{
   UInt32 VAR_1, VAR_2;
   Int32 VAR_3;
   VAR_1 = 0;
   for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
      VAR_2 = VAR_1 * 256 + VAR_0->b[VAR_3];
      VAR_0->b[VAR_3] = VAR_2 / 10;
      VAR_1 = VAR_2 % 10;
   }
   return VAR_1;
}
