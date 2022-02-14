
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {int reg_lock; TYPE_1__* card; int in_measurement; } ;
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
 int FUNC_2 (struct intel8x0*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct intel8x0*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_9(struct intel8x0 *VAR_8, struct ichdev *VAR_9)
{
 unsigned long VAR_10 = VAR_9->reg_offset;
 unsigned long VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;

 FUNC_7(&VAR_8->reg_lock, VAR_11);
 VAR_12 = FUNC_2(VAR_8, VAR_10 + VAR_9->roff_sr);
 VAR_13 = FUNC_2(VAR_8, VAR_10 + VAR_4);
 if (!(VAR_12 & VAR_0)) {
  VAR_15 = 0;
 } else if (VAR_13 == VAR_9->civ) {

  VAR_15 = 1;
  VAR_9->civ++;
  VAR_9->civ &= VAR_3;
 } else {
  VAR_15 = VAR_13 - VAR_9->civ;
  if (VAR_15 < 0)
   VAR_15 += VAR_3 + 1;


  VAR_9->civ = VAR_13;
 }

 VAR_9->position += VAR_15 * VAR_9->fragsize1;
 if (! VAR_8->in_measurement)
  VAR_9->position %= VAR_9->size;
 VAR_9->lvi += VAR_15;
 VAR_9->lvi &= VAR_3;
 FUNC_5(VAR_8, VAR_10 + VAR_6, VAR_9->lvi);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_9->lvi_frag++;
  VAR_9->lvi_frag %= VAR_9->frags;
  VAR_9->bdbar[VAR_9->lvi * 2] = FUNC_0(VAR_9->physbuf + VAR_9->lvi_frag * VAR_9->fragsize1);







  if (--VAR_9->ack == 0) {
   VAR_9->ack = VAR_9->ack_reload;
   VAR_16 = 1;
  }
 }
 FUNC_8(&VAR_8->reg_lock, VAR_11);
 if (VAR_16 && VAR_9->substream) {
  FUNC_6(VAR_9->substream);
 }
 FUNC_5(VAR_8, VAR_10 + VAR_9->roff_sr,
   VAR_12 & (VAR_1 | VAR_0 | VAR_2));
}
