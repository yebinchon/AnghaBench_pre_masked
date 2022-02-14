
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_parameters ;
typedef int ZSTD_customMem ;
typedef int ZSTD_CStream ;


 int * FUNC_0 (int const) ;
 size_t FUNC_1 (int * const,int *,int ,int ,unsigned long long) ;
 int FUNC_2 (void*,size_t) ;
 scalar_t__ FUNC_3 (size_t const) ;

ZSTD_CStream *FUNC_4(ZSTD_parameters VAR_0, unsigned long long VAR_1, void *VAR_2, size_t VAR_3)
{
 ZSTD_customMem const VAR_4 = FUNC_2(VAR_2, VAR_3);
 ZSTD_CStream *const VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  size_t const VAR_6 = FUNC_1(VAR_5, ((void*)0), 0, VAR_0, VAR_1);
  if (FUNC_3(VAR_6)) {
   return ((void*)0);
  }
 }
 return VAR_5;
}
