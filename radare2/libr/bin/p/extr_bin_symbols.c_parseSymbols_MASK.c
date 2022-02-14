
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int RList ;
typedef int RBuffer ;


 int * FUNC_0 (int const,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const,int const) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static RList *FUNC_7(RBuffer *VAR_1, int VAR_2, ut64 *VAR_3, int VAR_4) {

 const int VAR_5 = 24;
 if (VAR_3) {
  *VAR_3 = VAR_2 + (VAR_4 * VAR_5);
 }

 ut8 *VAR_6 = FUNC_0 (VAR_5, VAR_4);
 if (!VAR_6) {
  return ((void*)0);
 }
 RList *VAR_7 = FUNC_5 (VAR_0);
 FUNC_3 (VAR_1, VAR_2, VAR_6, VAR_4 * VAR_5);
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  int VAR_9 = (VAR_8 * VAR_5);
  const ut32 VAR_10 = FUNC_6 (VAR_6 + VAR_9);
  const ut32 VAR_11 = FUNC_6 (VAR_6 + VAR_9 + 4);






  FUNC_4 (VAR_7, FUNC_2 (((void*)0), VAR_10, VAR_11));
 }

 FUNC_1 (VAR_6);
 return VAR_7;
}
