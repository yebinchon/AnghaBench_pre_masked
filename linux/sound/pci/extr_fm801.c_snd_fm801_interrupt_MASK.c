
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fm801 {int ply_buf; unsigned int ply_pos; unsigned int ply_count; unsigned int ply_size; int cap_buf; unsigned int cap_pos; unsigned int cap_count; unsigned int cap_size; TYPE_1__* rmidi; scalar_t__ capture_substream; int reg_lock; scalar_t__ cap_buffer; scalar_t__ pcm; scalar_t__ playback_substream; scalar_t__ ply_buffer; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short FUNC_0 (struct fm801*,int ) ;
 int FUNC_1 (struct fm801*,int ,scalar_t__) ;
 int FUNC_2 (struct fm801*,int ,unsigned short) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct fm801 *VAR_13 = VAR_12;
 unsigned short VAR_14;
 unsigned int VAR_15;

 VAR_14 = FUNC_0(VAR_13, VAR_8);
 VAR_14 &= VAR_4|VAR_2|VAR_3|VAR_5;
 if (! VAR_14)
  return VAR_7;

 FUNC_2(VAR_13, VAR_8, VAR_14);
 if (VAR_13->pcm && (VAR_14 & VAR_4) && VAR_13->playback_substream) {
  FUNC_5(&VAR_13->reg_lock);
  VAR_13->ply_buf++;
  VAR_13->ply_pos += VAR_13->ply_count;
  VAR_13->ply_pos %= VAR_13->ply_size;
  VAR_15 = VAR_13->ply_pos + VAR_13->ply_count;
  VAR_15 %= VAR_13->ply_size;
  if (VAR_13->ply_buf & 1)
   FUNC_1(VAR_13, VAR_9, VAR_13->ply_buffer + VAR_15);
  else
   FUNC_1(VAR_13, VAR_10, VAR_13->ply_buffer + VAR_15);
  FUNC_6(&VAR_13->reg_lock);
  FUNC_4(VAR_13->playback_substream);
 }
 if (VAR_13->pcm && (VAR_14 & VAR_2) && VAR_13->capture_substream) {
  FUNC_5(&VAR_13->reg_lock);
  VAR_13->cap_buf++;
  VAR_13->cap_pos += VAR_13->cap_count;
  VAR_13->cap_pos %= VAR_13->cap_size;
  VAR_15 = VAR_13->cap_pos + VAR_13->cap_count;
  VAR_15 %= VAR_13->cap_size;
  if (VAR_13->cap_buf & 1)
   FUNC_1(VAR_13, VAR_0, VAR_13->cap_buffer + VAR_15);
  else
   FUNC_1(VAR_13, VAR_1, VAR_13->cap_buffer + VAR_15);
  FUNC_6(&VAR_13->reg_lock);
  FUNC_4(VAR_13->capture_substream);
 }
 if (VAR_13->rmidi && (VAR_14 & VAR_3))
  FUNC_3(VAR_11, VAR_13->rmidi->private_data);
 if (VAR_14 & VAR_5) {

 }

 return VAR_6;
}
