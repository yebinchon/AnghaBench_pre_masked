
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef scalar_t__ zend_uchar ;
typedef scalar_t__ const uint64_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,unsigned int) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const) ;

zend_uchar *
FUNC_4(zend_uchar *VAR_0, const uint64_t VAR_1)
{
 if (VAR_1 < (uint64_t) FUNC_0(251)) {
  *VAR_0 = (zend_uchar) VAR_1;
  return VAR_0 + 1;
 }

 if (VAR_1 < (uint64_t) FUNC_0(65536)) {
  *VAR_0++ = 252;
  FUNC_1(VAR_0,(unsigned int) VAR_1);
  return VAR_0 + 2;
 }

 if (VAR_1 < (uint64_t) FUNC_0(16777216)) {
  *VAR_0++ = 253;
  FUNC_2(VAR_0,(zend_ulong) VAR_1);
  return VAR_0 + 3;
 }
 *VAR_0++ = 254;
 FUNC_3(VAR_0, VAR_1);
 return VAR_0 + 8;
}
