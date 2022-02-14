
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola_stream {int format_verb; int index; int nid; } ;
struct lola {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct lola*,int ,int ,int,unsigned int,unsigned int*,int *) ;

__attribute__((used)) static int FUNC_2(struct lola *VAR_2,
      struct lola_stream *VAR_3,
      int VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;




 VAR_6 = FUNC_1(VAR_2, VAR_3->nid, VAR_1,
         VAR_3->format_verb, 0, &VAR_8, ((void*)0));
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->card->dev, "Cannot set stream format 0x%x\n",
         VAR_3->format_verb);
  return VAR_6;
 }


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = (VAR_3->index << 6) | VAR_5;
  VAR_6 = FUNC_1(VAR_2, VAR_3[VAR_5].nid,
          VAR_0, 0, VAR_7,
          &VAR_8, ((void*)0));
  if (VAR_6 < 0) {
   FUNC_0(VAR_2->card->dev,
    "Cannot set stream channel %d\n", VAR_5);
   return VAR_6;
  }
 }
 return 0;
}
