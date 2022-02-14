
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int isvalid; } ;
typedef TYPE_1__ TSAnyCacheEntry ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Datum VAR_3, int VAR_4, uint32 VAR_5)
{
 HTAB *VAR_6 = (HTAB *) FUNC_0(VAR_3);
 HASH_SEQ_STATUS VAR_7;
 TSAnyCacheEntry *VAR_8;

 FUNC_1(&VAR_7, VAR_6);
 while ((VAR_8 = (TSAnyCacheEntry *) FUNC_2(&VAR_7)) != ((void*)0))
  VAR_8->isvalid = 0;


 if (VAR_6 == VAR_1)
  VAR_2 = VAR_0;
}
