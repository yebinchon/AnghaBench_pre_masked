
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_9__ {TYPE_1__* rd_rel; int * rd_opcintype; int * rd_opfamily; } ;
struct TYPE_8__ {int ssup_attno; int ssup_reverse; int * comparator; } ;
struct TYPE_7__ {scalar_t__ relam; } ;
typedef TYPE_2__* SortSupport ;
typedef TYPE_3__* Relation ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

void
FUNC_3(Relation VAR_4, int16 VAR_5,
          SortSupport VAR_6)
{
 Oid VAR_7 = VAR_4->rd_opfamily[VAR_6->ssup_attno - 1];
 Oid VAR_8 = VAR_4->rd_opcintype[VAR_6->ssup_attno - 1];

 FUNC_0(VAR_6->comparator == ((void*)0));

 if (VAR_4->rd_rel->relam != VAR_2)
  FUNC_2(VAR_3, "unexpected non-btree AM: %u", VAR_4->rd_rel->relam);
 if (VAR_5 != VAR_0 &&
  VAR_5 != VAR_1)
  FUNC_2(VAR_3, "unexpected sort support strategy: %d", VAR_5);
 VAR_6->ssup_reverse = (VAR_5 == VAR_0);

 FUNC_1(VAR_7, VAR_8, VAR_6);
}
