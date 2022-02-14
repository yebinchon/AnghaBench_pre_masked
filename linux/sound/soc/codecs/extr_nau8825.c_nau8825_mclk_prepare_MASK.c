
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {unsigned int mclk_freq; int dev; int mclk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct nau8825 *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = 0;

 VAR_0->mclk = FUNC_6(VAR_0->dev, "mclk");
 if (FUNC_0(VAR_0->mclk)) {
  FUNC_5(VAR_0->dev, "No 'mclk' clock found, assume MCLK is managed externally");
  return 0;
 }

 if (!VAR_0->mclk_freq) {
  VAR_2 = FUNC_1(VAR_0->mclk);
  if (VAR_2) {
   FUNC_4(VAR_0->dev, "Unable to prepare codec mclk\n");
   return VAR_2;
  }
 }

 if (VAR_0->mclk_freq != VAR_1) {
  VAR_1 = FUNC_2(VAR_0->mclk, VAR_1);
  VAR_2 = FUNC_3(VAR_0->mclk, VAR_1);
  if (VAR_2) {
   FUNC_4(VAR_0->dev, "Unable to set mclk rate\n");
   return VAR_2;
  }
  VAR_0->mclk_freq = VAR_1;
 }

 return 0;
}
