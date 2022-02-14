
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int dev; } ;
struct mt2701_i2s_path {int asrco_ck; int * hop_ck; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct mtk_base_afe *VAR_0,
     struct mt2701_i2s_path *VAR_1,
     int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->asrco_ck);
 if (VAR_3) {
  FUNC_2(VAR_0->dev, "failed to enable ASRC clock %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1->hop_ck[VAR_2]);
 if (VAR_3) {
  FUNC_2(VAR_0->dev, "failed to enable I2S clock %d\n", VAR_3);
  goto err_hop_ck;
 }

 return 0;

err_hop_ck:
 FUNC_0(VAR_1->asrco_ck);

 return VAR_3;
}
