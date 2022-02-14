
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {scalar_t__ device_type; unsigned int codec_isr_bits; int ncodecs; unsigned int* codec_bit; size_t* ac97_sdin; int pci; scalar_t__* ac97; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (struct intel8x0*,int ) ;
 int FUNC_3 (struct intel8x0*,int) ;
 int FUNC_4 (struct intel8x0*,int ,unsigned int) ;
 int FUNC_5 (struct intel8x0*,int,int) ;
 int VAR_10 ;
 int FUNC_6 (int ,int,unsigned int*) ;
 int FUNC_7 (int ,int,unsigned int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct intel8x0*) ;
 int FUNC_10 (struct intel8x0*) ;
 int FUNC_11 (struct intel8x0*) ;
 int VAR_11 ;
 scalar_t__ FUNC_12 (unsigned long,int) ;

__attribute__((used)) static int FUNC_13(struct intel8x0 *VAR_12, int VAR_13)
{
 unsigned long VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17;
 int VAR_18;



 VAR_15 = VAR_9 | VAR_5 | VAR_8 | VAR_7;
 if (VAR_12->device_type == VAR_0)
  VAR_15 |= VAR_6;
 VAR_17 = FUNC_2(VAR_12, FUNC_0(VAR_3));
 FUNC_4(VAR_12, FUNC_0(VAR_3), VAR_17 & VAR_15);

 if (FUNC_9(VAR_12))
  VAR_18 = FUNC_10(VAR_12);
 else
  VAR_18 = FUNC_11(VAR_12);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_13) {




  VAR_14 = VAR_10 + VAR_4;
  do {
   VAR_15 = FUNC_2(VAR_12, FUNC_0(VAR_3)) &
    VAR_12->codec_isr_bits;
   if (VAR_15)
    break;
   FUNC_8(1);
  } while (FUNC_12(VAR_14, VAR_10));
  if (! VAR_15) {

   FUNC_1(VAR_12->card->dev,
    "codec_ready: codec is not ready [0x%x]\n",
       FUNC_2(VAR_12, FUNC_0(VAR_3)));
   return -VAR_2;
  }


  VAR_14 = VAR_10 + VAR_4 / 4;
  while (VAR_15 != VAR_12->codec_isr_bits &&
         FUNC_12(VAR_14, VAR_10)) {
   FUNC_8(1);
   VAR_15 |= FUNC_2(VAR_12, FUNC_0(VAR_3)) &
    VAR_12->codec_isr_bits;
  }

 } else {

  int VAR_19;
  VAR_15 = 0;
  for (VAR_19 = 0; VAR_19 < VAR_12->ncodecs; VAR_19++)
   if (VAR_12->ac97[VAR_19])
    VAR_15 |= VAR_12->codec_bit[VAR_12->ac97_sdin[VAR_19]];

  VAR_14 = VAR_10 + VAR_4;
  do {
   VAR_16 = FUNC_2(VAR_12, FUNC_0(VAR_3)) &
    VAR_12->codec_isr_bits;
   if (VAR_15 == VAR_16)
    break;
   FUNC_8(1);
  } while (FUNC_12(VAR_14, VAR_10));
 }

 if (VAR_12->device_type == VAR_1) {

  FUNC_5(VAR_12, 0x4c, FUNC_3(VAR_12, 0x4c) | 1);
 }
 if (VAR_12->device_type == VAR_0 && !VAR_11) {

  unsigned int VAR_20;
  FUNC_6(VAR_12->pci, 0x4c, &VAR_20);
  VAR_20 |= 0x1000000;
  FUNC_7(VAR_12->pci, 0x4c, VAR_20);
 }
       return 0;
}
