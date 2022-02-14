
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int have_implic; int have_refute; } ;
typedef TYPE_1__ OprProofCacheEntry ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Datum VAR_1, int VAR_2, uint32 VAR_3)
{
 HASH_SEQ_STATUS VAR_4;
 OprProofCacheEntry *VAR_5;

 FUNC_0(VAR_0 != ((void*)0));


 FUNC_1(&VAR_4, VAR_0);

 while ((VAR_5 = (OprProofCacheEntry *) FUNC_2(&VAR_4)) != ((void*)0))
 {
  VAR_5->have_implic = 0;
  VAR_5->have_refute = 0;
 }
}
