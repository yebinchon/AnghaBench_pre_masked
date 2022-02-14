
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int TupleDesc ;
struct TYPE_17__ {int eoh_context; } ;
struct TYPE_19__ {int flags; char* fstartptr; char* fendptr; int nfields; int * dvalues; int * dnulls; int er_tupdesc; scalar_t__ flat_size; TYPE_2__* fvalue; int er_short_term_cxt; TYPE_1__ hdr; } ;
struct TYPE_18__ {int t_len; scalar_t__ t_data; } ;
struct TYPE_16__ {int attbyval; } ;
typedef int MemoryContext ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__ ExpandedRecordHeader ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_14__* FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*,int ) ;

void
FUNC_12(ExpandedRecordHeader *VAR_7,
        HeapTuple VAR_8,
        bool VAR_9,
        bool VAR_10)
{
 int VAR_11;
 HeapTuple VAR_12;
 char *VAR_13;
 char *VAR_14;
 int VAR_15;
 HeapTuple VAR_16;
 MemoryContext VAR_17;


 FUNC_0(!(VAR_7->flags & VAR_6));




 if (VAR_7->flags & VAR_5)
  FUNC_6(VAR_7, VAR_8);






 if (VAR_10 && VAR_8)
 {

  FUNC_0(VAR_9);
  if (FUNC_2(VAR_8))
  {
   VAR_17 = FUNC_4(FUNC_7(VAR_7));
   VAR_8 = FUNC_11(VAR_8, VAR_7->er_tupdesc);
   FUNC_4(VAR_17);
  }
  else
   VAR_10 = 0;
 }




 VAR_11 = VAR_7->flags;
 VAR_15 = VAR_11 & VAR_0;





 if (VAR_9 && VAR_8)
 {
  VAR_17 = FUNC_4(VAR_7->hdr.eoh_context);
  VAR_16 = FUNC_8(VAR_8);
  VAR_15 |= VAR_2;
  FUNC_4(VAR_17);


  if (VAR_10)
   FUNC_3(VAR_7->er_short_term_cxt);
 }
 else
  VAR_16 = VAR_8;


 VAR_12 = VAR_7->fvalue;
 VAR_13 = VAR_7->fstartptr;
 VAR_14 = VAR_7->fendptr;




 if (VAR_16)
 {

  VAR_7->fvalue = VAR_16;
  VAR_7->fstartptr = (char *) VAR_16->t_data;
  VAR_7->fendptr = ((char *) VAR_16->t_data) + VAR_16->t_len;
  VAR_15 |= VAR_3;


  if (FUNC_2(VAR_16))
   VAR_15 |= VAR_4;
 }
 else
 {
  VAR_7->fvalue = ((void*)0);
  VAR_7->fstartptr = VAR_7->fendptr = ((void*)0);
 }

 VAR_7->flags = VAR_15;


 VAR_7->flat_size = 0;







 if (VAR_11 & VAR_1)
 {
  TupleDesc VAR_18 = VAR_7->er_tupdesc;
  int VAR_19;

  for (VAR_19 = 0; VAR_19 < VAR_7->nfields; VAR_19++)
  {
   if (!VAR_7->dnulls[VAR_19] &&
    !(FUNC_5(VAR_18, VAR_19)->attbyval))
   {
    char *VAR_20 = (char *) FUNC_1(VAR_7->dvalues[VAR_19]);

    if (VAR_20 < VAR_13 || VAR_20 >= VAR_14)
     FUNC_10(VAR_20);
   }
  }
 }


 if (VAR_11 & VAR_2)
  FUNC_9(VAR_12);


}
