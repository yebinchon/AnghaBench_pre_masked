
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nargs; void** argtypes; void** argtypioparams; int qname; int * plan; int * arginfuncs; } ;
typedef TYPE_3__ pltcl_query_desc ;
typedef int int32 ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
typedef int Tcl_HashTable ;
typedef int Tcl_HashEntry ;
struct TYPE_9__ {TYPE_2__* prodesc; } ;
struct TYPE_7__ {TYPE_1__* interp_desc; } ;
struct TYPE_6__ {int query_hash; } ;
typedef int ResourceOwner ;
typedef void* Oid ;
typedef int * volatile MemoryContext ;
typedef int FmgrInfo ;
typedef int ClientData ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int * volatile) ;
 int FUNC_2 (int * volatile) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ,int,void**) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_8 (int *,int ,int*) ;
 int FUNC_9 (int * const) ;
 scalar_t__ FUNC_10 (int *,int * const,int*,int ***) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int,int * const*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (void*,int *,int * volatile) ;
 int FUNC_18 (void*,void**,void**) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int ,void**,int *,int) ;
 TYPE_5__* VAR_9 ;
 int FUNC_22 (int *,int * volatile,int ) ;
 int FUNC_23 (int * volatile,int ) ;
 int FUNC_24 (int * volatile,int ) ;
 int FUNC_25 (int ,int,char*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_26(ClientData VAR_10, Tcl_Interp *VAR_11,
      int VAR_12, Tcl_Obj *const VAR_13[])
{
 volatile MemoryContext VAR_14 = ((void*)0);
 int VAR_15;
 Tcl_Obj **VAR_16;
 pltcl_query_desc *VAR_17;
 int VAR_18;
 Tcl_HashEntry *VAR_19;
 int VAR_20;
 Tcl_HashTable *VAR_21;
 MemoryContext VAR_22 = VAR_1;
 ResourceOwner VAR_23 = VAR_2;




 if (VAR_12 != 3)
 {
  FUNC_14(VAR_11, 1, VAR_13, "query argtypes");
  return VAR_4;
 }




 if (FUNC_10(VAR_11, VAR_13[2], &VAR_15, &VAR_16) != VAR_5)
  return VAR_4;
 VAR_14 = FUNC_0(VAR_6,
          "PL/Tcl spi_prepare query",
          VAR_0);
 FUNC_2(VAR_14);
 VAR_17 = (pltcl_query_desc *) FUNC_20(sizeof(pltcl_query_desc));
 FUNC_25(VAR_17->qname, sizeof(VAR_17->qname), "%p", VAR_17);
 VAR_17->nargs = VAR_15;
 VAR_17->argtypes = (Oid *) FUNC_19(VAR_15 * sizeof(Oid));
 VAR_17->arginfuncs = (FmgrInfo *) FUNC_19(VAR_15 * sizeof(FmgrInfo));
 VAR_17->argtypioparams = (Oid *) FUNC_19(VAR_15 * sizeof(Oid));
 FUNC_2(VAR_22);






 FUNC_23(VAR_22, VAR_23);

 FUNC_5();
 {





  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
  {
   Oid VAR_24,
      VAR_25,
      VAR_26;
   int32 VAR_27;

   FUNC_21(FUNC_9(VAR_16[VAR_18]), &VAR_24, &VAR_27, 0);

   FUNC_18(VAR_24, &VAR_25, &VAR_26);

   VAR_17->argtypes[VAR_18] = VAR_24;
   FUNC_17(VAR_25, &(VAR_17->arginfuncs[VAR_18]), VAR_14);
   VAR_17->argtypioparams[VAR_18] = VAR_26;
  }




  VAR_7;
  VAR_17->plan = FUNC_7(FUNC_15(FUNC_9(VAR_13[1])),
          VAR_15, VAR_17->argtypes);
  VAR_8;

  if (VAR_17->plan == ((void*)0))
   FUNC_16(VAR_3, "SPI_prepare() failed");





  if (FUNC_6(VAR_17->plan))
   FUNC_16(VAR_3, "SPI_keepplan() failed");

  FUNC_24(VAR_22, VAR_23);
 }
 FUNC_3();
 {
  FUNC_22(VAR_11, VAR_22, VAR_23);

  FUNC_1(VAR_14);

  return VAR_4;
 }
 FUNC_4();





 VAR_21 = &VAR_9->prodesc->interp_desc->query_hash;

 VAR_19 = FUNC_8(VAR_21, VAR_17->qname, &VAR_20);
 FUNC_12(VAR_19, (ClientData) VAR_17);


 FUNC_13(VAR_11, FUNC_11(VAR_17->qname, -1));
 return VAR_5;
}
