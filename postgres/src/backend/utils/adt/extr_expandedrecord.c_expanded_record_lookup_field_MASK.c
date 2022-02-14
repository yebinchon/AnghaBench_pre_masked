
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_13__ {int fcollation; int ftypmod; int ftypeid; int fnumber; } ;
struct TYPE_12__ {int attcollation; int atttypmod; int atttypid; int attnum; } ;
struct TYPE_11__ {int attcollation; int atttypmod; int atttypid; int attnum; int attisdropped; int attname; } ;
struct TYPE_10__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__ FormData_pg_attribute ;
typedef int ExpandedRecordHeader ;
typedef TYPE_4__ ExpandedRecordFieldInfo ;


 TYPE_3__* FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

bool
FUNC_4(ExpandedRecordHeader *VAR_0, const char *VAR_1,
        ExpandedRecordFieldInfo *VAR_2)
{
 TupleDesc VAR_3;
 int VAR_4;
 Form_pg_attribute VAR_5;
 const FormData_pg_attribute *VAR_6;

 VAR_3 = FUNC_2(VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_3->natts; VAR_4++)
 {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  if (FUNC_3(&VAR_5->attname, VAR_1) == 0 &&
   !VAR_5->attisdropped)
  {
   VAR_2->fnumber = VAR_5->attnum;
   VAR_2->ftypeid = VAR_5->atttypid;
   VAR_2->ftypmod = VAR_5->atttypmod;
   VAR_2->fcollation = VAR_5->attcollation;
   return 1;
  }
 }


 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6 != ((void*)0))
 {
  VAR_2->fnumber = VAR_6->attnum;
  VAR_2->ftypeid = VAR_6->atttypid;
  VAR_2->ftypmod = VAR_6->atttypmod;
  VAR_2->fcollation = VAR_6->attcollation;
  return 1;
 }

 return 0;
}
