
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_events_state {TYPE_1__* error; } ;
struct list_head {int dummy; } ;
struct bpf_object {int dummy; } ;
typedef int errbuf ;
struct TYPE_2__ {void* str; void* help; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_object*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_object*) ;
 struct bpf_object* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,int,char*,int) ;
 int FUNC_5 (int *,struct list_head*) ;
 int VAR_2 ;
 int FUNC_6 (struct parse_events_state*,struct bpf_object*,int *) ;
 int FUNC_7 (struct parse_events_state*,struct list_head*,struct bpf_object*,struct list_head*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (struct list_head*,int *) ;
 void* FUNC_10 (char*) ;

int FUNC_11(struct parse_events_state *VAR_3,
     struct list_head *VAR_4,
     char *VAR_5,
     bool VAR_6,
     struct list_head *VAR_7)
{
 int VAR_8;
 struct bpf_object *VAR_9;
 FUNC_1(VAR_2);

 if (VAR_7)
  FUNC_9(VAR_7, &VAR_2);

 VAR_9 = FUNC_3(VAR_5, VAR_6);
 if (FUNC_0(VAR_9)) {
  char VAR_10[VAR_0];

  VAR_8 = FUNC_2(VAR_9);

  if (VAR_8 == -VAR_1)
   FUNC_8(VAR_10, sizeof(VAR_10),
     "BPF support is not compiled");
  else
   FUNC_4(VAR_5,
         VAR_6,
         -VAR_8, VAR_10,
         sizeof(VAR_10));

  VAR_3->error->help = FUNC_10("(add -v to see detail)");
  VAR_3->error->str = FUNC_10(VAR_10);
  return VAR_8;
 }

 VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_9, VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_6(VAR_3, VAR_9, &VAR_2);





 if (VAR_7)
  FUNC_5(&VAR_2, VAR_7);
 return VAR_8;
}
