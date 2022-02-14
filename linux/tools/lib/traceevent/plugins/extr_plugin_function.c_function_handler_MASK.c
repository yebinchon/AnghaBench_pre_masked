
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct tep_record {int cpu; } ;
struct tep_handle {int dummy; } ;
struct tep_event {struct tep_handle* tep; } ;
struct TYPE_4__ {scalar_t__ set; } ;
struct TYPE_3__ {scalar_t__ set; } ;


 int FUNC_0 (char const*,char const*,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_1 (struct tep_handle*,unsigned long long) ;
 scalar_t__ FUNC_2 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,unsigned long long*,int) ;
 int FUNC_3 (struct trace_seq*,char*,...) ;
 int FUNC_4 (struct trace_seq*,char) ;

__attribute__((used)) static int FUNC_5(struct trace_seq *VAR_2, struct tep_record *VAR_3,
       struct tep_event *VAR_4, void *VAR_5)
{
 struct tep_handle *VAR_6 = VAR_4->tep;
 unsigned long long VAR_7;
 unsigned long long VAR_8;
 const char *VAR_9;
 const char *VAR_10;
 int VAR_11 = 0;

 if (FUNC_2(VAR_2, VAR_4, "ip", VAR_3, &VAR_7, 1))
  return FUNC_4(VAR_2, '!');

 VAR_9 = FUNC_1(VAR_6, VAR_7);

 if (FUNC_2(VAR_2, VAR_4, "parent_ip", VAR_3, &VAR_8, 1))
  return FUNC_4(VAR_2, '!');

 VAR_10 = FUNC_1(VAR_6, VAR_8);

 if (VAR_10 && VAR_0->set)
  VAR_11 = FUNC_0(VAR_10, VAR_9, VAR_3->cpu);

 FUNC_3(VAR_2, "%*s", VAR_11*3, "");

 if (VAR_9)
  FUNC_3(VAR_2, "%s", VAR_9);
 else
  FUNC_3(VAR_2, "0x%llx", VAR_7);

 if (VAR_1->set) {
  FUNC_3(VAR_2, " <-- ");
  if (VAR_10)
   FUNC_3(VAR_2, "%s", VAR_10);
  else
   FUNC_3(VAR_2, "0x%llx", VAR_8);
 }

 return 0;
}
