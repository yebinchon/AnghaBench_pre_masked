
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int do_fsync; int PagePrecedes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,char*,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(void)
{
 VAR_2->PagePrecedes = VAR_3;
 FUNC_0(VAR_2, "subtrans", VAR_1, 0,
      VAR_4, "pg_subtrans",
      VAR_0);

 VAR_2->do_fsync = 0;
}
