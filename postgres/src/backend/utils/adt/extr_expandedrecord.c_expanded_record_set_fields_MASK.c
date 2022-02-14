
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
struct TYPE_14__ {int flags; int nfields; int* dnulls; char* fstartptr; char* fendptr; TYPE_1__ hdr; int er_domaininfo; int er_decltypeid; int * dvalues; scalar_t__ flat_size; TYPE_2__* er_tupdesc; } ;
struct TYPE_13__ {int attlen; int attbyval; scalar_t__ attisdropped; } ;
struct TYPE_12__ {int natts; } ;
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
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct varlena*) ;
 int FUNC_10 (int ,int,int ,int *,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int) ;

void
FUNC_14(ExpandedRecordHeader *VAR_6,
         const Datum *VAR_7, const bool *VAR_8,
         bool VAR_9)
{
 TupleDesc VAR_10;
 Datum *VAR_11;
 bool *VAR_12;
 int VAR_13;
 MemoryContext VAR_14;


 FUNC_0(!(VAR_6->flags & VAR_5));


 if (!(VAR_6->flags & VAR_1))
  FUNC_8(VAR_6);


 VAR_10 = VAR_6->er_tupdesc;
 FUNC_0(VAR_6->nfields == VAR_10->natts);


 VAR_6->flags &= ~VAR_2;

 VAR_6->flat_size = 0;

 VAR_14 = FUNC_3(VAR_6->hdr.eoh_context);

 VAR_11 = VAR_6->dvalues;
 VAR_12 = VAR_6->dnulls;

 for (VAR_13 = 0; VAR_13 < VAR_6->nfields; VAR_13++)
 {
  Form_pg_attribute VAR_15 = FUNC_5(VAR_10, VAR_13);
  Datum VAR_16;
  bool VAR_17;


  if (VAR_15->attisdropped)
   continue;

  VAR_16 = VAR_7[VAR_13];
  VAR_17 = VAR_8[VAR_13];

  if (!VAR_15->attbyval)
  {




   if (!VAR_17)
   {

    if (VAR_15->attlen == -1 &&
     FUNC_6(FUNC_1(VAR_16)))
    {
     if (VAR_9)
     {

      VAR_16 = FUNC_4(FUNC_9((struct varlena *) FUNC_1(VAR_16)));
     }
     else
     {

      VAR_16 = FUNC_7(VAR_16, 0, -1);

      if (FUNC_6(FUNC_1(VAR_16)))
       VAR_6->flags |= VAR_3;
     }
    }
    else
    {

     VAR_16 = FUNC_7(VAR_16, 0, VAR_15->attlen);
    }


    VAR_6->flags |= VAR_0;
   }





   if (FUNC_13(!VAR_12[VAR_13]))
   {
    char *VAR_18;

    VAR_18 = (char *) FUNC_1(VAR_11[VAR_13]);

    if (VAR_18 < VAR_6->fstartptr || VAR_18 >= VAR_6->fendptr)
     FUNC_12(VAR_18);
   }
  }


  VAR_11[VAR_13] = VAR_16;
  VAR_12[VAR_13] = VAR_17;
 }






 if (VAR_6->flags & VAR_4)
 {

  FUNC_3(FUNC_11(VAR_6));

  FUNC_10(FUNC_2(VAR_6), 0,
      VAR_6->er_decltypeid,
      &VAR_6->er_domaininfo,
      VAR_6->hdr.eoh_context);
 }

 FUNC_3(VAR_14);
}
