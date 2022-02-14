
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int RelIdCacheEnt ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,TYPE_1__*,int) ;

void
FUNC_4(void)
{
 HASHCTL VAR_5;




 if (!VAR_0)
  FUNC_0();




 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.keysize = sizeof(Oid);
 VAR_5.entrysize = sizeof(RelIdCacheEnt);
 VAR_4 = FUNC_3("Relcache by OID", VAR_3,
          &VAR_5, VAR_2 | VAR_1);




 FUNC_2();
}
