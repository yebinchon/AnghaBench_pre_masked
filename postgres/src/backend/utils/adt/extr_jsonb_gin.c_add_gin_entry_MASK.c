
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int allocated; int * buf; } ;
typedef TYPE_1__ GinEntries ;
typedef int Datum ;


 int * FUNC_0 (int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(GinEntries *VAR_0, Datum VAR_1)
{
 int VAR_2 = VAR_0->count;

 if (VAR_0->count >= VAR_0->allocated)
 {
  if (VAR_0->allocated)
  {
   VAR_0->allocated *= 2;
   VAR_0->buf = FUNC_1(VAR_0->buf,
         sizeof(Datum) * VAR_0->allocated);
  }
  else
  {
   VAR_0->allocated = 8;
   VAR_0->buf = FUNC_0(sizeof(Datum) * VAR_0->allocated);
  }
 }

 VAR_0->buf[VAR_0->count++] = VAR_1;

 return VAR_2;
}
