
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int replicate_valid; } ;
typedef TYPE_1__ RelationSyncEntry ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(Datum VAR_1, int VAR_2, uint32 VAR_3)
{
 HASH_SEQ_STATUS VAR_4;
 RelationSyncEntry *VAR_5;






 if (VAR_0 == ((void*)0))
  return;





 FUNC_0(&VAR_4, VAR_0);
 while ((VAR_5 = (RelationSyncEntry *) FUNC_1(&VAR_4)) != ((void*)0))
  VAR_5->replicate_valid = 0;
}
