
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dlist_head ;
typedef scalar_t__ TupleDesc ;
struct TYPE_6__ {int id; char* cc_relname; int cc_relisshared; int cc_nbuckets; int cc_nkeys; int* cc_keyno; int cc_next; scalar_t__ cc_ntup; scalar_t__ cc_tupdesc; void* cc_indexoid; void* cc_reloid; int cc_bucket; } ;
struct TYPE_5__ {int ch_caches; scalar_t__ ch_ntup; } ;
typedef void* Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ CatCacheHeader ;
typedef TYPE_2__ CatCache ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;

CatCache *
FUNC_9(int VAR_5,
    Oid VAR_6,
    Oid VAR_7,
    int VAR_8,
    const int *VAR_9,
    int VAR_10)
{
 CatCache *VAR_11;
 MemoryContext VAR_12;
 size_t VAR_13;
 int VAR_14;
 FUNC_0(VAR_10 > 0 && (VAR_10 & -VAR_10) == VAR_10);





 if (!VAR_1)
  FUNC_2();

 VAR_12 = FUNC_3(VAR_1);




 if (VAR_0 == ((void*)0))
 {
  VAR_0 = (CatCacheHeader *) FUNC_5(sizeof(CatCacheHeader));
  FUNC_7(&VAR_0->ch_caches);
  VAR_0->ch_ntup = 0;




 }






 VAR_13 = sizeof(CatCache) + VAR_4;
 VAR_11 = (CatCache *) FUNC_1(FUNC_6(VAR_13));
 VAR_11->cc_bucket = FUNC_6(VAR_10 * sizeof(dlist_head));






 VAR_11->id = VAR_5;
 VAR_11->cc_relname = "(not known yet)";
 VAR_11->cc_reloid = VAR_6;
 VAR_11->cc_indexoid = VAR_7;
 VAR_11->cc_relisshared = 0;
 VAR_11->cc_tupdesc = (TupleDesc) ((void*)0);
 VAR_11->cc_ntup = 0;
 VAR_11->cc_nbuckets = VAR_10;
 VAR_11->cc_nkeys = VAR_8;
 for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14)
  VAR_11->cc_keyno[VAR_14] = VAR_9[VAR_14];





 VAR_3;




 FUNC_8(&VAR_0->ch_caches, &VAR_11->cc_next);




 FUNC_3(VAR_12);

 return VAR_11;
}
