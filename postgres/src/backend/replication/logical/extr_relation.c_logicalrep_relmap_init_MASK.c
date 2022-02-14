
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; void* hcxt; } ;
typedef int Oid ;
typedef int LogicalRepTyp ;
typedef int LogicalRepRelMapEntry ;
typedef int LogicalRepRelId ;
typedef TYPE_1__ HASHCTL ;
typedef int Datum ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 void* FUNC_3 (char*,int,TYPE_1__*,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(void)
{
 HASHCTL VAR_9;

 if (!VAR_6)
  VAR_6 =
   FUNC_0(VAR_1,
          "LogicalRepRelMapContext",
          VAR_0);


 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(LogicalRepRelId);
 VAR_9.entrysize = sizeof(LogicalRepRelMapEntry);
 VAR_9.hcxt = VAR_6;

 VAR_5 = FUNC_3("logicalrep relation map cache", 128, &VAR_9,
           VAR_4 | VAR_2 | VAR_3);


 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(Oid);
 VAR_9.entrysize = sizeof(LogicalRepTyp);
 VAR_9.hcxt = VAR_6;


 VAR_7 = FUNC_3("logicalrep type map cache", 2, &VAR_9,
           VAR_4 | VAR_2 | VAR_3);


 FUNC_1(VAR_8,
          (Datum) 0);
}
