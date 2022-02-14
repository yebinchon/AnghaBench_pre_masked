
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cs_md5_ctx ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t const) ;

void FUNC_3(size_t VAR_0, const uint8_t *VAR_1[],
                   const size_t *VAR_2, uint8_t *VAR_3) {
  size_t VAR_4;
  cs_md5_ctx VAR_5;
  FUNC_1(&VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    FUNC_2(&VAR_5, VAR_1[VAR_4], VAR_2[VAR_4]);
  }
  FUNC_0(VAR_3, &VAR_5);
}
