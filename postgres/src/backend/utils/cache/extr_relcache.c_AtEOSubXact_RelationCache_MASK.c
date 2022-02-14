
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reldesc; } ;
typedef int SubTransactionId ;
typedef TYPE_1__ RelIdCacheEnt ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,void*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(bool VAR_5, SubTransactionId VAR_6,
        SubTransactionId VAR_7)
{
 HASH_SEQ_STATUS VAR_8;
 RelIdCacheEnt *VAR_9;
 int VAR_10;






 if (VAR_4)
 {
  FUNC_2(&VAR_8, VAR_1);
  while ((VAR_9 = (RelIdCacheEnt *) FUNC_3(&VAR_8)) != ((void*)0))
  {
   FUNC_0(VAR_9->reldesc, VAR_5,
        VAR_6, VAR_7);
  }
 }
 else
 {
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  {
   VAR_9 = (RelIdCacheEnt *) FUNC_1(VAR_1,
              (void *) &VAR_2[VAR_10],
              VAR_0,
              ((void*)0));
   if (VAR_9 != ((void*)0))
    FUNC_0(VAR_9->reldesc, VAR_5,
         VAR_6, VAR_7);
  }
 }


}
