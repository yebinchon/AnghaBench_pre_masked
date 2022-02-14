
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* values; } ;
struct TYPE_10__ {int indnatts; TYPE_2__ indkey; scalar_t__ indisvalid; scalar_t__ indimmediate; scalar_t__ indisunique; } ;
struct TYPE_9__ {TYPE_1__* rd_rel; TYPE_4__* rd_index; } ;
struct TYPE_7__ {scalar_t__ relam; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__* Form_pg_index ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_1(Relation VAR_2)
{
 Form_pg_index VAR_3 = VAR_2->rd_index;
 if (VAR_3->indisunique &&
  VAR_3->indimmediate &&
  VAR_2->rd_rel->relam == VAR_0 &&
  VAR_3->indisvalid &&
  FUNC_0(VAR_2) == VAR_1 &&
  VAR_3->indnatts > 0)
 {







  int VAR_4 = VAR_3->indnatts;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  {
   int VAR_6 = VAR_3->indkey.values[VAR_5];

   if (VAR_6 <= 0)
    return 0;
  }
  return 1;
 }
 return 0;
}
