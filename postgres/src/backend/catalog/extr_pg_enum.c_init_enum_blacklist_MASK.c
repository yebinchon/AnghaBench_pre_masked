
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hash_ctl ;
struct TYPE_4__ {int keysize; int entrysize; int hcxt; } ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 HASHCTL VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.keysize = sizeof(Oid);
 VAR_5.entrysize = sizeof(Oid);
 VAR_5.hcxt = VAR_3;
 VAR_4 = FUNC_0("Enum value blacklist",
         32,
         &VAR_5,
         VAR_2 | VAR_0 | VAR_1);
}
