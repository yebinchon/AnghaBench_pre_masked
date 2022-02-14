
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_long ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ UChar32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,size_t,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static inline int FUNC_8(UChar32* VAR_7, zval *VAR_8) {
 zend_long VAR_9 = -1;

 if (FUNC_5(VAR_8) == VAR_1) {
  VAR_9 = FUNC_2(VAR_8);
 } else if (FUNC_5(VAR_8) == VAR_2) {
  int32_t VAR_10 = 0;
  size_t VAR_11 = FUNC_3(VAR_8);

  if (FUNC_1(VAR_11)) {
   FUNC_6(((void*)0), VAR_6);
   FUNC_7(((void*)0), "Input string is too long.", 0);
   return VAR_0;
  }

  FUNC_0(FUNC_4(VAR_8), VAR_10, VAR_11, VAR_9);
  if ((size_t)VAR_10 != VAR_11) {
   FUNC_6(((void*)0), VAR_6);
   FUNC_7(((void*)0), "Passing a UTF-8 character for codepoint requires a string which is exactly one UTF-8 codepoint long.", 0);
   return VAR_0;
  }
 } else {
  FUNC_6(((void*)0), VAR_6);
  FUNC_7(((void*)0), "Invalid parameter for unicode point.  Must be either integer or UTF-8 sequence.", 0);
  return VAR_0;
 }
 if ((VAR_9 < VAR_5) || (VAR_9 > VAR_4)) {
  FUNC_6(((void*)0), VAR_6);
  FUNC_7(((void*)0), "Codepoint out of range", 0);
  return VAR_0;
 }
 *VAR_7 = (UChar32)VAR_9;
 return VAR_3;
}
