
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_byt_stream {int str_id; } ;
struct sst_byt {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct sst_byt*,int ,int ,int ) ;

int FUNC_2(struct sst_byt *VAR_1, struct sst_byt_stream *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0,
     VAR_2->str_id, 0);
 if (VAR_3 < 0)
  FUNC_0(VAR_1->dev, "ipc: error failed to resume stream %d\n",
   VAR_2->str_id);

 return VAR_3;
}
