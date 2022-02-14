
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; int component; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char const*,int ) ;
 int FUNC_4 (int ,int *,struct firmware const*,int ) ;
 int VAR_2 ;

int FUNC_5(struct snd_sof_dev *VAR_3, const char *VAR_4)
{
 const struct firmware *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3->dev, "loading topology:%s\n", VAR_4);

 VAR_6 = FUNC_3(&VAR_5, VAR_4, VAR_3->dev);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "error: tplg request firmware %s failed err: %d\n",
   VAR_4, VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_3->component,
       &VAR_2, VAR_5,
       VAR_1);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "error: tplg component load failed %d\n",
   VAR_6);
  VAR_6 = -VAR_0;
 }

 FUNC_2(VAR_5);
 return VAR_6;
}
