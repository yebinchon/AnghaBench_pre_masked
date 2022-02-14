
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rl6231_pll_code {int m_bp; int m_code; int n_code; int k_code; } ;
struct TYPE_3__ {unsigned int const pll_in; unsigned int const pll_out; int k; int m; int n; int m_bp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int const) ;
 unsigned int FUNC_2 (unsigned int const,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int const,unsigned int const) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (char*) ;

int FUNC_5(const unsigned int VAR_7,
 const unsigned int VAR_8, struct rl6231_pll_code *VAR_9)
{
 int VAR_10 = VAR_5, VAR_11 = VAR_4;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27 = FUNC_1(VAR_8 - VAR_7);
 unsigned int VAR_28, VAR_29, VAR_30;
 bool VAR_31 = 0;

 if (VAR_1 < VAR_7 || VAR_2 > VAR_7)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++) {
  if (VAR_7 == VAR_6[VAR_12].pll_in &&
   VAR_8 == VAR_6[VAR_12].pll_out) {
   VAR_13 = VAR_6[VAR_12].k;
   VAR_19 = VAR_6[VAR_12].m;
   VAR_18 = VAR_6[VAR_12].n;
   VAR_31 = VAR_6[VAR_12].m_bp;
   FUNC_4("Use preset PLL parameter table\n");
   goto code_find;
  }
 }

 VAR_16 = 80000000 / VAR_8 - 2;
 VAR_17 = 150000000 / VAR_8 - 2;
 if (VAR_17 > VAR_3)
  VAR_17 = VAR_3;
 if (VAR_16 > VAR_3)
  VAR_16 = VAR_17 = VAR_3;
 VAR_26 = FUNC_3(VAR_7, VAR_8);
 VAR_30 = 0xffffffff / VAR_5;
 VAR_25 = FUNC_2(VAR_7, VAR_30, VAR_26);
 VAR_28 = VAR_7 / VAR_25;
 VAR_29 = VAR_8 / VAR_25;
 VAR_13 = VAR_16;
 for (VAR_15 = VAR_16; VAR_15 <= VAR_17; VAR_15++) {
  for (VAR_14 = 0; VAR_14 <= VAR_10; VAR_14++) {
   VAR_23 = VAR_28 * (VAR_14 + 2);
   VAR_22 = VAR_29 * (VAR_15 + 2);
   if (VAR_23 == VAR_22) {
    VAR_31 = 1;
    VAR_18 = VAR_14;
    VAR_13 = VAR_15;
    goto code_find;
   }
   VAR_24 = VAR_23 / (VAR_15 + 2);
   VAR_21 = FUNC_1(VAR_29 - VAR_24);
   if (VAR_21 < VAR_27) {
    VAR_31 = 1;
    VAR_18 = VAR_14;
    VAR_19 = 0;
    VAR_13 = VAR_15;
    if (VAR_21 == 0)
     goto code_find;
    VAR_27 = VAR_21;
   }
   for (VAR_20 = 0; VAR_20 <= VAR_11; VAR_20++) {
    VAR_24 = VAR_23 / ((VAR_20 + 2) * (VAR_15 + 2));
    VAR_21 = FUNC_1(VAR_29 - VAR_24);
    if (VAR_21 < VAR_27) {
     VAR_31 = 0;
     VAR_18 = VAR_14;
     VAR_19 = VAR_20;
     VAR_13 = VAR_15;
     if (VAR_21 == 0)
      goto code_find;
     VAR_27 = VAR_21;
    }
   }
  }
 }
 FUNC_4("Only get approximation about PLL\n");

code_find:

 VAR_9->m_bp = VAR_31;
 VAR_9->m_code = VAR_19;
 VAR_9->n_code = VAR_18;
 VAR_9->k_code = VAR_13;
 return 0;
}
