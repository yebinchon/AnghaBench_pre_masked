
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0m {int reg_lock; TYPE_1__* card; } ;
struct ichdev {unsigned long reg_offset; int civ; int position; int fragsize1; int size; int lvi; int lvi_frag; int frags; scalar_t__ ack; scalar_t__ ack_reload; scalar_t__ roff_sr; scalar_t__ substream; int * bdbar; scalar_t__ physbuf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct intel8x0m*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct intel8x0m*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline void FUNC_9(struct intel8x0m *VAR_8, struct ichdev *VAR_9)
{
 unsigned long VAR_10 = VAR_9->reg_offset;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_2(VAR_8, VAR_10 + VAR_4);
 if (VAR_11 == VAR_9->civ) {

  VAR_13 = 1;
  VAR_9->civ++;
  VAR_9->civ &= VAR_3;
 } else {
  VAR_13 = VAR_11 - VAR_9->civ;
  if (VAR_13 < 0)
   VAR_13 += VAR_3 + 1;


  VAR_9->civ = VAR_11;
 }

 VAR_9->position += VAR_13 * VAR_9->fragsize1;
 VAR_9->position %= VAR_9->size;
 VAR_9->lvi += VAR_13;
 VAR_9->lvi &= VAR_3;
 FUNC_5(VAR_8, VAR_10 + VAR_6, VAR_9->lvi);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_9->lvi_frag++;
  VAR_9->lvi_frag %= VAR_9->frags;
  VAR_9->bdbar[VAR_9->lvi * 2] = FUNC_0(VAR_9->physbuf +
            VAR_9->lvi_frag *
            VAR_9->fragsize1);







  if (--VAR_9->ack == 0) {
   VAR_9->ack = VAR_9->ack_reload;
   VAR_14 = 1;
  }
 }
 if (VAR_14 && VAR_9->substream) {
  FUNC_8(&VAR_8->reg_lock);
  FUNC_6(VAR_9->substream);
  FUNC_7(&VAR_8->reg_lock);
 }
 FUNC_5(VAR_8, VAR_10 + VAR_9->roff_sr, VAR_1 | VAR_0 | VAR_2);
}
