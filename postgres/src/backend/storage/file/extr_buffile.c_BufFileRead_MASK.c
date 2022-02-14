
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t data; } ;
struct TYPE_7__ {scalar_t__ pos; scalar_t__ nbytes; TYPE_1__ buffer; int curOffset; scalar_t__ dirty; } ;
typedef TYPE_2__ BufFile ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void*,size_t,size_t) ;

size_t
FUNC_4(BufFile *VAR_0, void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 size_t VAR_4;

 if (VAR_0->dirty)
 {
  if (FUNC_1(VAR_0) != 0)
   return 0;
  FUNC_0(!VAR_0->dirty);
 }

 while (VAR_2 > 0)
 {
  if (VAR_0->pos >= VAR_0->nbytes)
  {

   VAR_0->curOffset += VAR_0->pos;
   VAR_0->pos = 0;
   VAR_0->nbytes = 0;
   FUNC_2(VAR_0);
   if (VAR_0->nbytes <= 0)
    break;
  }

  VAR_4 = VAR_0->nbytes - VAR_0->pos;
  if (VAR_4 > VAR_2)
   VAR_4 = VAR_2;
  FUNC_0(VAR_4 > 0);

  FUNC_3(VAR_1, VAR_0->buffer.data + VAR_0->pos, VAR_4);

  VAR_0->pos += VAR_4;
  VAR_1 = (void *) ((char *) VAR_1 + VAR_4);
  VAR_2 -= VAR_4;
  VAR_3 += VAR_4;
 }

 return VAR_3;
}
