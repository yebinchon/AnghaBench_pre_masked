
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int TSConfigCacheEntry ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 HASHCTL VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.keysize = sizeof(Oid);
 VAR_7.entrysize = sizeof(TSConfigCacheEntry);
 VAR_6 = FUNC_4("Tsearch configuration cache", 16,
         &VAR_7, VAR_2 | VAR_1);

 FUNC_0(VAR_5, VAR_3,
          FUNC_3(VAR_6));
 FUNC_0(VAR_4, VAR_3,
          FUNC_3(VAR_6));


 if (!VAR_0)
  FUNC_1();
}
