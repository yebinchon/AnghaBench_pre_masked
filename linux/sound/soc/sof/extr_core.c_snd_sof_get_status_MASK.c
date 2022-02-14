
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_panic_info {int filename; int linenum; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_3__ {int id; int msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct snd_sof_dev*,void*) ;
 int FUNC_3 (struct snd_sof_dev*,void*,void*,size_t) ;

void FUNC_4(struct snd_sof_dev *VAR_4, u32 VAR_5,
   u32 VAR_6, void *VAR_7,
   struct sof_ipc_panic_info *VAR_8,
   void *VAR_9, size_t VAR_10)
{
 u32 VAR_11;
 int VAR_12;


 if ((VAR_5 & VAR_2) != VAR_1) {
  FUNC_1(VAR_4->dev, "error: unexpected fault 0x%8.8x trace 0x%8.8x\n",
   VAR_5, VAR_6);
  return;
 }

 VAR_11 = VAR_5 & (VAR_2 | VAR_0);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  if (VAR_3[VAR_12].id == VAR_11) {
   FUNC_1(VAR_4->dev, "error: %s\n", VAR_3[VAR_12].msg);
   FUNC_1(VAR_4->dev, "error: trace point %8.8x\n",
    VAR_6);
   goto out;
  }
 }


 FUNC_1(VAR_4->dev, "error: unknown reason %8.8x\n", VAR_5);
 FUNC_1(VAR_4->dev, "error: trace point %8.8x\n", VAR_6);

out:
 FUNC_1(VAR_4->dev, "error: panic at %s:%d\n",
  VAR_8->filename, VAR_8->linenum);
 FUNC_2(VAR_4, VAR_7);
 FUNC_3(VAR_4, VAR_7, VAR_9, VAR_10);
}
