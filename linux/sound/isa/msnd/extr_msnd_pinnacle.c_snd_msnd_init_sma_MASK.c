
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_msnd {int play_sample_size; int play_channels; int play_sample_rate; scalar_t__ SMA; scalar_t__ DSPQ; scalar_t__ mappedbase; scalar_t__ MIDQ; scalar_t__ MODQ; scalar_t__ DARQ; scalar_t__ DAPQ; int lock; scalar_t__ io; int memid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct snd_msnd *VAR_30)
{
 static int VAR_31;
 u16 VAR_32, VAR_33;
 unsigned long VAR_34;




 FUNC_1(VAR_9, VAR_30->io + VAR_11);

 VAR_30->SMA = VAR_30->mappedbase + VAR_19;

 if (VAR_31) {
  VAR_32 = FUNC_2(VAR_30->SMA + VAR_24);
  VAR_33 = FUNC_2(VAR_30->SMA + VAR_25);
 } else
  VAR_32 = VAR_33 = 0;
 FUNC_0(VAR_30->mappedbase, 0, 0x8000);


 FUNC_4(&VAR_30->lock, VAR_34);
 FUNC_1(VAR_10, VAR_30->io + VAR_11);
 FUNC_0(VAR_30->mappedbase, 0, 0x8000);
 FUNC_1(VAR_9, VAR_30->io + VAR_11);
 FUNC_5(&VAR_30->lock, VAR_34);


 VAR_30->DAPQ = VAR_30->mappedbase + VAR_2;
 FUNC_3(VAR_30->DAPQ, VAR_1, VAR_0);


 VAR_30->DARQ = VAR_30->mappedbase + VAR_5;
 FUNC_3(VAR_30->DARQ, VAR_4, VAR_3);


 VAR_30->MODQ = VAR_30->mappedbase + VAR_18;
 FUNC_3(VAR_30->MODQ, VAR_17, VAR_16);


 VAR_30->MIDQ = VAR_30->mappedbase + VAR_15;
 FUNC_3(VAR_30->MIDQ, VAR_14, VAR_13);


 VAR_30->DSPQ = VAR_30->mappedbase + VAR_8;
 FUNC_3(VAR_30->DSPQ, VAR_7, VAR_6);



 FUNC_7(1, VAR_30->SMA + VAR_27);
 FUNC_7(VAR_30->play_sample_size, VAR_30->SMA + VAR_29);
 FUNC_7(VAR_30->play_channels, VAR_30->SMA + VAR_26);
 FUNC_7(VAR_30->play_sample_rate, VAR_30->SMA + VAR_28);

 FUNC_7(VAR_30->play_sample_rate, VAR_30->SMA + VAR_22);
 FUNC_7(VAR_32, VAR_30->SMA + VAR_24);
 FUNC_7(VAR_33, VAR_30->SMA + VAR_25);

 FUNC_6(0x00010000, VAR_30->SMA + VAR_20);
 FUNC_6(0x00000001, VAR_30->SMA + VAR_21);

 FUNC_7(0x303, VAR_30->SMA + VAR_23);

 VAR_31 = 1;

 return 0;
}
