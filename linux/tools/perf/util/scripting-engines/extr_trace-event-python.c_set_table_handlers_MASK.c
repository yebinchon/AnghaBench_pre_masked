
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int * cpr; TYPE_3__* crp; } ;
struct tables {int db_export_mode; int synth_handler; TYPE_2__ dbe; } ;
struct TYPE_7__ {int * cpr; } ;
struct TYPE_5__ {int priv_size; } ;
typedef int PyObject ;


 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 () ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct tables*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_10(struct tables *VAR_15)
{
 const char *VAR_16 = "perf_db_export_mode";
 const char *VAR_17 = "perf_db_export_calls";
 const char *VAR_18 = "perf_db_export_callchains";
 PyObject *VAR_19, *VAR_20, *VAR_21;
 bool VAR_22 = 0;
 bool VAR_23 = 0;
 int VAR_24;

 FUNC_9(VAR_15, 0, sizeof(struct tables));
 if (FUNC_6(&VAR_15->dbe))
  FUNC_2("failed to initialize export");

 VAR_19 = FUNC_0(VAR_9, VAR_16);
 if (!VAR_19)
  return;

 VAR_24 = FUNC_1(VAR_19);
 if (VAR_24 == -1)
  FUNC_8(VAR_16);
 if (!VAR_24)
  return;


 VAR_15->dbe.crp = ((void*)0);
 VAR_20 = FUNC_0(VAR_9, VAR_17);
 if (VAR_20) {
  VAR_24 = FUNC_1(VAR_20);
  if (VAR_24 == -1)
   FUNC_8(VAR_17);
  VAR_22 = !!VAR_24;
 }

 if (VAR_22) {
  VAR_15->dbe.crp =
   FUNC_5(VAR_10,
         &VAR_15->dbe);
  if (!VAR_15->dbe.crp)
   FUNC_2("failed to create calls processor");
 }


 VAR_15->dbe.cpr = ((void*)0);
 VAR_21 = FUNC_0(VAR_9,
          VAR_18);
 if (VAR_21) {
  VAR_24 = FUNC_1(VAR_21);
  if (VAR_24 == -1)
   FUNC_8(VAR_18);
  VAR_23 = !!VAR_24;
 }

 if (VAR_23) {






  if (VAR_15->dbe.crp)
   VAR_15->dbe.cpr = VAR_15->dbe.crp->cpr;
  else
   VAR_15->dbe.cpr = FUNC_4();

  if (!VAR_15->dbe.cpr)
   FUNC_2("failed to create call path root");
 }

 VAR_15->db_export_mode = 1;



 VAR_13.priv_size = sizeof(u64);

 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 FUNC_3(VAR_14);
 FUNC_3(VAR_3);
 FUNC_3(VAR_4);
 FUNC_3(VAR_6);
 FUNC_3(VAR_12);
 FUNC_3(VAR_0);
 FUNC_3(VAR_11);
 FUNC_3(VAR_1);
 FUNC_3(VAR_2);
 FUNC_3(VAR_5);







 VAR_15->synth_handler = FUNC_7("synth_data");
}
