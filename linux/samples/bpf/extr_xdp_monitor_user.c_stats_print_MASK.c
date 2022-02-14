
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u64rec {int dummy; } ;
struct datarec {int dummy; } ;
struct record {struct datarec total; struct datarec* cpu; } ;
struct stats_record {struct record xdp_devmap_xmit; struct record xdp_cpumap_kthread; struct record* xdp_cpumap_enqueue; struct record_u64* xdp_exception; struct record_u64* xdp_redirect; } ;
struct record_u64 {struct u64rec total; struct u64rec* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 () ;
 double FUNC_2 (struct datarec*,struct datarec*,double) ;
 double FUNC_3 (struct datarec*,struct datarec*,double) ;
 double FUNC_4 (struct datarec*,struct datarec*,double) ;
 double FUNC_5 (struct record*,struct record*) ;
 double FUNC_6 (struct record_u64*,struct record_u64*) ;
 double FUNC_7 (struct datarec*,struct datarec*,double) ;
 double FUNC_8 (struct u64rec*,struct u64rec*,double) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(struct stats_record *VAR_4,
   struct stats_record *VAR_5,
   bool VAR_6)
{
 unsigned int VAR_7 = FUNC_1();
 int VAR_8 = 0, VAR_9, VAR_10;
 double VAR_11 = 0, VAR_12 = 0;


 FUNC_10("%-15s %-7s %-12s %-12s %-9s\n",
        "XDP-event", "CPU:to", "pps", "drop-pps", "extra-info");


 if (VAR_6)
  VAR_8 = VAR_1;

 for (; VAR_8 < VAR_2; VAR_8++) {
  struct record_u64 *VAR_13, *VAR_14;
  char *VAR_15 = "%-15s %-7d %'-12.0f %'-12.0f %s\n";
  char *VAR_16 = "%-15s %-7s %'-12.0f %'-12.0f %s\n";

  VAR_13 = &VAR_4->xdp_redirect[VAR_8];
  VAR_14 = &VAR_5->xdp_redirect[VAR_8];
  VAR_11 = FUNC_6(VAR_13, VAR_14);

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   struct u64rec *VAR_17 = &VAR_13->cpu[VAR_9];
   struct u64rec *VAR_18 = &VAR_14->cpu[VAR_9];

   VAR_12 = FUNC_8(VAR_17, VAR_18, VAR_11);
   if (VAR_12 > 0)
    FUNC_10(VAR_15, "XDP_REDIRECT", VAR_9,
           VAR_8 ? 0.0: VAR_12, VAR_8 ? VAR_12 : 0.0,
           FUNC_9(VAR_8));
  }
  VAR_12 = FUNC_8(&VAR_13->total, &VAR_14->total, VAR_11);
  FUNC_10(VAR_16, "XDP_REDIRECT", "total",
         VAR_8 ? 0.0: VAR_12, VAR_8 ? VAR_12 : 0.0, FUNC_9(VAR_8));
 }


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct record_u64 *VAR_19, *VAR_20;
  char *VAR_21 = "%-15s %-7d %'-12.0f %'-12.0f %s\n";
  char *VAR_22 = "%-15s %-7s %'-12.0f %'-12.0f %s\n";

  VAR_19 = &VAR_4->xdp_exception[VAR_8];
  VAR_20 = &VAR_5->xdp_exception[VAR_8];
  VAR_11 = FUNC_6(VAR_19, VAR_20);

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   struct u64rec *VAR_23 = &VAR_19->cpu[VAR_9];
   struct u64rec *VAR_24 = &VAR_20->cpu[VAR_9];

