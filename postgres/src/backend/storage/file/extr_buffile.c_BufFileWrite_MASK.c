
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ pos; int dirty; scalar_t__ nbytes; TYPE_1__ buffer; int curOffset; int readOnly; } ;
typedef TYPE_2__ BufFile ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,void*,size_t) ;

size_t
FUNC_3(BufFile *VAR_1, void *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 size_t VAR_5;

 FUNC_0(!VAR_1->readOnly);

 while (VAR_3 > 0)
 {
  if (VAR_1->pos >= VAR_0)
  {

   if (VAR_1->dirty)
   {
    FUNC_1(VAR_1);
    if (VAR_1->dirty)
     break;
   }
   else
   {

    VAR_1->curOffset += VAR_1->pos;
    VAR_1->pos = 0;
    VAR_1->nbytes = 0;
   }
  }

  VAR_5 = VAR_0 - VAR_1->pos;
  if (VAR_5 > VAR_3)
   VAR_5 = VAR_3;
  FUNC_0(VAR_5 > 0);

  FUNC_2(VAR_1->buffer.data + VAR_1->pos, VAR_2, VAR_5);

  VAR_1->dirty = 1;
  VAR_1->pos += VAR_5;
  if (VAR_1->nbytes < VAR_1->pos)
   VAR_1->nbytes = VAR_1->pos;
  VAR_2 = (void *) ((char *) VAR_2 + VAR_5);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
 }

 return VAR_4;
}
