
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int cpu; int size; void* data; } ;
struct tep_event {int tep; } ;
typedef int record ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct tep_record*,int ,int) ;
 int FUNC_1 (int ,struct trace_seq*,struct tep_record*,char*,int ) ;
 int FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,int *) ;
 int FUNC_4 (struct trace_seq*) ;

void FUNC_5(struct tep_event *VAR_1,
      int VAR_2, void *VAR_3, int VAR_4, FILE *VAR_5)
{
 struct tep_record VAR_6;
 struct trace_seq VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cpu = VAR_2;
 VAR_6.size = VAR_4;
 VAR_6.data = VAR_3;

 FUNC_4(&VAR_7);
 FUNC_1(VAR_1->tep, &VAR_7, &VAR_6, "%s", VAR_0);
 FUNC_3(&VAR_7, VAR_5);
 FUNC_2(&VAR_7);
}
