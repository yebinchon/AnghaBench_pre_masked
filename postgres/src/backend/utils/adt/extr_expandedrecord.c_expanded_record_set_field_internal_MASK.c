
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct varlena {int dummy; } ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_11__ {int eoh_context; } ;
struct TYPE_14__ {int flags; scalar_t__ nfields; int* dnulls; char* fstartptr; char* fendptr; scalar_t__ flat_size; int * dvalues; int er_short_term_cxt; TYPE_1__ hdr; TYPE_2__* er_tupdesc; } ;
struct TYPE_13__ {int attlen; int attbyval; } ;
struct TYPE_12__ {scalar_t__ natts; } ;
typedef int MemoryContext ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ ExpandedRecordHeader ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int,int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (struct varlena*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int) ;

void
FUNC_15(ExpandedRecordHeader *VAR_7, int VAR_8,
           Datum VAR_9, bool VAR_10,
           bool VAR_11,
           bool VAR_12)
{
 TupleDesc VAR_13;
 Form_pg_attribute VAR_14;
 Datum *VAR_15;
 bool *VAR_16;
 char *VAR_17;





 FUNC_0(!(VAR_7->flags & VAR_6) || !VAR_12);


 if ((VAR_7->flags & VAR_5) && VAR_12)
  FUNC_7(VAR_7, VAR_8, VAR_9, VAR_10);


 if (!(VAR_7->flags & VAR_2))
  FUNC_9(VAR_7);


 VAR_13 = VAR_7->er_tupdesc;
 FUNC_0(VAR_7->nfields == VAR_13->natts);


 if (FUNC_14(VAR_8 <= 0 || VAR_8 > VAR_7->nfields))
  FUNC_11(VAR_0, "cannot assign to field %d of expanded record", VAR_8);





 VAR_14 = FUNC_5(VAR_13, VAR_8 - 1);
 if (!VAR_10 && !VAR_14->attbyval)
 {
  MemoryContext VAR_18;


  if (VAR_11)
  {
   if (VAR_14->attlen == -1 &&
    FUNC_6(FUNC_1(VAR_9)))
   {

    VAR_18 = FUNC_3(FUNC_12(VAR_7));
    VAR_9 = FUNC_4(FUNC_10((struct varlena *) FUNC_1(VAR_9)));
    FUNC_3(VAR_18);
   }
   else
    VAR_11 = 0;
  }


  VAR_18 = FUNC_3(VAR_7->hdr.eoh_context);
  VAR_9 = FUNC_8(VAR_9, 0, VAR_14->attlen);
  FUNC_3(VAR_18);


  if (VAR_11)
   FUNC_2(VAR_7->er_short_term_cxt);


  VAR_7->flags |= VAR_1;







  if (VAR_14->attlen == -1 &&
   FUNC_6(FUNC_1(VAR_9)))
   VAR_7->flags |= VAR_4;
 }




 VAR_15 = VAR_7->dvalues;
 VAR_16 = VAR_7->dnulls;


 VAR_7->flags &= ~VAR_3;

 VAR_7->flat_size = 0;


 if (!VAR_14->attbyval && !VAR_16[VAR_8 - 1])
  VAR_17 = (char *) FUNC_1(VAR_15[VAR_8 - 1]);
 else
  VAR_17 = ((void*)0);


 VAR_15[VAR_8 - 1] = VAR_9;
 VAR_16[VAR_8 - 1] = VAR_10;
 if (VAR_17 && !(VAR_7->flags & VAR_6))
 {

  if (VAR_17 < VAR_7->fstartptr || VAR_17 >= VAR_7->fendptr)
   FUNC_13(VAR_17);
 }
}
