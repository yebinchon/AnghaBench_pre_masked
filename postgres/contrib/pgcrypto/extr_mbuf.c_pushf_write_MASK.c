
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {scalar_t__ block_size; int pos; int const* buf; } ;
typedef TYPE_1__ PushFilter ;


 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int) ;

int
FUNC_2(PushFilter *VAR_0, const uint8 *VAR_1, int VAR_2)
{
 int VAR_3,
    VAR_4;




 if (VAR_0->block_size <= 0)
  return FUNC_1(VAR_0, VAR_1, VAR_2);




 VAR_3 = VAR_0->block_size - VAR_0->pos;
 if (VAR_3 > 0)
 {
  if (VAR_2 < VAR_3)
  {
   FUNC_0(VAR_0->buf + VAR_0->pos, VAR_1, VAR_2);
   VAR_0->pos += VAR_2;
   return 0;
  }
  FUNC_0(VAR_0->buf + VAR_0->pos, VAR_1, VAR_3);
  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;
 }




 VAR_4 = FUNC_1(VAR_0, VAR_0->buf, VAR_0->block_size);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_0->pos = 0;




 while (VAR_2 > 0)
 {
  if (VAR_2 > VAR_0->block_size)
  {
   VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_0->block_size);
   if (VAR_4 < 0)
    return VAR_4;
   VAR_1 += VAR_0->block_size;
   VAR_2 -= VAR_0->block_size;
  }
  else
  {
   FUNC_0(VAR_0->buf, VAR_1, VAR_2);
   VAR_0->pos += VAR_2;
   break;
  }
 }
 return 0;
}
