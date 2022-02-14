
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pll_factors {int outdiv; unsigned int n; unsigned int k; } ;
struct device {int dummy; } ;


 long long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,unsigned int,...) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
         int VAR_2, int VAR_3, struct pll_factors *VAR_4)
{
 u64 VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_1, "Fref=%u Fout=%u\n", VAR_2, VAR_3);





 VAR_9 = VAR_3 * 4;
 if (VAR_9 < 90000000) {
  VAR_4->outdiv = 1;
  VAR_9 *= 2;
 } else {
  VAR_4->outdiv = 0;
 }

 FUNC_0(VAR_9 < 90000000 || VAR_9 > 100000000);

 FUNC_1(VAR_1, "Fvco=%dHz\n", VAR_9);


 VAR_7 = VAR_9 / VAR_2;

 VAR_4->n = VAR_7;
 VAR_8 = VAR_9 % VAR_2;
 FUNC_1(VAR_1, "Nmod=%d\n", VAR_8);


 VAR_5 = VAR_0 * (long long)VAR_8;

 FUNC_2(VAR_5, VAR_2);

 VAR_6 = VAR_5 & 0xFFFFFFFF;

 if ((VAR_6 % 10) >= 5)
  VAR_6 += 5;


 VAR_4->k = VAR_6 / 10;

 FUNC_1(VAR_1, "N=%x K=%x OUTDIV=%x\n", VAR_4->n, VAR_4->k, VAR_4->outdiv);

 return 0;
}
