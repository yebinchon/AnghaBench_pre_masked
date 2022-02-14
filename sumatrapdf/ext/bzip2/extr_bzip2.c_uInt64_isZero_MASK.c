
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* b; } ;
typedef TYPE_1__ UInt64 ;
typedef int Int32 ;
typedef int Bool ;



__attribute__((used)) static
Bool FUNC_0 ( UInt64* VAR_0 )
{
   Int32 VAR_1;
   for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
      if (VAR_0->b[VAR_1] != 0) return 0;
   return 1;
}
