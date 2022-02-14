
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct saved_value {int metric_other; int metric_total; int stats; } ;
struct runtime_stat {int dummy; } ;
struct evsel {struct evsel* metric_leader; scalar_t__ collect_stat; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (struct evsel*) ;
 scalar_t__ FUNC_1 (struct evsel*) ;
 scalar_t__ FUNC_2 (struct evsel*,int ,int ) ;
 scalar_t__ FUNC_3 (struct evsel*,int ) ;
 struct saved_value* FUNC_4 (struct evsel*,int,int,int ,int ,struct runtime_stat*) ;
 int FUNC_5 (struct runtime_stat*,int ,int,int,int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct evsel *VAR_44, u64 VAR_45,
        int VAR_46, struct runtime_stat *VAR_47)
{
 int VAR_48 = FUNC_0(VAR_44);
 u64 VAR_49 = VAR_45;
 struct saved_value *VAR_50;

 VAR_45 *= VAR_44->scale;

 if (FUNC_1(VAR_44))
  FUNC_5(VAR_47, VAR_28, 0, VAR_46, VAR_49);
 else if (FUNC_2(VAR_44, VAR_3, VAR_12))
  FUNC_5(VAR_47, VAR_19, VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_1))
  FUNC_5(VAR_47, VAR_20, VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_43))
  FUNC_5(VAR_47, VAR_37, VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_2))
  FUNC_5(VAR_47, VAR_22, VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_42))
  FUNC_5(VAR_47, VAR_36,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_40))
  FUNC_5(VAR_47, VAR_34,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_41))
  FUNC_5(VAR_47, VAR_35,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_38))
  FUNC_5(VAR_47, VAR_32,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_39))
  FUNC_5(VAR_47, VAR_33,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_3, VAR_14))
  FUNC_5(VAR_47, VAR_31,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_3, VAR_13))
  FUNC_5(VAR_47, VAR_30,
        VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_3, VAR_4))
  FUNC_5(VAR_47, VAR_17, VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_3, VAR_11))
  FUNC_5(VAR_47, VAR_18, VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_5, VAR_8))
  FUNC_5(VAR_47, VAR_24, VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_5, VAR_9))
  FUNC_5(VAR_47, VAR_25, VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_5, VAR_10))
  FUNC_5(VAR_47, VAR_26, VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_5, VAR_6))
  FUNC_5(VAR_47, VAR_21, VAR_48, VAR_46, VAR_45);
 else if (FUNC_2(VAR_44, VAR_5, VAR_7))
  FUNC_5(VAR_47, VAR_23, VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_15))
  FUNC_5(VAR_47, VAR_29, VAR_48, VAR_46, VAR_45);
 else if (FUNC_3(VAR_44, VAR_0))
  FUNC_5(VAR_47, VAR_16, VAR_48, VAR_46, VAR_45);

 if (VAR_44->collect_stat) {
  VAR_50 = FUNC_4(VAR_44, VAR_46, 1, VAR_27, 0, VAR_47);
  FUNC_6(&VAR_50->stats, VAR_45);
  if (VAR_44->metric_leader)
   VAR_50->metric_total += VAR_45;
 } else if (VAR_44->metric_leader) {
  VAR_50 = FUNC_4(VAR_44->metric_leader,
           VAR_46, 1, VAR_27, 0, VAR_47);
  VAR_50->metric_total += VAR_45;
  VAR_50->metric_other++;
 }
}
