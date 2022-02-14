
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_parameters ;
struct TYPE_5__ {int const* cdict; } ;
typedef TYPE_1__ ZSTD_CStream ;
typedef int ZSTD_CDict ;


 int FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int const,unsigned long long,void*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,unsigned long long) ;

ZSTD_CStream *FUNC_4(const ZSTD_CDict *VAR_0, unsigned long long VAR_1, void *VAR_2, size_t VAR_3)
{
 ZSTD_parameters const VAR_4 = FUNC_0(VAR_0);
 ZSTD_CStream *const VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  VAR_5->cdict = VAR_0;
  if (FUNC_2(FUNC_3(VAR_5, VAR_1))) {
   return ((void*)0);
  }
 }
 return VAR_5;
}
