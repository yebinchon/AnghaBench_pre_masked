
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct intel8x0 {int reg_lock; scalar_t__ inside_vm; } ;
struct ichdev {unsigned int position; size_t last_pos; size_t pos_shift; size_t fragsize1; size_t size; scalar_t__ roff_picb; scalar_t__ reg_offset; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 struct ichdev* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct intel8x0*,scalar_t__) ;
 size_t FUNC_3 (struct intel8x0*,scalar_t__) ;
 struct intel8x0* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct intel8x0 *VAR_2 = FUNC_4(VAR_1);
 struct ichdev *VAR_3 = FUNC_1(VAR_1);
 size_t VAR_4, VAR_5;
 int VAR_6, VAR_7 = 10;
 unsigned int VAR_8;

 FUNC_5(&VAR_2->reg_lock);
 do {
  VAR_6 = FUNC_2(VAR_2, VAR_3->reg_offset + VAR_0);
  VAR_4 = FUNC_3(VAR_2, VAR_3->reg_offset + VAR_3->roff_picb);
  VAR_8 = VAR_3->position;
  if (VAR_4 == 0) {
   FUNC_7(10);
   continue;
  }
  if (VAR_6 != FUNC_2(VAR_2, VAR_3->reg_offset + VAR_0))
   continue;







  if (VAR_2->inside_vm)
   break;
  if (VAR_4 == FUNC_3(VAR_2, VAR_3->reg_offset + VAR_3->roff_picb))
   break;
 } while (VAR_7--);
 VAR_5 = VAR_3->last_pos;
 if (VAR_4 != 0) {
  VAR_4 <<= VAR_3->pos_shift;
  VAR_5 = VAR_3->fragsize1 - VAR_4;
  VAR_5 += VAR_8;
  if (VAR_5 < VAR_3->last_pos) {
   unsigned int VAR_9, VAR_10;
   VAR_9 = VAR_8 / VAR_3->fragsize1;
   VAR_10 = VAR_3->last_pos / VAR_3->fragsize1;



   if (VAR_9 == VAR_10)
    VAR_5 = VAR_3->last_pos;
  }
 }
 VAR_3->last_pos = VAR_5;
 FUNC_6(&VAR_2->reg_lock);
 if (VAR_5 >= VAR_3->size)
  return 0;
 return FUNC_0(VAR_1->runtime, VAR_5);
}
