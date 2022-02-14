
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* args; } ;
struct TYPE_8__ {TYPE_5__ fcinfo; int flinfo; } ;
struct TYPE_7__ {int comparator; TYPE_3__* ssup_extra; int ssup_collation; int ssup_cxt; } ;
struct TYPE_6__ {int isnull; } ;
typedef TYPE_2__* SortSupport ;
typedef TYPE_3__ SortShimExtra ;
typedef int Oid ;


 int FUNC_0 (TYPE_5__,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int ) ;

void
FUNC_4(Oid VAR_1, SortSupport VAR_2)
{
 SortShimExtra *VAR_3;

 VAR_3 = (SortShimExtra *) FUNC_1(VAR_2->ssup_cxt,
             FUNC_2(2));


 FUNC_3(VAR_1, &VAR_3->flinfo, VAR_2->ssup_cxt);


 FUNC_0(VAR_3->fcinfo, &VAR_3->flinfo, 2,
        VAR_2->ssup_collation, ((void*)0), ((void*)0));
 VAR_3->fcinfo.args[0].isnull = 0;
 VAR_3->fcinfo.args[1].isnull = 0;

 VAR_2->ssup_extra = VAR_3;
 VAR_2->comparator = VAR_0;
}
