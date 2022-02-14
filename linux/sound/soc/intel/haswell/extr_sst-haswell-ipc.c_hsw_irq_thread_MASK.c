
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_generic_ipc {int kwork; } ;
struct sst_hsw {int dsp; struct sst_generic_ipc ipc; } ;
struct sst_dsp {int spinlock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sst_hsw*) ;
 int FUNC_1 (struct sst_hsw*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct sst_hsw* FUNC_5 (struct sst_dsp*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sst_dsp*,int ) ;
 int FUNC_8 (struct sst_dsp*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_9, void *VAR_10)
{
 struct sst_dsp *VAR_11 = (struct sst_dsp *) VAR_10;
 struct sst_hsw *VAR_12 = FUNC_5(VAR_11);
 struct sst_generic_ipc *VAR_13 = &VAR_12->ipc;
 u32 VAR_14, VAR_15;
 unsigned long VAR_16;

 FUNC_3(&VAR_11->spinlock, VAR_16);

 VAR_14 = FUNC_6(VAR_12->dsp);
 VAR_15 = FUNC_7(VAR_11, VAR_4);


 if (VAR_14 & VAR_8) {


  FUNC_1(VAR_12, VAR_14);


  FUNC_8(VAR_11, VAR_7,
   VAR_8, 0);


  FUNC_8(VAR_11, VAR_1,
   VAR_3, 0);
 }


 if (VAR_15 & VAR_5) {


  FUNC_0(VAR_12);


  FUNC_8(VAR_11, VAR_4,
   VAR_5 | VAR_6, VAR_6);


  FUNC_8(VAR_11, VAR_1,
   VAR_2, 0);
 }

 FUNC_4(&VAR_11->spinlock, VAR_16);


 FUNC_2(&VAR_13->kwork);

 return VAR_0;
}
