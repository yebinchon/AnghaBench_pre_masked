
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; } ;
typedef int SeqTableData ;
typedef int Oid ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 HASHCTL VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.keysize = sizeof(Oid);
 VAR_3.entrysize = sizeof(SeqTableData);

 VAR_2 = FUNC_0("Sequence values", 16, &VAR_3,
        VAR_1 | VAR_0);
}
