
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double double_t ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

double FUNC_0(double VAR_6, double VAR_7)
{
 double_t VAR_8,VAR_9,VAR_10,VAR_11;

 VAR_9 = VAR_6*VAR_6;
 VAR_11 = VAR_9*VAR_9;
 VAR_10 = VAR_9*(VAR_0+VAR_9*(VAR_1+VAR_9*VAR_2)) + VAR_11*VAR_11*(VAR_3+VAR_9*(VAR_4+VAR_9*VAR_5));
 VAR_8 = 0.5*VAR_9;
 VAR_11 = 1.0-VAR_8;
 return VAR_11 + (((1.0-VAR_11)-VAR_8) + (VAR_9*VAR_10-VAR_6*VAR_7));
}
