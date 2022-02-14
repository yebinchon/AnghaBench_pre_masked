
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int period_bytes; unsigned int bufsize; int * posbuf; TYPE_1__* substream; } ;
struct azx_dev {TYPE_2__ core; scalar_t__ insufficient; } ;
struct azx {int dummy; } ;
struct TYPE_7__ {int fifo_size; } ;
struct TYPE_5__ {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct azx_dev*) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static unsigned int FUNC_3(struct azx *VAR_1,
      struct azx_dev *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_3 = FUNC_2(FUNC_0(VAR_2));
 if (VAR_2->core.substream->stream == VAR_0) {

  return VAR_3;
 }





 VAR_7 = FUNC_1(*VAR_2->core.posbuf);
 VAR_7 %= VAR_2->core.period_bytes;

 VAR_9 = FUNC_0(VAR_2)->fifo_size - 1;

 if (VAR_2->insufficient) {

  if (VAR_3 <= VAR_9)
   return 0;

  VAR_2->insufficient = 0;
 }

 if (VAR_3 <= VAR_9)
  VAR_4 = VAR_2->core.bufsize + VAR_3 - VAR_9;
 else
  VAR_4 = VAR_3 - VAR_9;


 VAR_8 = VAR_4 % VAR_2->core.period_bytes;
 VAR_6 = VAR_3 % VAR_2->core.period_bytes;
 if (VAR_6 >= VAR_9)
  VAR_5 = VAR_3 - VAR_6;
 else if (VAR_7 >= VAR_8)
  VAR_5 = VAR_4 - VAR_8;
 else {
  VAR_5 = VAR_4 - VAR_8 + VAR_2->core.period_bytes;
  if (VAR_5 >= VAR_2->core.bufsize)
   VAR_5 = 0;
 }


 return VAR_5 + VAR_7;
}
