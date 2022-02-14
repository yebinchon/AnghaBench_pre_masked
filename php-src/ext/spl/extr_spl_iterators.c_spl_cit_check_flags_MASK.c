
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_0(zend_long VAR_6)
{
 zend_long VAR_7 = 0;

 VAR_7 += (VAR_6 & VAR_0) ? 1 : 0;
 VAR_7 += (VAR_6 & VAR_3) ? 1 : 0;
 VAR_7 += (VAR_6 & VAR_1) ? 1 : 0;
 VAR_7 += (VAR_6 & VAR_2) ? 1 : 0;

 return VAR_7 <= 1 ? VAR_5 : VAR_4;
}
