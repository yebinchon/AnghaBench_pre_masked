
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline zend_ulong FUNC_1(const char *VAR_0, size_t VAR_1)
{
 register zend_ulong VAR_2;
 const char *VAR_3 = VAR_0 + VAR_1;

 for (VAR_2 = FUNC_0(2166136261); VAR_0 < VAR_3;) {
  VAR_2 *= FUNC_0(16777619);
  VAR_2 ^= *VAR_0++;
 }

 return VAR_2;
}
