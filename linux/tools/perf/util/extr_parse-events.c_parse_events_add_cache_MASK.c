
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; int type; } ;
struct parse_events_error {int dummy; } ;
struct list_head {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct list_head*,int*,struct perf_event_attr*,char*,int *) ;
 scalar_t__ FUNC_2 (struct perf_event_attr*,struct list_head*,struct parse_events_error*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_3 (struct list_head*) ;
 scalar_t__ FUNC_4 (struct list_head*,int *) ;
 int FUNC_5 (struct perf_event_attr*,int ,int) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,int,char*,char*) ;

int FUNC_9(struct list_head *VAR_14, int *VAR_15,
      char *VAR_16, char *VAR_17, char *VAR_18,
      struct parse_events_error *VAR_19,
      struct list_head *VAR_20)
{
 struct perf_event_attr VAR_21;
 FUNC_0(VAR_10);
 char VAR_22[VAR_2], *VAR_23;
 int VAR_24 = -1, VAR_25 = -1, VAR_26 = -1;
 char *VAR_27[2] = { VAR_17, VAR_18 };
 int VAR_28, VAR_29;





 VAR_24 = FUNC_6(VAR_16, VAR_11,
       VAR_3);
 if (VAR_24 == -1)
  return -VAR_0;

 VAR_23 = FUNC_3(VAR_20);
 VAR_29 = FUNC_8(VAR_22, VAR_2, "%s", VAR_16);

 for (VAR_28 = 0; (VAR_28 < 2) && (VAR_27[VAR_28]); VAR_28++) {
  char *VAR_30 = VAR_27[VAR_28];

  VAR_29 += FUNC_8(VAR_22 + VAR_29, VAR_2 - VAR_29, "-%s", VAR_30);

  if (VAR_25 == -1) {
   VAR_25 = FUNC_6(VAR_30, VAR_12,
       VAR_4);
   if (VAR_25 >= 0) {
    if (!FUNC_7(VAR_24, VAR_25))
     return -VAR_0;
    continue;
   }
  }

  if (VAR_26 == -1) {
   VAR_26 = FUNC_6(VAR_30, VAR_13,
           VAR_7);
   if (VAR_26 >= 0)
    continue;
  }
 }




 if (VAR_25 == -1)
  VAR_25 = VAR_5;




 if (VAR_26 == -1)
  VAR_26 = VAR_6;

 FUNC_5(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.config = VAR_24 | (VAR_25 << 8) | (VAR_26 << 16);
 VAR_21.type = VAR_8;

 if (VAR_20) {
  if (FUNC_2(&VAR_21, VAR_20, VAR_19,
    VAR_9))
   return -VAR_0;

  if (FUNC_4(VAR_20, &VAR_10))
   return -VAR_1;
 }
 return FUNC_1(VAR_14, VAR_15, &VAR_21, VAR_23 ? : VAR_22, &VAR_10);
}
