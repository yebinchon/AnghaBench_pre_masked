
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zval *VAR_0, int VAR_1,
  unsigned char *VAR_2, size_t VAR_3, int VAR_4) {
 if (VAR_1 >= 256) {
  zval VAR_5;
  FUNC_5(&VAR_5);
  FUNC_1(&VAR_5, VAR_1);
  if (VAR_3 == 1) {
   FUNC_2(&VAR_5, FUNC_0(VAR_2[0]));
  } else {
   FUNC_3(&VAR_5, (char *) VAR_2, VAR_3);
  }
  FUNC_1(&VAR_5, VAR_4);
  FUNC_4(VAR_0, &VAR_5);
 } else {
  if (VAR_3 == 1) {
   FUNC_2(VAR_0, FUNC_0(VAR_2[0]));
  } else {
   FUNC_3(VAR_0, (char *) VAR_2, VAR_3);
  }
 }
}
