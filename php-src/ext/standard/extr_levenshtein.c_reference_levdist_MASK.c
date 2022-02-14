
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t zend_long ;


 size_t VAR_0 ;
 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (size_t,int,int ) ;

__attribute__((used)) static zend_long FUNC_2(const char *VAR_1, size_t VAR_2, const char *VAR_3, size_t VAR_4, zend_long VAR_5, zend_long VAR_6, zend_long VAR_7 )
{
 zend_long *VAR_8, *VAR_9, *VAR_10;
 zend_long VAR_11, VAR_12, VAR_13;
 size_t VAR_14, VAR_15;

 if (VAR_2 == 0) {
  return VAR_4 * VAR_5;
 }
 if (VAR_4 == 0) {
  return VAR_2 * VAR_7;
 }

 if ((VAR_2 > VAR_0) || (VAR_4 > VAR_0)) {
  return -1;
 }
 VAR_8 = FUNC_1((VAR_4 + 1), sizeof(zend_long), 0);
 VAR_9 = FUNC_1((VAR_4 + 1), sizeof(zend_long), 0);

 for (VAR_15 = 0; VAR_15 <= VAR_4; VAR_15++) {
  VAR_8[VAR_15] = VAR_15 * VAR_5;
 }
 for (VAR_14 = 0; VAR_14 < VAR_2 ; VAR_14++) {
  VAR_9[0] = VAR_8[0] + VAR_7;

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   VAR_11 = VAR_8[VAR_15] + ((VAR_1[VAR_14] == VAR_3[VAR_15]) ? 0 : VAR_6);
   VAR_12 = VAR_8[VAR_15 + 1] + VAR_7;
   if (VAR_12 < VAR_11) {
    VAR_11 = VAR_12;
   }
   VAR_13 = VAR_9[VAR_15] + VAR_5;
   if (VAR_13 < VAR_11) {
    VAR_11 = VAR_13;
   }
   VAR_9[VAR_15 + 1] = VAR_11;
  }
  VAR_10 = VAR_8;
  VAR_8 = VAR_9;
  VAR_9 = VAR_10;
 }
 VAR_11 = VAR_8[VAR_4];

 FUNC_0(VAR_8);
 FUNC_0(VAR_9);

 return VAR_11;
}
