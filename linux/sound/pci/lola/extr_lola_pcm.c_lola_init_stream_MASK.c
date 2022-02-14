
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola_stream {int nid; int index; int dsd; int can_float; } ;
struct lola {int input_src_caps_mask; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (struct lola*,int,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct lola *VAR_5, struct lola_stream *VAR_6,
       int VAR_7, int VAR_8, int VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 VAR_6->nid = VAR_8;
 VAR_6->index = VAR_7;
 VAR_6->dsd = VAR_7;
 if (VAR_9 == VAR_4)
  VAR_6->dsd += VAR_3;
 VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_1, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_5->card->dev, "Can't read wcaps for 0x%x\n", VAR_8);
  return VAR_11;
 }
 if (VAR_9 == VAR_4) {

  if ((VAR_10 & 0x00f00dff) != 0x00000010) {
   FUNC_0(VAR_5->card->dev,
    "Invalid wcaps 0x%x for 0x%x\n",
          VAR_10, VAR_8);
   return -VAR_0;
  }
 } else {



  if ((VAR_10 & 0x00f00cff) != 0x00100010) {
   FUNC_0(VAR_5->card->dev,
    "Invalid wcaps 0x%x for 0x%x\n",
          VAR_10, VAR_8);
   return -VAR_0;
  }

  if ((VAR_10 & 0x00001200) == 0x00001200)
   VAR_5->input_src_caps_mask |= (1 << VAR_7);
 }

 VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_2, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_5->card->dev, "Can't read FORMATS 0x%x\n", VAR_8);
  return VAR_11;
 }
 VAR_10 &= 3;
 if (VAR_10 == 3)
  VAR_6->can_float = 1;
 if (!(VAR_10 & 1)) {
  FUNC_0(VAR_5->card->dev,
   "Invalid formats 0x%x for 0x%x", VAR_10, VAR_8);
  return -VAR_0;
 }
 return 0;
}
