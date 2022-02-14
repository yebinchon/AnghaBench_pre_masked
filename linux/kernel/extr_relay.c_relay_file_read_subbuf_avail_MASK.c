
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchan_buf {size_t data; size_t start; size_t offset; size_t* padding; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; } ;



__attribute__((used)) static size_t FUNC_0(size_t VAR_0,
        struct rchan_buf *VAR_1)
{
 size_t VAR_2, VAR_3 = 0;
 size_t VAR_4, VAR_5, VAR_6, VAR_7;
 size_t VAR_8 = VAR_1->chan->subbuf_size;

 VAR_6 = (VAR_1->data - VAR_1->start) / VAR_8;
 VAR_7 = VAR_1->offset > VAR_8 ? VAR_8 : VAR_1->offset;
 VAR_4 = VAR_0 / VAR_8;
 VAR_5 = VAR_0 % VAR_8;
 VAR_2 = VAR_1->padding[VAR_4];

 if (VAR_4 == VAR_6) {
  if (VAR_5 + VAR_2 < VAR_7)
   VAR_3 = VAR_7 - (VAR_5 + VAR_2);
 } else
  VAR_3 = (VAR_8 - VAR_2) - VAR_5;

 return VAR_3;
}
