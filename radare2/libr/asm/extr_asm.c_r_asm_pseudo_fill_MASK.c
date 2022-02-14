
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int ut8 ;
typedef int RAsmOp ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*,char*,int*,int*,int*) ;

__attribute__((used)) static inline int FUNC_5(RAsmOp *VAR_0, char *VAR_1) {
 int VAR_2, VAR_3 = 0, VAR_4=0, VAR_5=0;
 FUNC_4 (VAR_1, "%d,%d,%d", &VAR_3, &VAR_4, &VAR_5);
 VAR_4 *= (sizeof (VAR_5) * VAR_3);
 if (VAR_4 > 0) {
  ut8 *VAR_6 = FUNC_1 (VAR_4);
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2+= sizeof(VAR_5)) {
   FUNC_2 (&VAR_6[VAR_2], &VAR_5, sizeof(VAR_5));
  }
  FUNC_3 (VAR_0, VAR_6, VAR_4);
  FUNC_0 (VAR_6);
 } else {
  VAR_4 = 0;
 }
 return VAR_4;
}
