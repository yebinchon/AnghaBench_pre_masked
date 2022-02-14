
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef char ut64 ;
typedef long ut32 ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 char FUNC_3 (int ) ;
 char FUNC_4 (int ) ;

__attribute__((used)) static ut64 FUNC_5(const char *VAR_4, const char *VAR_5, size_t VAR_6, ut32 VAR_7) {






 const ut8 *VAR_8 = (const ut8 *)VAR_4;
 const ut8 *VAR_9 = (const ut8 *)VAR_5;
 ut64 VAR_10;





 VAR_10 = 0;
 if (0L == VAR_7) {
  while (VAR_6-- > 0) {
   if ((VAR_10 = *VAR_9++ - *VAR_8++) != '\0') {
    break;
   }
  }
 } else {
  while (VAR_6-- > 0) {
   if ((VAR_7 & VAR_2) &&
       FUNC_0(*VAR_8)) {
    if ((VAR_10 = FUNC_3 (*VAR_9++) - *VAR_8++) != '\0') {
     break;
    }
   } else if ((VAR_7 & VAR_3) && FUNC_2(*VAR_8)) {
    if ((VAR_10 = FUNC_4 (*VAR_9++) - *VAR_8++) != '\0') {
     break;
    }
   } else if ((VAR_7 & VAR_0) && FUNC_1(*VAR_8)) {
    VAR_8++;
    if (FUNC_1(*VAR_9++)) {
     while (FUNC_1 (*VAR_9)) {
      VAR_9++;
     }
    } else {
     VAR_10 = 1;
     break;
    }
   } else if ((VAR_7 & VAR_1) && FUNC_1(*VAR_8)) {
    VAR_8++;
    while (FUNC_1 (*VAR_9)) {
     VAR_9++;
    }
   } else {
    if ((VAR_10 = *VAR_9++ - *VAR_8++) != '\0') {
     break;
    }
   }
  }
 }
 return VAR_10;
}
