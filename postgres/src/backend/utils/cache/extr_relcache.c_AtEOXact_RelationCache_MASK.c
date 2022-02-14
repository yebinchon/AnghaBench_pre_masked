
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reldesc; } ;
typedef TYPE_1__ RelIdCacheEnt ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,void*,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(bool VAR_8)
{
 HASH_SEQ_STATUS VAR_9;
 RelIdCacheEnt *VAR_10;
 int VAR_11;
 if (VAR_7)
 {
  FUNC_4(&VAR_9, VAR_4);
  while ((VAR_10 = (RelIdCacheEnt *) FUNC_5(&VAR_9)) != ((void*)0))
  {
   FUNC_1(VAR_10->reldesc, VAR_8);
  }
 }
 else
 {
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  {
   VAR_10 = (RelIdCacheEnt *) FUNC_3(VAR_4,
              (void *) &VAR_5[VAR_11],
              VAR_2,
              ((void*)0));
   if (VAR_10 != ((void*)0))
    FUNC_1(VAR_10->reldesc, VAR_8);
  }
 }

 if (VAR_1 > 0)
 {
  FUNC_0(VAR_0 != ((void*)0));
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   FUNC_2(VAR_0[VAR_11]);
  FUNC_6(VAR_0);
  VAR_0 = ((void*)0);
 }


 VAR_6 = 0;
 VAR_7 = 0;
 VAR_3 = 0;
 VAR_1 = 0;
}
