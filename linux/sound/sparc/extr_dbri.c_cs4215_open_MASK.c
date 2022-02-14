
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int channels; int precision; scalar_t__ offset; scalar_t__ onboard; } ;
struct snd_dbri {int lock; scalar_t__ regs; TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct snd_dbri*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct snd_dbri*,int,int,int,int,scalar_t__) ;
 int FUNC_3 (struct snd_dbri*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct snd_dbri *VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_1(VAR_3, "cs4215_open: %d channels, %d bits\n",
  VAR_10->mm.channels, VAR_10->mm.precision);





 FUNC_0(VAR_10, 1);
 FUNC_8(125);
 FUNC_6(&VAR_10->lock, VAR_13);
 VAR_12 = FUNC_4(VAR_10->regs + VAR_8);
 VAR_12 &= ~(VAR_1);
 FUNC_5(VAR_12, VAR_10->regs + VAR_8);


 FUNC_5(VAR_2 | VAR_5 | VAR_7 |
      (VAR_10->mm.onboard ? VAR_4 : VAR_6), VAR_10->regs + VAR_9);

 FUNC_3(VAR_10, VAR_0, 128);







 VAR_11 = VAR_10->mm.channels * VAR_10->mm.precision;

 FUNC_2(VAR_10, 4, 16, 16, VAR_11, VAR_10->mm.offset);
 FUNC_2(VAR_10, 20, 4, 16, 32, VAR_10->mm.offset + 32);
 FUNC_2(VAR_10, 6, 16, 16, VAR_11, VAR_10->mm.offset);
 FUNC_2(VAR_10, 21, 6, 16, 16, VAR_10->mm.offset + 40);


 VAR_12 = FUNC_4(VAR_10->regs + VAR_8);
 VAR_12 |= VAR_1;
 FUNC_5(VAR_12, VAR_10->regs + VAR_8);
 FUNC_7(&VAR_10->lock, VAR_13);

 FUNC_0(VAR_10, 0);
}
