
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int natts; } ;
struct TYPE_5__ {TYPE_4__* rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int List ;
typedef int Alias ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int ,int ,int,int,int,int,int **,int **) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(Oid VAR_1, Alias *VAR_2, int VAR_3, int VAR_4,
      int VAR_5, bool VAR_6,
      List **VAR_7, List **VAR_8)
{
 Relation VAR_9;


 VAR_9 = FUNC_2(VAR_1, VAR_0);
 FUNC_0(VAR_9->rd_att, VAR_2, VAR_9->rd_att->natts, 0,
     VAR_3, VAR_4,
     VAR_5, VAR_6,
     VAR_7, VAR_8);
 FUNC_1(VAR_9, VAR_0);
}
