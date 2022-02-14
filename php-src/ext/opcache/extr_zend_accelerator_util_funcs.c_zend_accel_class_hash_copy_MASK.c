
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int zval ;
struct TYPE_16__ {int line_start; int filename; } ;
struct TYPE_17__ {TYPE_1__ user; } ;
struct TYPE_18__ {int ce_flags; int name; TYPE_2__ info; } ;
typedef TYPE_3__ zend_class_entry ;
struct TYPE_20__ {int val; int key; } ;
struct TYPE_19__ {int nNumUsed; scalar_t__ nInternalPointer; TYPE_5__* arData; } ;
struct TYPE_15__ {int ignore_dups; } ;
typedef TYPE_4__ HashTable ;
typedef int CG ;
typedef TYPE_5__ Bucket ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_14__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__* FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_4__*,int ,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_9 (int ,char*,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,int,int ) ;
 int * FUNC_12 (TYPE_4__*,int ,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(HashTable *VAR_4, HashTable *VAR_5)
{
 Bucket *VAR_6, *VAR_7;
 zval *VAR_8;

 FUNC_11(VAR_4, VAR_4->nNumUsed + VAR_5->nNumUsed, 0);
 VAR_6 = VAR_5->arData;
 VAR_7 = VAR_6 + VAR_5->nNumUsed;
 for (; VAR_6 != VAR_7; VAR_6++) {
  if (FUNC_1(FUNC_7(VAR_6->val) == VAR_1)) continue;
  FUNC_3(VAR_6->key);
  VAR_8 = FUNC_12(VAR_4, VAR_6->key, 1);
  if (FUNC_1(VAR_8 != ((void*)0))) {
   if (FUNC_0(FUNC_4(VAR_6->key) > 0) && FUNC_0(FUNC_5(VAR_6->key)[0] == 0)) {

    continue;
   } else if (FUNC_1(!FUNC_2(VAR_3).ignore_dups)) {
    zend_class_entry *VAR_9 = FUNC_6(VAR_6->val);
    if (!(VAR_9->ce_flags & VAR_2)) {
     CG(VAR_10) = 1;
     FUNC_13(VAR_9->info.user.filename);
     CG(VAR_11) = VAR_9->info.user.line_start;
     FUNC_9(VAR_0,
       "Cannot declare %s %s, because the name is already in use",
       FUNC_10(VAR_9), FUNC_5(VAR_9->name));
     return;
    }
    continue;
   }
  } else {
   VAR_8 = FUNC_8(VAR_4, VAR_6->key, FUNC_6(VAR_6->val));
  }
 }
 VAR_4->nInternalPointer = 0;
 return;
}
