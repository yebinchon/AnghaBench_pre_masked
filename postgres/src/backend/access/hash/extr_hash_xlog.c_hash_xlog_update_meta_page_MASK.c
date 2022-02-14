
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ntuples; } ;
typedef TYPE_1__ xl_hash_update_meta_page ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_10__ {int hashm_ntuples; } ;
typedef int Page ;
typedef TYPE_3__* HashMetaPage ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(XLogReaderState *VAR_1)
{
 HashMetaPage VAR_2;
 XLogRecPtr VAR_3 = VAR_1->EndRecPtr;
 xl_hash_update_meta_page *VAR_4 = (xl_hash_update_meta_page *) FUNC_7(VAR_1);
 Buffer VAR_5;
 Page VAR_6;

 if (FUNC_6(VAR_1, 0, &VAR_5) == VAR_0)
 {
  VAR_6 = FUNC_0(VAR_5);
  VAR_2 = FUNC_2(VAR_6);

  VAR_2->hashm_ntuples = VAR_4->ntuples;

  FUNC_4(VAR_6, VAR_3);
  FUNC_3(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_5(VAR_5);
}
