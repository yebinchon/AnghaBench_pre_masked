
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleDesc ;
struct TYPE_11__ {int nattrs; TYPE_2__* myinfo; int attrinfo; TYPE_1__* portal; } ;
struct TYPE_10__ {int atttypid; } ;
struct TYPE_9__ {int format; int finfo; int typsend; int typisvarlena; int typoutput; } ;
struct TYPE_8__ {int* formats; } ;
typedef TYPE_2__ PrinttupAttrInfo ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ DR_printtup ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(DR_printtup *VAR_2, TupleDesc VAR_3, int VAR_4)
{
 int16 *VAR_5 = VAR_2->portal->formats;
 int VAR_6;


 if (VAR_2->myinfo)
  FUNC_8(VAR_2->myinfo);
 VAR_2->myinfo = ((void*)0);

 VAR_2->attrinfo = VAR_3;
 VAR_2->nattrs = VAR_4;
 if (VAR_4 <= 0)
  return;

 VAR_2->myinfo = (PrinttupAttrInfo *)
  FUNC_7(VAR_4 * sizeof(PrinttupAttrInfo));

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  PrinttupAttrInfo *VAR_7 = VAR_2->myinfo + VAR_6;
  int16 VAR_8 = (VAR_5 ? VAR_5[VAR_6] : 0);
  Form_pg_attribute VAR_9 = FUNC_0(VAR_3, VAR_6);

  VAR_7->format = VAR_8;
  if (VAR_8 == 0)
  {
   FUNC_6(VAR_9->atttypid,
         &VAR_7->typoutput,
         &VAR_7->typisvarlena);
   FUNC_4(VAR_7->typoutput, &VAR_7->finfo);
  }
  else if (VAR_8 == 1)
  {
   FUNC_5(VAR_9->atttypid,
         &VAR_7->typsend,
         &VAR_7->typisvarlena);
   FUNC_4(VAR_7->typsend, &VAR_7->finfo);
  }
  else
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("unsupported format code: %d", VAR_8)));
 }
}
