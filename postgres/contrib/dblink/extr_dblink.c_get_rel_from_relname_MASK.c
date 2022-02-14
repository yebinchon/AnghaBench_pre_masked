
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int text ;
struct TYPE_8__ {TYPE_1__* rd_rel; } ;
struct TYPE_7__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef int RangeVar ;
typedef int LOCKMODE ;
typedef scalar_t__ AclResult ;
typedef int AclMode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 TYPE_2__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static Relation
FUNC_9(text *VAR_1, LOCKMODE VAR_2, AclMode VAR_3)
{
 RangeVar *VAR_4;
 Relation VAR_5;
 AclResult VAR_6;

 VAR_4 = FUNC_5(FUNC_8(VAR_1));
 VAR_5 = FUNC_7(VAR_4, VAR_2);

 VAR_6 = FUNC_6(FUNC_2(VAR_5), FUNC_0(),
          VAR_3);
 if (VAR_6 != VAR_0)
  FUNC_3(VAR_6, FUNC_4(VAR_5->rd_rel->relkind),
        FUNC_1(VAR_5));

 return VAR_5;
}
