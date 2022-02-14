
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(Relation VAR_2, int16 *VAR_3, int VAR_4)
{
 Oid VAR_5 = FUNC_0();
 AclResult VAR_6;
 int VAR_7;


 VAR_6 = FUNC_6(FUNC_2(VAR_2), VAR_5,
          VAR_1);
 if (VAR_6 == VAR_0)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
  VAR_6 = FUNC_5(FUNC_2(VAR_2), VAR_3[VAR_7],
            VAR_5, VAR_1);
  if (VAR_6 != VAR_0)
   FUNC_3(VAR_6, FUNC_4(VAR_2->rd_rel->relkind),
         FUNC_1(VAR_2));
 }
}
