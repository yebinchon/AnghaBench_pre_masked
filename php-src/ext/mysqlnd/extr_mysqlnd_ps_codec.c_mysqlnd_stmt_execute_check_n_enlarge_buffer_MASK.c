
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;
typedef int enum_func_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,size_t const) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;

__attribute__((used)) static enum_func_status
FUNC_3(zend_uchar **VAR_2, zend_uchar **VAR_3, size_t * VAR_4, zend_uchar * const VAR_5, size_t VAR_6)
{
 const size_t VAR_7 = 5;
 size_t VAR_8 = (*VAR_4 - (*VAR_3 - *VAR_2));

 if (VAR_8 < (VAR_6 + VAR_7)) {
  const size_t VAR_9 = *VAR_3 - *VAR_2;
  zend_uchar *VAR_10;
  *VAR_4 = VAR_9 + VAR_6 + VAR_7;
  VAR_10 = FUNC_2(*VAR_4);
  if (!VAR_10) {
   return VAR_0;
  }
  FUNC_0(VAR_10, *VAR_2, VAR_9);
  if (*VAR_2 != VAR_5) {
   FUNC_1(*VAR_2);
  }
  *VAR_2 = VAR_10;

  *VAR_3 = *VAR_2 + VAR_9;
 }
 return VAR_1;
}
