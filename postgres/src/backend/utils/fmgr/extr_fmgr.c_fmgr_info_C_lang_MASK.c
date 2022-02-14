
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* inforec; int user_fn; } ;
struct TYPE_9__ {int fn_addr; } ;
struct TYPE_8__ {int api_version; } ;
typedef TYPE_1__ Pg_finfo_record ;
typedef int PGFunction ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__ FmgrInfo ;
typedef int Datum ;
typedef TYPE_3__ CFuncHashTabEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_1__* FUNC_3 (void*,char*) ;
 int FUNC_4 (char*,char*,int,void**) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_8(Oid VAR_4, FmgrInfo *VAR_5, HeapTuple VAR_6)
{
 CFuncHashTabEntry *VAR_7;
 PGFunction VAR_8;
 const Pg_finfo_record *VAR_9;
 bool VAR_10;




 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
 {
  VAR_8 = VAR_7->user_fn;
  VAR_9 = VAR_7->inforec;
 }
 else
 {
  Datum VAR_11,
     VAR_12;
  char *VAR_13,
       *VAR_14;
  void *VAR_15;






  VAR_11 = FUNC_0(VAR_3, VAR_6,
          VAR_1, &VAR_10);
  if (VAR_10)
   FUNC_2(VAR_2, "null prosrc for C function %u", VAR_4);
  VAR_13 = FUNC_1(VAR_11);

  VAR_12 = FUNC_0(VAR_3, VAR_6,
          VAR_0, &VAR_10);
  if (VAR_10)
   FUNC_2(VAR_2, "null probin for C function %u", VAR_4);
  VAR_14 = FUNC_1(VAR_12);


  VAR_8 = FUNC_4(VAR_14, VAR_13, 1,
           &VAR_15);


  VAR_9 = FUNC_3(VAR_15, VAR_13);


  FUNC_7(VAR_6, VAR_8, VAR_9);

  FUNC_6(VAR_13);
  FUNC_6(VAR_14);
 }

 switch (VAR_9->api_version)
 {
  case 1:

   VAR_5->fn_addr = VAR_8;
   break;
  default:

   FUNC_2(VAR_2, "unrecognized function API version: %d",
     VAR_9->api_version);
   break;
 }
}
