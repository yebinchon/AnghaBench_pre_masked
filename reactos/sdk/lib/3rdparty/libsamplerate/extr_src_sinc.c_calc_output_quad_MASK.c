
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int increment_t ;
struct TYPE_3__ {int b_current; int channels; double* coeffs; double* buffer; int coeff_half_len; } ;
typedef TYPE_1__ SINC_FILTER ;


 int FUNC_0 (int ) ;
 double FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4 (SINC_FILTER *VAR_0, increment_t VAR_1, increment_t VAR_2, double VAR_3, float * VAR_4)
{ double VAR_5, VAR_6 [4], VAR_7 [4], VAR_8 ;
 increment_t VAR_9, VAR_10 ;
 int VAR_11, VAR_12, VAR_13 ;


 VAR_10 = FUNC_3 (VAR_0->coeff_half_len) ;


 VAR_9 = VAR_2 ;
 VAR_12 = (VAR_10 - VAR_9) / VAR_1 ;
 VAR_9 = VAR_9 + VAR_12 * VAR_1 ;
 VAR_11 = VAR_0->b_current - VAR_0->channels * VAR_12 ;

 VAR_6 [0] = VAR_6 [1] = VAR_6 [2] = VAR_6 [3] = 0.0 ;
 do
 { VAR_5 = FUNC_1 (VAR_9) ;
  VAR_13 = FUNC_2 (VAR_9) ;

  VAR_8 = VAR_0->coeffs [VAR_13] + VAR_5 * (VAR_0->coeffs [VAR_13 + 1] - VAR_0->coeffs [VAR_13]) ;

  VAR_6 [0] += VAR_8 * VAR_0->buffer [VAR_11] ;
  VAR_6 [1] += VAR_8 * VAR_0->buffer [VAR_11 + 1] ;
  VAR_6 [2] += VAR_8 * VAR_0->buffer [VAR_11 + 2] ;
  VAR_6 [3] += VAR_8 * VAR_0->buffer [VAR_11 + 3] ;

  VAR_9 -= VAR_1 ;
  VAR_11 = VAR_11 + 4 ;
  }
 while (VAR_9 >= FUNC_0 (0)) ;


 VAR_9 = VAR_1 - VAR_2 ;
 VAR_12 = (VAR_10 - VAR_9) / VAR_1 ;
 VAR_9 = VAR_9 + VAR_12 * VAR_1 ;
 VAR_11 = VAR_0->b_current + VAR_0->channels * (1 + VAR_12) ;

 VAR_7 [0] = VAR_7 [1] = VAR_7 [2] = VAR_7 [3] = 0.0 ;
 do
 { VAR_5 = FUNC_1 (VAR_9) ;
  VAR_13 = FUNC_2 (VAR_9) ;

  VAR_8 = VAR_0->coeffs [VAR_13] + VAR_5 * (VAR_0->coeffs [VAR_13 + 1] - VAR_0->coeffs [VAR_13]) ;

  VAR_7 [0] += VAR_8 * VAR_0->buffer [VAR_11] ;
  VAR_7 [1] += VAR_8 * VAR_0->buffer [VAR_11 + 1] ;
  VAR_7 [2] += VAR_8 * VAR_0->buffer [VAR_11 + 2] ;
  VAR_7 [3] += VAR_8 * VAR_0->buffer [VAR_11 + 3] ;

  VAR_9 -= VAR_1 ;
  VAR_11 = VAR_11 - 4 ;
  }
 while (VAR_9 > FUNC_0 (0)) ;

 VAR_4 [0] = VAR_3 * (VAR_6 [0] + VAR_7 [0]) ;
 VAR_4 [1] = VAR_3 * (VAR_6 [1] + VAR_7 [1]) ;
 VAR_4 [2] = VAR_3 * (VAR_6 [2] + VAR_7 [2]) ;
 VAR_4 [3] = VAR_3 * (VAR_6 [3] + VAR_7 [3]) ;
}
