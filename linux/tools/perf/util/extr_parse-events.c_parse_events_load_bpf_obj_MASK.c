
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_events_state {TYPE_1__* error; } ;
struct list_head {int dummy; } ;
struct bpf_object {int dummy; } ;
struct __add_bpf_event_param {struct list_head* member_2; struct list_head* member_1; struct parse_events_state* member_0; } ;
typedef int errbuf ;
struct TYPE_2__ {void* str; void* help; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_object*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bpf_object*,int ,struct __add_bpf_event_param*) ;
 int FUNC_3 (struct bpf_object*) ;
 int FUNC_4 (struct bpf_object*) ;
 int FUNC_5 (struct bpf_object*,int,char*,int) ;
 int FUNC_6 (struct bpf_object*,int,char*,int) ;
 int FUNC_7 (char*,int,char*) ;
 void* FUNC_8 (char*) ;

int FUNC_9(struct parse_events_state *VAR_4,
         struct list_head *VAR_5,
         struct bpf_object *VAR_6,
         struct list_head *VAR_7)
{
 int VAR_8;
 char VAR_9[VAR_0];
 struct __add_bpf_event_param VAR_10 = {VAR_4, VAR_5, VAR_7};
 static bool VAR_11 = 0;

 if (FUNC_0(VAR_6) || !VAR_6) {
  FUNC_7(VAR_9, sizeof(VAR_9),
    "Internal error: load bpf obj with NULL");
  VAR_8 = -VAR_1;
  goto errout;
 }






 if (!VAR_11) {
  FUNC_1(VAR_3);
  VAR_11 = 1;
 }

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_6(VAR_6, VAR_8, VAR_9, sizeof(VAR_9));
  goto errout;
 }

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8) {
  FUNC_5(VAR_6, VAR_8, VAR_9, sizeof(VAR_9));
  goto errout;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_2, &VAR_10);
 if (VAR_8) {
  FUNC_7(VAR_9, sizeof(VAR_9),
    "Attach events in BPF object failed");
  goto errout;
 }

 return 0;
errout:
 VAR_4->error->help = FUNC_8("(add -v to see detail)");
 VAR_4->error->str = FUNC_8(VAR_9);
 return VAR_8;
}
