
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int increment_t ;
struct TYPE_3__ {int b_current; double* coeffs; double* buffer; int coeff_half_len; } ;
typedef TYPE_1__ SINC_FILTER ;


 int FUNC_0 (int ) ;
 double FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline double
FUNC_4 (SINC_FILTER *VAR_0, increment_t VAR_1, increment_t VAR_2)
{ double VAR_3, VAR_4, VAR_5, VAR_6 ;
 increment_t VAR_7, VAR_8 ;
 int VAR_9, VAR_10, VAR_11 ;


 VAR_8 = FUNC_3 (VAR_0->coeff_half_len) ;


 VAR_7 = VAR_2 ;
 VAR_10 = (VAR_8 - VAR_7) / VAR_1 ;
 VAR_7 = VAR_7 + VAR_10 * VAR_1 ;
 VAR_9 = VAR_0->b_current - VAR_10 ;

 VAR_4 = 0.0 ;
 do
 { VAR_3 = FUNC_1 (VAR_7) ;
  VAR_11 = FUNC_2 (VAR_7) ;

  VAR_6 = VAR_0->coeffs [VAR_11] + VAR_3 * (VAR_0->coeffs [VAR_11 + 1] - VAR_0->coeffs [VAR_11]) ;

  VAR_4 += VAR_6 * VAR_0->buffer [VAR_9] ;

  VAR_7 -= VAR_1 ;
  VAR_9 = VAR_9 + 1 ;
  }
 while (VAR_7 >= FUNC_0 (0)) ;


 VAR_7 = VAR_1 - VAR_2 ;
 VAR_10 = (VAR_8 - VAR_7) / VAR_1 ;
 VAR_7 = VAR_7 + VAR_10 * VAR_1 ;
 VAR_9 = VAR_0->b_current + 1 + VAR_10 ;

 VAR_5 = 0.0 ;
 do
 { VAR_3 = FUNC_1 (VAR_7) ;
  VAR_11 = FUNC_2 (VAR_7) ;

  VAR_6 = VAR_0->coeffs [VAR_11] + VAR_3 * (VAR_0->coeffs [VAR_11 + 1] - VAR_0->coeffs [VAR_11]) ;

  VAR_5 += VAR_6 * VAR_0->buffer [VAR_9] ;

  VAR_7 -= VAR_1 ;
  VAR_9 = VAR_9 - 1 ;
  }
 while (VAR_7 > FUNC_0 (0)) ;

 return (VAR_4 + VAR_5) ;
}
