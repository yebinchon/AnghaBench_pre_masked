
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int minrows; int compute_stats; TYPE_2__* extra_data; int attrtypid; TYPE_3__* attr; } ;
typedef TYPE_1__ VacAttrStats ;
struct TYPE_7__ {int attstattarget; } ;
struct TYPE_6__ {void* ltopr; int eqfunc; void* eqopr; } ;
typedef TYPE_2__ StdAnalyzeData ;
typedef void* Oid ;
typedef TYPE_3__* Form_pg_attribute ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int,int,int,void**,void**,int *,int *) ;
 scalar_t__ FUNC_3 (int) ;

bool
FUNC_4(VacAttrStats *VAR_5)
{
 Form_pg_attribute VAR_6 = VAR_5->attr;
 Oid VAR_7;
 Oid VAR_8;
 StdAnalyzeData *VAR_9;



 if (VAR_6->attstattarget < 0)
  VAR_6->attstattarget = VAR_4;


 FUNC_2(VAR_5->attrtypid,
        0, 0, 0,
        &VAR_7, &VAR_8, ((void*)0),
        ((void*)0));


 VAR_9 = (StdAnalyzeData *) FUNC_3(sizeof(StdAnalyzeData));
 VAR_9->eqopr = VAR_8;
 VAR_9->eqfunc = FUNC_0(VAR_8) ? FUNC_1(VAR_8) : VAR_0;
 VAR_9->ltopr = VAR_7;
 VAR_5->extra_data = VAR_9;




 if (FUNC_0(VAR_8) && FUNC_0(VAR_7))
 {

  VAR_5->compute_stats = VAR_2;
  VAR_5->minrows = 300 * VAR_6->attstattarget;
 }
 else if (FUNC_0(VAR_8))
 {

  VAR_5->compute_stats = VAR_1;

  VAR_5->minrows = 300 * VAR_6->attstattarget;
 }
 else
 {

  VAR_5->compute_stats = VAR_3;

  VAR_5->minrows = 300 * VAR_6->attstattarget;
 }

 return 1;
}
