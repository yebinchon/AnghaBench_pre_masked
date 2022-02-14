
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int worklconv ;
struct lconv {void* negative_sign; void* positive_sign; void* mon_thousands_sep; void* mon_decimal_point; void* currency_symbol; void* int_curr_symbol; void* thousands_sep; void* decimal_point; int n_sign_posn; int p_sign_posn; int n_sep_by_space; int n_cs_precedes; int p_sep_by_space; int p_cs_precedes; int frac_digits; int int_frac_digits; void* mon_grouping; void* grouping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int,void**) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct lconv*) ;
 char* VAR_8 ;
 char* VAR_9 ;
 struct lconv* FUNC_10 () ;
 int FUNC_11 (struct lconv*,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int) ;
 char* FUNC_14 (char*) ;
 char* FUNC_15 (int ,char*) ;
 void* FUNC_16 (void*) ;
 int FUNC_17 (struct lconv*) ;

struct lconv *
FUNC_18(void)
{
 static struct lconv VAR_10;
 static bool VAR_11 = 0;
 struct lconv *VAR_12;
 struct lconv VAR_13;
 char *VAR_14;
 char *VAR_15;





 if (VAR_0)
  return &VAR_10;


 if (VAR_11)
 {
  FUNC_9(&VAR_10);
  VAR_11 = 0;
 }
 FUNC_11(&VAR_13, 0, sizeof(VAR_13));


 VAR_14 = FUNC_15(VAR_5, ((void*)0));
 if (!VAR_14)
  FUNC_5(VAR_2, "setlocale(NULL) failed");
 VAR_14 = FUNC_14(VAR_14);

 VAR_15 = FUNC_15(VAR_6, ((void*)0));
 if (!VAR_15)
  FUNC_5(VAR_2, "setlocale(NULL) failed");
 VAR_15 = FUNC_14(VAR_15);
 FUNC_15(VAR_6, VAR_9);
 VAR_12 = FUNC_10();


 VAR_13.decimal_point = FUNC_16(VAR_12->decimal_point);
 VAR_13.thousands_sep = FUNC_16(VAR_12->thousands_sep);
 VAR_13.grouping = FUNC_16(VAR_12->grouping);







 FUNC_15(VAR_5, VAR_8);
 VAR_12 = FUNC_10();


 VAR_13.int_curr_symbol = FUNC_16(VAR_12->int_curr_symbol);
 VAR_13.currency_symbol = FUNC_16(VAR_12->currency_symbol);
 VAR_13.mon_decimal_point = FUNC_16(VAR_12->mon_decimal_point);
 VAR_13.mon_thousands_sep = FUNC_16(VAR_12->mon_thousands_sep);
 VAR_13.mon_grouping = FUNC_16(VAR_12->mon_grouping);
 VAR_13.positive_sign = FUNC_16(VAR_12->positive_sign);
 VAR_13.negative_sign = FUNC_16(VAR_12->negative_sign);

 VAR_13.int_frac_digits = VAR_12->int_frac_digits;
 VAR_13.frac_digits = VAR_12->frac_digits;
 VAR_13.p_cs_precedes = VAR_12->p_cs_precedes;
 VAR_13.p_sep_by_space = VAR_12->p_sep_by_space;
 VAR_13.n_cs_precedes = VAR_12->n_cs_precedes;
 VAR_13.n_sep_by_space = VAR_12->n_sep_by_space;
 VAR_13.p_sign_posn = VAR_12->p_sign_posn;
 VAR_13.n_sign_posn = VAR_12->n_sign_posn;
 if (!FUNC_15(VAR_5, VAR_14))
  FUNC_5(VAR_3, "failed to restore LC_MONETARY to \"%s\"", VAR_14);
 if (!FUNC_15(VAR_6, VAR_15))
  FUNC_5(VAR_3, "failed to restore LC_NUMERIC to \"%s\"", VAR_15);






 FUNC_3();
 {
  int VAR_16;


  FUNC_12(VAR_14);
  FUNC_12(VAR_15);





  if (!FUNC_17(&VAR_13))
   FUNC_6(VAR_2,
     (FUNC_7(VAR_1),
      FUNC_8("out of memory")));
  VAR_16 = FUNC_13(VAR_9, 1);
  if (VAR_16 < 0)
   VAR_16 = VAR_7;

  FUNC_4(VAR_16, &VAR_13.decimal_point);
  FUNC_4(VAR_16, &VAR_13.thousands_sep);


  VAR_16 = FUNC_13(VAR_8, 1);
  if (VAR_16 < 0)
   VAR_16 = VAR_7;

  FUNC_4(VAR_16, &VAR_13.int_curr_symbol);
  FUNC_4(VAR_16, &VAR_13.currency_symbol);
  FUNC_4(VAR_16, &VAR_13.mon_decimal_point);
  FUNC_4(VAR_16, &VAR_13.mon_thousands_sep);

  FUNC_4(VAR_16, &VAR_13.positive_sign);
  FUNC_4(VAR_16, &VAR_13.negative_sign);
 }
 FUNC_0();
 {
  FUNC_9(&VAR_13);
  FUNC_2();
 }
 FUNC_1();




 VAR_10 = VAR_13;
 VAR_11 = 1;
 VAR_0 = 1;
 return &VAR_10;
}
