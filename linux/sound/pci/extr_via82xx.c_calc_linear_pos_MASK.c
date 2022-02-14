
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viadev {unsigned int bufsize; unsigned int lastpos; unsigned int fragsize; TYPE_1__* idx_table; int bufsize2; int tbl_entries; } ;
struct via82xx {TYPE_2__* card; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned int size; unsigned int offset; } ;


 scalar_t__ FUNC_0 (struct viadev*,unsigned int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct via82xx *VAR_0,
        struct viadev *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_1->idx_table[VAR_2].size;
 VAR_5 = VAR_1->idx_table[VAR_2].offset;
 VAR_6 = VAR_5 + VAR_4 - VAR_3;
 if (VAR_6 >= VAR_1->bufsize)
  VAR_6 -= VAR_1->bufsize;


 if (VAR_4 < VAR_3) {
  FUNC_1(VAR_0->card->dev,
   "invalid via82xx_cur_ptr (size = %d, count = %d)\n",
      (int)VAR_4, (int)VAR_3);
  VAR_6 = VAR_1->lastpos;
 } else {
  if (! VAR_3) {




   int VAR_7 = VAR_6 - VAR_1->lastpos;
   if (VAR_7 < 0)
    VAR_7 += VAR_1->bufsize;
   if ((unsigned int)VAR_7 > VAR_1->fragsize)
    VAR_6 = VAR_5;
  }
  if (FUNC_0(VAR_1, VAR_6)) {
   VAR_6 = VAR_5 + VAR_4;
   if (FUNC_0(VAR_1, VAR_6)) {
    FUNC_1(VAR_0->card->dev,
     "invalid via82xx_cur_ptr (2), using last valid pointer\n");
    VAR_6 = VAR_1->lastpos;
   }
  }
 }
 return VAR_6;
}
