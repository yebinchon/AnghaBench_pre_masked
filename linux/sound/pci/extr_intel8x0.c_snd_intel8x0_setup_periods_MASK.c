
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {TYPE_1__* card; } ;
struct ichdev {unsigned long reg_offset; int size; int fragsize; int ack_reload; int ack; int fragsize1; int physbuf; int pos_shift; int frags; int lvi; int lvi_frag; scalar_t__ roff_sr; scalar_t__ position; scalar_t__ civ; int bdbar_addr; int * bdbar; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,...) ;
 int FUNC_2 (struct intel8x0*,scalar_t__,int) ;
 int FUNC_3 (struct intel8x0*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct intel8x0 *VAR_7, struct ichdev *VAR_8)
{
 int VAR_9;
 __le32 *VAR_10 = VAR_8->bdbar;
 unsigned long VAR_11 = VAR_8->reg_offset;

 FUNC_3(VAR_7, VAR_11 + VAR_4, VAR_8->bdbar_addr);
 if (VAR_8->size == VAR_8->fragsize) {
  VAR_8->ack_reload = VAR_8->ack = 2;
  VAR_8->fragsize1 = VAR_8->fragsize >> 1;
  for (VAR_9 = 0; VAR_9 < (VAR_3 + 1) * 2; VAR_9 += 4) {
   VAR_10[VAR_9 + 0] = FUNC_0(VAR_8->physbuf);
   VAR_10[VAR_9 + 1] = FUNC_0(0x80000000 |
           VAR_8->fragsize1 >> VAR_8->pos_shift);
   VAR_10[VAR_9 + 2] = FUNC_0(VAR_8->physbuf + (VAR_8->size >> 1));
   VAR_10[VAR_9 + 3] = FUNC_0(0x80000000 |
           VAR_8->fragsize1 >> VAR_8->pos_shift);
  }
  VAR_8->frags = 2;
 } else {
  VAR_8->ack_reload = VAR_8->ack = 1;
  VAR_8->fragsize1 = VAR_8->fragsize;
  for (VAR_9 = 0; VAR_9 < (VAR_3 + 1) * 2; VAR_9 += 2) {
   VAR_10[VAR_9 + 0] = FUNC_0(VAR_8->physbuf +
           (((VAR_9 >> 1) * VAR_8->fragsize) %
            VAR_8->size));
   VAR_10[VAR_9 + 1] = FUNC_0(0x80000000 |
           VAR_8->fragsize >> VAR_8->pos_shift);




  }
  VAR_8->frags = VAR_8->size / VAR_8->fragsize;
 }
 FUNC_2(VAR_7, VAR_11 + VAR_6, VAR_8->lvi = VAR_3);
 VAR_8->civ = 0;
 FUNC_2(VAR_7, VAR_11 + VAR_5, 0);
 VAR_8->lvi_frag = VAR_3 % VAR_8->frags;
 VAR_8->position = 0;







 FUNC_2(VAR_7, VAR_11 + VAR_8->roff_sr, VAR_1 | VAR_0 | VAR_2);
}
