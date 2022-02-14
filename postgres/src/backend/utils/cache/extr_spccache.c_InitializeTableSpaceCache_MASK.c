
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
typedef int TableSpaceCacheEntry ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 HASHCTL VAR_6;


 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.keysize = sizeof(Oid);
 VAR_6.entrysize = sizeof(TableSpaceCacheEntry);
 VAR_5 =
  FUNC_3("TableSpace cache", 16, &VAR_6,
     VAR_2 | VAR_1);


 if (!VAR_0)
  FUNC_1();


 FUNC_0(VAR_4,
          VAR_3,
          (Datum) 0);
}
