
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_id; int * interp; int query_hash; } ;
typedef TYPE_1__ pltcl_interp_desc ;
typedef int interpname ;
typedef int Tcl_Interp ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int *,char*,int ,int *,int *) ;
 int * FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_11(pltcl_interp_desc *VAR_14, Oid VAR_15, bool VAR_16)
{
 Tcl_Interp *VAR_17;
 char VAR_18[32];






 FUNC_10(VAR_18, sizeof(VAR_18), "slave_%u", VAR_14->user_id);
 if ((VAR_17 = FUNC_5(VAR_8, VAR_18,
          VAR_16 ? 1 : 0)) == ((void*)0))
  FUNC_9(VAR_0, "could not create slave Tcl interpreter");




 FUNC_7(&VAR_14->query_hash, VAR_1);




 FUNC_4(VAR_17, "elog",
       VAR_7, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "quote",
       VAR_9, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "argisnull",
       VAR_5, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "return_null",
       VAR_11, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "return_next",
       VAR_10, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "spi_exec",
       VAR_2, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "spi_prepare",
       VAR_4, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "spi_execp",
       VAR_3, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "subtransaction",
       VAR_13, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "commit",
       VAR_6, ((void*)0), ((void*)0));
 FUNC_4(VAR_17, "rollback",
       VAR_12, ((void*)0), ((void*)0));
 FUNC_3();
 {
  VAR_14->interp = VAR_17;
  FUNC_8(VAR_15, VAR_16);
 }
 FUNC_0();
 {
  VAR_14->interp = ((void*)0);
  FUNC_6(VAR_17);
  FUNC_2();
 }
 FUNC_1();
}