   VAR_12 = FUNC_8(VAR_23, VAR_24, VAR_11);
   if (VAR_12 > 0)
    FUNC_10(VAR_21, "Exception", VAR_9,
           0.0, VAR_12, FUNC_0(VAR_8));
  }
  VAR_12 = FUNC_8(&VAR_19->total, &VAR_20->total, VAR_11);
  if (VAR_12 > 0)
   FUNC_10(VAR_22, "Exception", "total",
          0.0, VAR_12, FUNC_0(VAR_8));
 }


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  char *VAR_25 = "%-15s %3d:%-3d %'-12.0f %'-12.0f %'-10.2f %s\n";
  char *VAR_26 = "%-15s %3s:%-3d %'-12.0f %'-12.0f %'-10.2f %s\n";
  struct record *VAR_27, *VAR_28;
  char *VAR_29 = "";
  double VAR_30, VAR_31;

  VAR_27 = &VAR_4->xdp_cpumap_enqueue[VAR_10];
  VAR_28 = &VAR_5->xdp_cpumap_enqueue[VAR_10];
  VAR_11 = FUNC_5(VAR_27, VAR_28);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   struct datarec *VAR_32 = &VAR_27->cpu[VAR_9];
   struct datarec *VAR_33 = &VAR_28->cpu[VAR_9];

   VAR_12 = FUNC_7(VAR_32, VAR_33, VAR_11);
   VAR_30 = FUNC_2(VAR_32, VAR_33, VAR_11);
   VAR_31 = FUNC_4(VAR_32, VAR_33, VAR_11);
   if (VAR_31 > 0) {
    VAR_29 = "bulk-average";
    VAR_31 = VAR_12 / VAR_31;
   }
   if (VAR_12 > 0)
    FUNC_10(VAR_25, "cpumap-enqueue",
           VAR_9, VAR_10, VAR_12, VAR_30, VAR_31, VAR_29);
  }
  VAR_12 = FUNC_7(&VAR_27->total, &VAR_28->total, VAR_11);
  if (VAR_12 > 0) {
   VAR_30 = FUNC_2(&VAR_27->total, &VAR_28->total, VAR_11);
   VAR_31 = FUNC_4(&VAR_27->total, &VAR_28->total, VAR_11);
   if (VAR_31 > 0) {
    VAR_29 = "bulk-average";
    VAR_31 = VAR_12 / VAR_31;
   }
   FUNC_10(VAR_26, "cpumap-enqueue",
          "sum", VAR_10, VAR_12, VAR_30, VAR_31, VAR_29);
  }
 }


 {
  char *VAR_34 = "%-15s %-7d %'-12.0f %'-12.0f %'-10.0f %s\n";
  char *VAR_35 = "%-15s %-7s %'-12.0f %'-12.0f %'-10.0f %s\n";
  struct record *VAR_36, *VAR_37;
  double VAR_38, VAR_39;
  char *VAR_40 = "";

  VAR_36 = &VAR_4->xdp_cpumap_kthread;
  VAR_37 = &VAR_5->xdp_cpumap_kthread;
  VAR_11 = FUNC_5(VAR_36, VAR_37);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   struct datarec *VAR_41 = &VAR_36->cpu[VAR_9];
   struct datarec *VAR_42 = &VAR_37->cpu[VAR_9];

   VAR_12 = FUNC_7(VAR_41, VAR_42, VAR_11);
   VAR_38 = FUNC_2(VAR_41, VAR_42, VAR_11);
   VAR_39 = FUNC_4(VAR_41, VAR_42, VAR_11);
   if (VAR_39 > 0)
    VAR_40 = "sched";
   if (VAR_12 > 0 || VAR_38 > 0)
    FUNC_10(VAR_34, "cpumap-kthread",
           VAR_9, VAR_12, VAR_38, VAR_39, VAR_40);
  }
  VAR_12 = FUNC_7(&VAR_36->total, &VAR_37->total, VAR_11);
  VAR_38 = FUNC_2(&VAR_36->total, &VAR_37->total, VAR_11);
  VAR_39 = FUNC_4(&VAR_36->total, &VAR_37->total, VAR_11);
  if (VAR_39 > 0)
   VAR_40 = "sched-sum";
  FUNC_10(VAR_35, "cpumap-kthread", "total", VAR_12, VAR_38, VAR_39, VAR_40);
 }


 {
  char *VAR_43 = "%-15s %-7d %'-12.0f %'-12.0f %'-10.2f %s %s\n";
  char *VAR_44 = "%-15s %-7s %'-12.0f %'-12.0f %'-10.2f %s %s\n";
  struct record *VAR_45, *VAR_46;
  double VAR_47, VAR_48, VAR_49;
  char *VAR_50 = "";
  char *VAR_51 = "";

  VAR_45 = &VAR_4->xdp_devmap_xmit;
  VAR_46 = &VAR_5->xdp_devmap_xmit;
  VAR_11 = FUNC_5(VAR_45, VAR_46);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   struct datarec *VAR_52 = &VAR_45->cpu[VAR_9];
   struct datarec *VAR_53 = &VAR_46->cpu[VAR_9];

   VAR_12 = FUNC_7(VAR_52, VAR_53, VAR_11);
   VAR_47 = FUNC_2(VAR_52, VAR_53, VAR_11);
   VAR_48 = FUNC_4(VAR_52, VAR_53, VAR_11);
   VAR_49 = FUNC_3(VAR_52, VAR_53, VAR_11);
   if (VAR_48 > 0) {
    VAR_50 = "bulk-average";
    VAR_48 = (VAR_12+VAR_47) / VAR_48;
   }
   if (VAR_49 > 0)
    VAR_51 = "drv-err";
   if (VAR_12 > 0 || VAR_47 > 0)
    FUNC_10(VAR_43, "devmap-xmit",
           VAR_9, VAR_12, VAR_47, VAR_48, VAR_50, VAR_51);
  }
  VAR_12 = FUNC_7(&VAR_45->total, &VAR_46->total, VAR_11);
  VAR_47 = FUNC_2(&VAR_45->total, &VAR_46->total, VAR_11);
  VAR_48 = FUNC_4(&VAR_45->total, &VAR_46->total, VAR_11);
  VAR_49 = FUNC_3(&VAR_45->total, &VAR_46->total, VAR_11);
  if (VAR_48 > 0) {
   VAR_50 = "bulk-average";
   VAR_48 = (VAR_12+VAR_47) / VAR_48;
  }
  if (VAR_49 > 0)
   VAR_51 = "drv-err";
  FUNC_10(VAR_44, "devmap-xmit", "total", VAR_12, VAR_47,
         VAR_48, VAR_50, VAR_51);
 }

 FUNC_10("\n");
}
