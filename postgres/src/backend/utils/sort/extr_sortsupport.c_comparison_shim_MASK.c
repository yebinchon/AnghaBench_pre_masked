
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int isnull; TYPE_2__* args; } ;
struct TYPE_7__ {int fn_oid; } ;
struct TYPE_10__ {TYPE_1__ flinfo; TYPE_6__ fcinfo; } ;
struct TYPE_9__ {scalar_t__ ssup_extra; } ;
struct TYPE_8__ {int value; } ;
typedef TYPE_3__* SortSupport ;
typedef TYPE_4__ SortShimExtra ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_2(Datum VAR_1, Datum VAR_2, SortSupport VAR_3)
{
 SortShimExtra *VAR_4 = (SortShimExtra *) VAR_3->ssup_extra;
 Datum VAR_5;

 VAR_4->fcinfo.args[0].value = VAR_1;
 VAR_4->fcinfo.args[1].value = VAR_2;


 VAR_4->fcinfo.isnull = 0;

 VAR_5 = FUNC_0(&VAR_4->fcinfo);


 if (VAR_4->fcinfo.isnull)
  FUNC_1(VAR_0, "function %u returned NULL", VAR_4->flinfo.fn_oid);

 return VAR_5;
}
