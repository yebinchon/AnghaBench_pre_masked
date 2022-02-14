
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_6__ {int keysize; int entrysize; } ;
struct TYPE_5__ {int opr_oid; } ;
typedef int OprCacheKey ;
typedef TYPE_1__ OprCacheEntry ;
typedef int Oid ;
typedef TYPE_2__ HASHCTL ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * FUNC_2 (char*,int,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int *,void*,int ,int *) ;

__attribute__((used)) static Oid
FUNC_4(OprCacheKey *VAR_8)
{
 OprCacheEntry *VAR_9;

 if (VAR_7 == ((void*)0))
 {

  HASHCTL VAR_10;

  FUNC_1(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.keysize = sizeof(OprCacheKey);
  VAR_10.entrysize = sizeof(OprCacheEntry);
  VAR_7 = FUNC_2("Operator lookup cache", 256,
           &VAR_10, VAR_2 | VAR_1);


  FUNC_0(VAR_6,
           VAR_5,
           (Datum) 0);
  FUNC_0(VAR_0,
           VAR_5,
           (Datum) 0);
 }


 VAR_9 = (OprCacheEntry *) FUNC_3(VAR_7,
            (void *) VAR_8,
            VAR_3, ((void*)0));
 if (VAR_9 == ((void*)0))
  return VAR_4;

 return VAR_9->opr_oid;
}
