
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datarec {int dummy; } ;
struct record {struct datarec total; struct datarec* cpu; } ;
struct stats_record {struct record exception; struct record redir_err; struct record kthread; struct record* enq; struct record rx_cnt; } ;


 int VAR_0 ;
 unsigned int FUNC_0 () ;
 double FUNC_1 (struct datarec*,struct datarec*,double) ;
 double FUNC_2 (struct datarec*,struct datarec*,double) ;
 double FUNC_3 (struct record*,struct record*) ;
 double FUNC_4 (struct datarec*,struct datarec*,double) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct stats_record *VAR_2,
   struct stats_record *VAR_3,
   char *VAR_4)
{
 unsigned int VAR_5 = FUNC_0();
 double VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 struct record *VAR_9, *VAR_10;
 int VAR_11;
 double VAR_12;
 int VAR_13;


 FUNC_6("Running XDP/eBPF prog_name:%s\n", VAR_4);
 FUNC_6("%-15s %-7s %-14s %-11s %-9s\n",
        "XDP-cpumap", "CPU:to", "pps", "drop-pps", "extra-info");


 {
  char *VAR_14 = "%-15s %-7d %'-14.0f %'-11.0f %'-10.0f %s\n";
  char *VAR_15 = "%-15s %-7s %'-14.0f %'-11.0f\n";
  char *VAR_16 = "";

  VAR_9 = &VAR_2->rx_cnt;
  VAR_10 = &VAR_3->rx_cnt;
  VAR_12 = FUNC_3(VAR_9, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   struct datarec *VAR_17 = &VAR_9->cpu[VAR_13];
   struct datarec *VAR_18 = &VAR_10->cpu[VAR_13];

   VAR_6 = FUNC_4(VAR_17, VAR_18, VAR_12);
   VAR_7 = FUNC_1(VAR_17, VAR_18, VAR_12);
   VAR_8 = FUNC_2(VAR_17, VAR_18, VAR_12);
   if (VAR_8 > 0)
    VAR_16 = "cpu-dest/err";
   if (VAR_6 > 0)
    FUNC_6(VAR_14, "XDP-RX",
     VAR_13, VAR_6, VAR_7, VAR_8, VAR_16);
  }
  VAR_6 = FUNC_4(&VAR_9->total, &VAR_10->total, VAR_12);
  VAR_7 = FUNC_1(&VAR_9->total, &VAR_10->total, VAR_12);
  VAR_8 = FUNC_2(&VAR_9->total, &VAR_10->total, VAR_12);
  FUNC_6(VAR_15, "XDP-RX", "total", VAR_6, VAR_7);
 }


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  char *VAR_19 = "%-15s %3d:%-3d %'-14.0f %'-11.0f %'-10.2f %s\n";
  char *VAR_20 = "%-15s %3s:%-3d %'-14.0f %'-11.0f %'-10.2f %s\n";
  char *VAR_21 = "";

  VAR_9 = &VAR_2->enq[VAR_11];
  VAR_10 = &VAR_3->enq[VAR_11];
  VAR_12 = FUNC_3(VAR_9, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   struct datarec *VAR_22 = &VAR_9->cpu[VAR_13];
   struct datarec *VAR_23 = &VAR_10->cpu[VAR_13];

   VAR_6 = FUNC_4(VAR_22, VAR_23, VAR_12);
   VAR_7 = FUNC_1(VAR_22, VAR_23, VAR_12);
   VAR_8 = FUNC_2(VAR_22, VAR_23, VAR_12);
   if (VAR_8 > 0) {
    VAR_21 = "bulk-average";
    VAR_8 = VAR_6 / VAR_8;
   }
   if (VAR_6 > 0)
    FUNC_6(VAR_19, "cpumap-enqueue",
           VAR_13, VAR_11, VAR_6, VAR_7, VAR_8, VAR_21);
  }
  VAR_6 = FUNC_4(&VAR_9->total, &VAR_10->total, VAR_12);
  if (VAR_6 > 0) {
   VAR_7 = FUNC_1(&VAR_9->total, &VAR_10->total, VAR_12);
   VAR_8 = FUNC_2(&VAR_9->total, &VAR_10->total, VAR_12);
   if (VAR_8 > 0) {
    VAR_21 = "bulk-average";
    VAR_8 = VAR_6 / VAR_8;
   }
   FUNC_6(VAR_20, "cpumap-enqueue",
          "sum", VAR_11, VAR_6, VAR_7, VAR_8, VAR_21);
  }
 }


 {
  char *VAR_24 = "%-15s %-7d %'-14.0f %'-11.0f %'-10.0f %s\n";
  char *VAR_25 = "%-15s %-7s %'-14.0f %'-11.0f %'-10.0f %s\n";
  char *VAR_26 = "";

  VAR_9 = &VAR_2->kthread;
  VAR_10 = &VAR_3->kthread;
  VAR_12 = FUNC_3(VAR_9, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   struct datarec *VAR_27 = &VAR_9->cpu[VAR_13];
   struct datarec *VAR_28 = &VAR_10->cpu[VAR_13];

   VAR_6 = FUNC_4(VAR_27, VAR_28, VAR_12);
   VAR_7 = FUNC_1(VAR_27, VAR_28, VAR_12);
   VAR_8 = FUNC_2(VAR_27, VAR_28, VAR_12);
   if (VAR_8 > 0)
    VAR_26 = "sched";
   if (VAR_6 > 0)
    FUNC_6(VAR_24, "cpumap_kthread",
           VAR_13, VAR_6, VAR_7, VAR_8, VAR_26);
  }
  VAR_6 = FUNC_4(&VAR_9->total, &VAR_10->total, VAR_12);
  VAR_7 = FUNC_1(&VAR_9->total, &VAR_10->total, VAR_12);
  VAR_8 = FUNC_2(&VAR_9->total, &VAR_10->total, VAR_12);
  if (VAR_8 > 0)
   VAR_26 = "sched-sum";
  FUNC_6(VAR_25, "cpumap_kthread", "total", VAR_6, VAR_7, VAR_8, VAR_26);
 }


 {
  char *VAR_29 = "%-15s %-7d %'-14.0f %'-11.0f\n";
  char *VAR_30 = "%-15s %-7s %'-14.0f %'-11.0f\n";

  VAR_9 = &VAR_2->redir_err;
  VAR_10 = &VAR_3->redir_err;
  VAR_12 = FUNC_3(VAR_9, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   struct datarec *VAR_31 = &VAR_9->cpu[VAR_13];
   struct datarec *VAR_32 = &VAR_10->cpu[VAR_13];

   VAR_6 = FUNC_4(VAR_31, VAR_32, VAR_12);
   VAR_7 = FUNC_1(VAR_31, VAR_32, VAR_12);
   if (VAR_6 > 0)
    FUNC_6(VAR_29, "redirect_err", VAR_13, VAR_6, VAR_7);
  }
  VAR_6 = FUNC_4(&VAR_9->total, &VAR_10->total, VAR_12);
  VAR_7 = FUNC_1(&VAR_9->total, &VAR_10->total, VAR_12);
  FUNC_6(VAR_30, "redirect_err", "total", VAR_6, VAR_7);
 }


 {
  char *VAR_33 = "%-15s %-7d %'-14.0f %'-11.0f\n";
  char *VAR_34 = "%-15s %-7s %'-14.0f %'-11.0f\n";

  VAR_9 = &VAR_2->exception;
  VAR_10 = &VAR_3->exception;
  VAR_12 = FUNC_3(VAR_9, VAR_10);
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   struct datarec *VAR_35 = &VAR_9->cpu[VAR_13];
   struct datarec *VAR_36 = &VAR_10->cpu[VAR_13];

   VAR_6 = FUNC_4(VAR_35, VAR_36, VAR_12);
   VAR_7 = FUNC_1(VAR_35, VAR_36, VAR_12);
   if (VAR_6 > 0)
    FUNC_6(VAR_33, "xdp_exception", VAR_13, VAR_6, VAR_7);
  }
  VAR_6 = FUNC_4(&VAR_9->total, &VAR_10->total, VAR_12);
  VAR_7 = FUNC_1(&VAR_9->total, &VAR_10->total, VAR_12);
  FUNC_6(VAR_34, "xdp_exception", "total", VAR_6, VAR_7);
 }

 FUNC_6("\n");
 FUNC_5(VAR_1);
}
