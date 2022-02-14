
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int right ;
typedef int left ;
typedef int increment_t ;
struct TYPE_3__ {double* left_calc; double* right_calc; int b_current; double* coeffs; double* buffer; int coeff_half_len; } ;
typedef TYPE_1__ SINC_FILTER ;


 int FUNC_0 (int ) ;
 double FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (double*,int ,int) ;

__attribute__((used)) static inline void
FUNC_5 (SINC_FILTER *VAR_0, increment_t VAR_1, increment_t VAR_2, int VAR_3, double VAR_4, float * VAR_5)
{ double VAR_6, VAR_7 ;

 double *VAR_8, *VAR_9 ;
 increment_t VAR_10, VAR_11 ;
 int VAR_12, VAR_13, VAR_14, VAR_15 ;

 VAR_8 = VAR_0->left_calc ;
 VAR_9 = VAR_0->right_calc ;


 VAR_11 = FUNC_3 (VAR_0->coeff_half_len) ;


 VAR_10 = VAR_2 ;
 VAR_13 = (VAR_11 - VAR_10) / VAR_1 ;
 VAR_10 = VAR_10 + VAR_13 * VAR_1 ;
 VAR_12 = VAR_0->b_current - VAR_3 * VAR_13 ;

 FUNC_4 (VAR_8, 0, sizeof (VAR_8 [0]) * VAR_3) ;

 do
 { VAR_6 = FUNC_1 (VAR_10) ;
  VAR_14 = FUNC_2 (VAR_10) ;

  VAR_7 = VAR_0->coeffs [VAR_14] + VAR_6 * (VAR_0->coeffs [VAR_14 + 1] - VAR_0->coeffs [VAR_14]) ;





  VAR_15 = VAR_3 ;
  do
  {
   switch (VAR_15 % 8)
   { default :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 7 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 6 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 5 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 4 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 3 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 2 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 1 :
     VAR_15 -- ;
     VAR_8 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    } ;
   }
  while (VAR_15 > 0) ;

  VAR_10 -= VAR_1 ;
  VAR_12 = VAR_12 + VAR_3 ;
  }
 while (VAR_10 >= FUNC_0 (0)) ;


 VAR_10 = VAR_1 - VAR_2 ;
 VAR_13 = (VAR_11 - VAR_10) / VAR_1 ;
 VAR_10 = VAR_10 + VAR_13 * VAR_1 ;
 VAR_12 = VAR_0->b_current + VAR_3 * (1 + VAR_13) ;

 FUNC_4 (VAR_9, 0, sizeof (VAR_9 [0]) * VAR_3) ;
 do
 { VAR_6 = FUNC_1 (VAR_10) ;
  VAR_14 = FUNC_2 (VAR_10) ;

  VAR_7 = VAR_0->coeffs [VAR_14] + VAR_6 * (VAR_0->coeffs [VAR_14 + 1] - VAR_0->coeffs [VAR_14]) ;

  VAR_15 = VAR_3 ;
  do
  {
   switch (VAR_15 % 8)
   { default :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 7 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 6 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 5 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 4 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 3 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 2 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    case 1 :
     VAR_15 -- ;
     VAR_9 [VAR_15] += VAR_7 * VAR_0->buffer [VAR_12 + VAR_15] ;
    } ;
   }
  while (VAR_15 > 0) ;

  VAR_10 -= VAR_1 ;
  VAR_12 = VAR_12 - VAR_3 ;
  }
 while (VAR_10 > FUNC_0 (0)) ;

 VAR_15 = VAR_3 ;
 do
 {
  switch (VAR_15 % 8)
  { default :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 7 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 6 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 5 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 4 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 3 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 2 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   case 1 :
    VAR_15 -- ;
    VAR_5 [VAR_15] = VAR_4 * (VAR_8 [VAR_15] + VAR_9 [VAR_15]) ;
   } ;
  }
 while (VAR_15 > 0) ;

 return ;
}
