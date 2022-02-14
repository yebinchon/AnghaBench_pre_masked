
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (void*,int *,size_t) ;

__attribute__((used)) static inline int FUNC_3(int VAR_10, void *VAR_11, size_t VAR_12) {
 int VAR_13;

 if (VAR_10 < 0) {
  VAR_9 = VAR_0;
  return -1;
 }
 if (VAR_11 == ((void*)0)) {
  VAR_9 = VAR_1;
  return -1;
 }
 if ((VAR_8 != ((void*)0)) && (*VAR_8 != 0)) {
  VAR_9 = VAR_2;
  return -1;
 }

 if (VAR_10 == VAR_5) {
  if (VAR_7 + VAR_12 > VAR_6)
   VAR_12 = VAR_6 - VAR_7;
  FUNC_2(VAR_11, &VAR_4[VAR_7], VAR_12);
  VAR_7 += VAR_12;
  VAR_13 = (int)VAR_12;
 } else {
  VAR_13 = FUNC_0(VAR_10, VAR_11, (int)VAR_12);
 }
 if (VAR_13 > 0) {
  VAR_3 += VAR_13;
  if (&FUNC_1 != ((void*)0))
   FUNC_1(VAR_3);
 }
 return VAR_13;
}
