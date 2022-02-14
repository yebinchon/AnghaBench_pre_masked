
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct datarec {int dummy; } ;
struct record {struct datarec total; struct datarec* cpu; } ;
struct stats_record {struct record* rxq; struct record stats; } ;
typedef int __u32 ;
struct TYPE_2__ {unsigned int max_entries; } ;


 char* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 unsigned int FUNC_2 () ;
 double FUNC_3 (struct datarec*,struct datarec*,double) ;
 double FUNC_4 (struct record*,struct record*) ;
 double FUNC_5 (struct datarec*,struct datarec*,double) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct stats_record *VAR_3,
   struct stats_record *VAR_4,
   int VAR_5, __u32 VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_2)->max_entries;
 unsigned int VAR_8 = FUNC_2();
 double VAR_9 = 0, VAR_10 = 0;
 struct record *VAR_11, *VAR_12;
 double VAR_13;
 int VAR_14;
 int VAR_15;


 FUNC_7("\nRunning XDP on dev:%s (ifindex:%d) action:%s options:%s\n",
        VAR_1, VAR_0, FUNC_0(VAR_5), FUNC_6(VAR_6));


 {
  char *VAR_16 = "%-15s %-7d %'-11.0f %'-10.0f %s\n";
  char *VAR_17 = "%-15s %-7s %'-11.0f\n";
  char *VAR_18 = "";

  FUNC_7("%-15s %-7s %-11s %-11s\n",
         "XDP stats", "CPU", "pps", "issue-pps");

  VAR_11 = &VAR_3->stats;
  VAR_12 = &VAR_4->stats;
  VAR_13 = FUNC_4(VAR_11, VAR_12);
  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
   struct datarec *VAR_19 = &VAR_11->cpu[VAR_15];
   struct datarec *VAR_20 = &VAR_12->cpu[VAR_15];

   VAR_9 = FUNC_5 (VAR_19, VAR_20, VAR_13);
   VAR_10 = FUNC_3(VAR_19, VAR_20, VAR_13);
   if (VAR_10 > 0)
    VAR_18 = "invalid-ifindex";
   if (VAR_9 > 0)
    FUNC_7(VAR_16, "XDP-RX CPU",
     VAR_15, VAR_9, VAR_10, VAR_18);
  }
  VAR_9 = FUNC_5 (&VAR_11->total, &VAR_12->total, VAR_13);
  VAR_10 = FUNC_3(&VAR_11->total, &VAR_12->total, VAR_13);
  FUNC_7(VAR_17, "XDP-RX CPU", "total", VAR_9, VAR_10);
 }


 FUNC_7("\n%-15s %-7s %-11s %-11s\n",
        "RXQ stats", "RXQ:CPU", "pps", "issue-pps");

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  char *VAR_21 = "%-15s %3d:%-3d %'-11.0f %'-10.0f %s\n";
  char *VAR_22 = "%-15s %3d:%-3s %'-11.0f\n";
  char *VAR_23 = "";
  int VAR_24 = VAR_14;


  if (VAR_24 == VAR_7 - 1)
   VAR_24 = -1;

  VAR_11 = &VAR_3->rxq[VAR_14];
  VAR_12 = &VAR_4->rxq[VAR_14];
  VAR_13 = FUNC_4(VAR_11, VAR_12);
  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
   struct datarec *VAR_25 = &VAR_11->cpu[VAR_15];
   struct datarec *VAR_26 = &VAR_12->cpu[VAR_15];

   VAR_9 = FUNC_5 (VAR_25, VAR_26, VAR_13);
   VAR_10 = FUNC_3(VAR_25, VAR_26, VAR_13);
   if (VAR_10 > 0) {
    if (VAR_24 == -1)
     VAR_23 = "map-overflow-RXQ";
    else
     VAR_23 = "err";
   }
   if (VAR_9 > 0)
    FUNC_7(VAR_21, "rx_queue_index",
           VAR_24, VAR_15, VAR_9, VAR_10, VAR_23);
  }
  VAR_9 = FUNC_5 (&VAR_11->total, &VAR_12->total, VAR_13);
  VAR_10 = FUNC_3(&VAR_11->total, &VAR_12->total, VAR_13);
  if (VAR_9 || VAR_10)
   FUNC_7(VAR_22, "rx_queue_index", VAR_24, "sum", VAR_9, VAR_10);
 }
}
