
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void byte ;


 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;

void FUNC_2(void *VAR_0, int VAR_1, int VAR_2, void *VAR_3,
   int (*VAR_4)(void *VAR_5, const void *VAR_6, const void *VAR_7),
   void *VAR_8) {
  byte *VAR_9= VAR_0;
  int VAR_10, VAR_11;

  for (VAR_10=0; VAR_10<VAR_1; VAR_10++) {
    for (VAR_11= VAR_10;
  VAR_11>0 && VAR_4(VAR_8, VAR_9 + (VAR_11-1)*VAR_2, VAR_9 + VAR_10*VAR_2);
  VAR_11--);
    if (VAR_11 != VAR_10) {
      FUNC_0(VAR_3, VAR_9 + VAR_10*VAR_2, (size_t) VAR_2);
      FUNC_1(VAR_9 + (VAR_11+1)*VAR_2, VAR_9 + VAR_11*VAR_2, (size_t) (VAR_10-VAR_11)*VAR_2);
      FUNC_0(VAR_9 + VAR_11*VAR_2, VAR_3, (size_t) VAR_2);
    }
  }
}
