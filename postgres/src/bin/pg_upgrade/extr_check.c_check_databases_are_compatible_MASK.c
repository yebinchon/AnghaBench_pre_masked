
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ndbs; TYPE_3__* dbs; } ;
struct TYPE_12__ {TYPE_2__ dbarr; } ;
struct TYPE_8__ {int ndbs; TYPE_3__* dbs; } ;
struct TYPE_11__ {TYPE_1__ dbarr; } ;
struct TYPE_10__ {int db_name; } ;
typedef TYPE_3__ DbInfo ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;
 int VAR_3;
 DbInfo *VAR_4;
 DbInfo *VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_0.dbarr.ndbs; VAR_2++)
 {
  VAR_4 = &VAR_0.dbarr.dbs[VAR_2];


  for (VAR_3 = 0; VAR_3 < VAR_1.dbarr.ndbs; VAR_3++)
  {
   VAR_5 = &VAR_1.dbarr.dbs[VAR_3];
   if (FUNC_1(VAR_4->db_name, VAR_5->db_name) == 0)
   {
    FUNC_0(VAR_5, VAR_4);
    break;
   }
  }
 }
}
