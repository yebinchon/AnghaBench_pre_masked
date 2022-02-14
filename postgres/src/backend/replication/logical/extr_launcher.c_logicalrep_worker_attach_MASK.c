
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* workers; } ;
struct TYPE_3__ {scalar_t__ proc; int in_use; } ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_7(int VAR_9)
{

 FUNC_1(VAR_4, VAR_2);

 FUNC_0(VAR_9 >= 0 && VAR_9 < VAR_8);
 VAR_5 = &VAR_3->workers[VAR_9];

 if (!VAR_5->in_use)
 {
  FUNC_2(VAR_4);
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("logical replication worker slot %d is empty, cannot attach",
      VAR_9)));
 }

 if (VAR_5->proc)
 {
  FUNC_2(VAR_4);
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("logical replication worker slot %d is already used by "
      "another worker, cannot attach", VAR_9)));
 }

 VAR_5->proc = VAR_6;
 FUNC_3(VAR_7, (Datum) 0);

 FUNC_2(VAR_4);
}
