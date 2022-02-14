
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int arena_t ;


 int FUNC_0 (int *,size_t const*,size_t,void*,size_t*,void*,size_t,unsigned int*,int **) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static int
FUNC_4(tsd_t *VAR_0, const size_t *VAR_1, size_t VAR_2, void *VAR_3,
    size_t *VAR_4, void *VAR_5, size_t VAR_6) {
 int VAR_7;
 unsigned VAR_8;
 arena_t *VAR_9;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (VAR_7 != 0) {
  return VAR_7;
 }

 FUNC_3(VAR_0, VAR_8);
 FUNC_1(VAR_0, VAR_9);
 FUNC_2(VAR_0, VAR_8);

 return VAR_7;
}
