
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sst_generic_ipc {int kwork; } ;
struct sst_dsp {int spinlock; } ;
struct sst_byt {struct sst_generic_ipc ipc; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sst_byt*,unsigned long*) ;
 int FUNC_5 (struct sst_byt*,int) ;
 struct sst_byt* FUNC_6 (struct sst_dsp*) ;
 int FUNC_7 (struct sst_dsp*,int ) ;
 int FUNC_8 (struct sst_dsp*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct sst_dsp *VAR_10 = (struct sst_dsp *) VAR_9;
 struct sst_byt *VAR_11 = FUNC_6(VAR_10);
 struct sst_generic_ipc *VAR_12 = &VAR_11->ipc;
 u64 VAR_13;
 unsigned long VAR_14;

 FUNC_2(&VAR_10->spinlock, VAR_14);

 VAR_13 = FUNC_7(VAR_10, VAR_7);
 if (VAR_13 & VAR_4) {
  if (VAR_13 & VAR_1) {

   FUNC_4(VAR_11, &VAR_14);
  } else {

   FUNC_5(VAR_11, VAR_13);
  }





  FUNC_8(VAR_10, VAR_7,
   VAR_5 | VAR_4 |
   FUNC_0(VAR_0),
   VAR_5);

  FUNC_8(VAR_10, VAR_6,
   VAR_3, 0);
 }

 FUNC_3(&VAR_10->spinlock, VAR_14);


 FUNC_1(&VAR_12->kwork);

 return VAR_2;
}
