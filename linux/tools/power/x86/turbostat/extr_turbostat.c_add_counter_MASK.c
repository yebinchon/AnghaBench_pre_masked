
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msr_counter {unsigned int msr_num; unsigned int width; int type; int format; int flags; struct msr_counter* next; int path; int name; } ;
typedef enum counter_type { ____Placeholder_counter_type } counter_type ;
typedef enum counter_scope { ____Placeholder_counter_scope } counter_scope ;
typedef enum counter_format { ____Placeholder_counter_format } counter_format ;
struct TYPE_2__ {int added_core_counters; int added_package_counters; struct msr_counter* pp; struct msr_counter* cp; int added_thread_counters; struct msr_counter* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct msr_counter* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int ) ;
 TYPE_1__ VAR_5 ;

int FUNC_5(unsigned int VAR_6, char *VAR_7, char *VAR_8,
 unsigned int VAR_9, enum counter_scope VAR_10,
 enum counter_type VAR_11, enum counter_format VAR_12, int VAR_13)
{
 struct msr_counter *VAR_14;

 VAR_14 = FUNC_0(1, sizeof(struct msr_counter));
 if (VAR_14 == ((void*)0)) {
  FUNC_3("calloc");
  FUNC_1(1);
 }

 VAR_14->msr_num = VAR_6;
 FUNC_4(VAR_14->name, VAR_8, VAR_2);
 if (VAR_7)
  FUNC_4(VAR_14->path, VAR_7, VAR_3);
 VAR_14->width = VAR_9;
 VAR_14->type = VAR_11;
 VAR_14->format = VAR_12;
 VAR_14->flags = VAR_13;

 switch (VAR_10) {

 case 129:
  VAR_14->next = VAR_5.tp;
  VAR_5.tp = VAR_14;
  VAR_5.added_thread_counters++;
  if (VAR_5.added_thread_counters > VAR_1) {
   FUNC_2(VAR_4, "exceeded max %d added thread counters\n",
    VAR_0);
   FUNC_1(-1);
  }
  break;

 case 130:
  VAR_14->next = VAR_5.cp;
  VAR_5.cp = VAR_14;
  VAR_5.added_core_counters++;
  if (VAR_5.added_core_counters > VAR_0) {
   FUNC_2(VAR_4, "exceeded max %d added core counters\n",
    VAR_0);
   FUNC_1(-1);
  }
  break;

 case 128:
  VAR_14->next = VAR_5.pp;
  VAR_5.pp = VAR_14;
  VAR_5.added_package_counters++;
  if (VAR_5.added_package_counters > VAR_0) {
   FUNC_2(VAR_4, "exceeded max %d added package counters\n",
    VAR_0);
   FUNC_1(-1);
  }
  break;
 }

 return 0;
}
