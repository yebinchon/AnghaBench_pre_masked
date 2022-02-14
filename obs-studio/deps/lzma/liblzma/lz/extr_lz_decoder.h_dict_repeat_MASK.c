
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {size_t limit; size_t pos; int full; int size; int * buf; } ;
typedef TYPE_1__ lzma_dict ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (size_t const,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline bool
FUNC_6(lzma_dict *VAR_0, uint32_t VAR_1, uint32_t *VAR_2)
{

 const size_t VAR_3 = VAR_0->limit - VAR_0->pos;
 uint32_t VAR_4 = FUNC_4(VAR_3, *VAR_2);
 *VAR_2 -= VAR_4;




 if (VAR_1 < VAR_4) {


  do {
   VAR_0->buf[VAR_0->pos] = FUNC_1(VAR_0, VAR_1);
   ++VAR_0->pos;
  } while (--VAR_4 > 0);

 } else if (VAR_1 < VAR_0->pos) {

  FUNC_2(VAR_0->buf + VAR_0->pos,
    VAR_0->buf + VAR_0->pos - VAR_1 - 1,
    VAR_4);
  VAR_0->pos += VAR_4;

 } else {



  FUNC_0(VAR_0->full == VAR_0->size);
  const uint32_t VAR_5
    = VAR_0->pos - VAR_1 - 1 + VAR_0->size;
  uint32_t VAR_6 = VAR_0->size - VAR_5;

  if (VAR_6 < VAR_4) {
   FUNC_3(VAR_0->buf + VAR_0->pos, VAR_0->buf + VAR_5,
     VAR_6);
   VAR_0->pos += VAR_6;
   VAR_6 = VAR_4 - VAR_6;
   FUNC_2(VAR_0->buf + VAR_0->pos, VAR_0->buf, VAR_6);
   VAR_0->pos += VAR_6;
  } else {
   FUNC_3(VAR_0->buf + VAR_0->pos, VAR_0->buf + VAR_5,
     VAR_4);
   VAR_0->pos += VAR_4;
  }
 }


 if (VAR_0->full < VAR_0->pos)
  VAR_0->full = VAR_0->pos;

 return FUNC_5(*VAR_2 != 0);
}
