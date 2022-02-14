
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_8__ {int flags_valid; int collate_is_c; int ctype_is_c; scalar_t__ locale; } ;
typedef TYPE_1__ collation_cache_entry ;
struct TYPE_10__ {int collctype; int collcollate; } ;
struct TYPE_9__ {int keysize; int entrysize; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__ HASHCTL ;
typedef TYPE_3__* Form_pg_collation ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_6 ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int * FUNC_9 (char*,int,TYPE_2__*,int) ;
 TYPE_1__* FUNC_10 (int *,scalar_t__*,int ,int*) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static collation_cache_entry *
FUNC_13(Oid VAR_7, bool VAR_8)
{
 collation_cache_entry *VAR_9;
 bool VAR_10;

 FUNC_0(FUNC_5(VAR_7));
 FUNC_0(VAR_7 != VAR_1);

 if (VAR_6 == ((void*)0))
 {

  HASHCTL VAR_11;

  FUNC_11(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.keysize = sizeof(Oid);
  VAR_11.entrysize = sizeof(collation_cache_entry);
  VAR_6 = FUNC_9("Collation cache", 100, &VAR_11,
           VAR_4 | VAR_3);
 }

 VAR_9 = FUNC_10(VAR_6, &VAR_7, VAR_5, &VAR_10);
 if (!VAR_10)
 {




  VAR_9->flags_valid = 0;
  VAR_9->locale = 0;
 }

 if (VAR_8 && !VAR_9->flags_valid)
 {

  HeapTuple VAR_12;
  Form_pg_collation VAR_13;
  const char *VAR_14;
  const char *VAR_15;

  VAR_12 = FUNC_7(VAR_0, FUNC_4(VAR_7));
  if (!FUNC_2(VAR_12))
   FUNC_8(VAR_2, "cache lookup failed for collation %u", VAR_7);
  VAR_13 = (Form_pg_collation) FUNC_1(VAR_12);

  VAR_14 = FUNC_3(VAR_13->collcollate);
  VAR_15 = FUNC_3(VAR_13->collctype);

  VAR_9->collate_is_c = ((FUNC_12(VAR_14, "C") == 0) ||
          (FUNC_12(VAR_14, "POSIX") == 0));
  VAR_9->ctype_is_c = ((FUNC_12(VAR_15, "C") == 0) ||
           (FUNC_12(VAR_15, "POSIX") == 0));

  VAR_9->flags_valid = 1;

  FUNC_6(VAR_12);
 }

 return VAR_9;
}
