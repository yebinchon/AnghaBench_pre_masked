
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct sst_dsp*,int ,int,int,int ,char*) ;
 int FUNC_3 (struct sst_dsp*,int ) ;
 int FUNC_4 (struct sst_dsp*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(struct sst_dsp *VAR_3, unsigned int VAR_4)
{
 int VAR_5;


 FUNC_4(VAR_3,
   VAR_1, FUNC_0(VAR_4),
   FUNC_0(VAR_4));


 VAR_5 = FUNC_2(VAR_3,
   VAR_1,
   FUNC_0(VAR_4),
   FUNC_0(VAR_4),
   VAR_2,
   "Set reset");
 if ((FUNC_3(VAR_3, VAR_1) &
    FUNC_0(VAR_4)) !=
    FUNC_0(VAR_4)) {
  FUNC_1(VAR_3->dev, "Set reset state failed: core_mask %x\n",
       VAR_4);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
