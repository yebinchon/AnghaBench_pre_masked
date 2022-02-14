
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attname; scalar_t__ attnotnull; } ;
struct TYPE_4__ {int rd_att; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (int ,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ,char*,int,...) ;
 int * VAR_5 ;

void
FUNC_6(int VAR_6)
{
 FUNC_5(VAR_0, "inserting column %d NULL", VAR_6);
 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_2);
 if (FUNC_4(VAR_4->rd_att, VAR_6)->attnotnull)
  FUNC_5(VAR_1,
    "NULL value specified for not-null column \"%s\" of relation \"%s\"",
    FUNC_1(FUNC_4(VAR_4->rd_att, VAR_6)->attname),
    FUNC_3(VAR_4));
 VAR_5[VAR_6] = FUNC_2(((void*)0));
 VAR_3[VAR_6] = 1;
}
