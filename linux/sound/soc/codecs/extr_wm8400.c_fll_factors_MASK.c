
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct wm8400_priv {TYPE_1__* wm8400; } ;
struct fll_factors {int outdiv; int freq_ref; int fratio; unsigned int n; unsigned int k; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct wm8400_priv *VAR_2, struct fll_factors *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 u64 VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 VAR_3->outdiv = 2;
 while (VAR_5 * VAR_3->outdiv < 90000000 ||
        VAR_5 * VAR_3->outdiv > 100000000) {
  VAR_3->outdiv *= 2;
  if (VAR_3->outdiv > 32) {
   FUNC_1(VAR_2->wm8400->dev,
    "Unsupported FLL output frequency %uHz\n",
    VAR_5);
   return -VAR_0;
  }
 }
 VAR_9 = VAR_5 * VAR_3->outdiv;
 VAR_3->outdiv = VAR_3->outdiv >> 2;

 if (VAR_4 < 48000)
  VAR_3->freq_ref = 1;
 else
  VAR_3->freq_ref = 0;

 if (VAR_4 < 1000000)
  VAR_3->fratio = 9;
 else
  VAR_3->fratio = 0;


 do {
  if (VAR_4 < 1000000)
   VAR_3->fratio--;
  else
   VAR_3->fratio++;

  if (VAR_3->fratio < 1 || VAR_3->fratio > 8) {
   FUNC_1(VAR_2->wm8400->dev,
    "Unable to calculate FRATIO\n");
   return -VAR_0;
  }

  VAR_3->n = VAR_9 / (VAR_4 * VAR_3->fratio);
  VAR_8 = VAR_9 % (VAR_4 * VAR_3->fratio);
 } while (VAR_8 == 0);


 VAR_6 = VAR_1 * (long long)VAR_8;

 FUNC_2(VAR_6, (VAR_4 * VAR_3->fratio));

 VAR_7 = VAR_6 & 0xFFFFFFFF;

 if ((VAR_7 % 10) >= 5)
  VAR_7 += 5;


 VAR_3->k = VAR_7 / 10;

 FUNC_0(VAR_2->wm8400->dev,
  "FLL: Fref=%u Fout=%u N=%x K=%x, FRATIO=%x OUTDIV=%x\n",
  VAR_4, VAR_5,
  VAR_3->n, VAR_3->k, VAR_3->fratio, VAR_3->outdiv);

 return 0;
}
