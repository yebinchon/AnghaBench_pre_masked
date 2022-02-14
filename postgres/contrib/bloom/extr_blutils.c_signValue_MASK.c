
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int* bitSize; int bloomLength; } ;
struct TYPE_5__ {TYPE_1__ opts; int * collations; int * hashFn; } ;
typedef int Datum ;
typedef TYPE_2__ BloomState ;
typedef int BloomSignatureWord ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void
FUNC_5(BloomState *VAR_1, BloomSignatureWord *VAR_2, Datum VAR_3, int VAR_4)
{
 uint32 VAR_5;
 int VAR_6,
    VAR_7;






 FUNC_4(VAR_4);






 VAR_5 = FUNC_0(FUNC_1(&VAR_1->hashFn[VAR_4], VAR_1->collations[VAR_4], VAR_3));
 FUNC_4(VAR_5 ^ FUNC_3());

 for (VAR_7 = 0; VAR_7 < VAR_1->opts.bitSize[VAR_4]; VAR_7++)
 {

  VAR_6 = FUNC_3() % (VAR_1->opts.bloomLength * VAR_0);
  FUNC_2(VAR_2, VAR_6);
 }
}
