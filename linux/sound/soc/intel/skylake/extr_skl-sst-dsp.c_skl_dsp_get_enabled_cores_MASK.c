
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sst_dsp {int dev; struct skl_dev* thread_context; } ;
struct TYPE_2__ {int count; } ;
struct skl_dev {TYPE_1__ cores; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 unsigned int FUNC_5 (struct sst_dsp*,int ) ;

unsigned int FUNC_6(struct sst_dsp *VAR_4)
{
 struct skl_dev *VAR_5 = VAR_4->thread_context;
 unsigned int VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_3(VAR_5->cores.count);

 VAR_8 = FUNC_5(VAR_4, VAR_3);


 VAR_7 = (VAR_8 & FUNC_0(VAR_6)) >>
   VAR_0;


 VAR_7 &= (~VAR_8 & FUNC_1(VAR_6)) >>
   VAR_1;


 VAR_7 &= (~VAR_8 & FUNC_2(VAR_6)) >>
   VAR_2;
 VAR_7 &= VAR_6;

 FUNC_4(VAR_4->dev, "DSP enabled cores mask = %x\n", VAR_7);

 return VAR_7;
}
