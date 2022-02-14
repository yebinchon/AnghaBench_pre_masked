
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_arg {struct fetch_insn* code; } ;
struct fetch_insn {scalar_t__ op; unsigned long immediate; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,long*) ;

int FUNC_3(struct probe_arg *VAR_5)
{
 struct fetch_insn *VAR_6 = VAR_5->code;
 long VAR_7;
 char *VAR_8;
 char VAR_9;
 int VAR_10 = 0;

 while (VAR_6 && VAR_6->op != VAR_3) {
  if (VAR_6->op == VAR_2) {
   if (VAR_6[1].op != VAR_4)
    return -VAR_0;

   VAR_8 = FUNC_1(VAR_6->data, "+-");
   if (VAR_8)
    VAR_9 = *VAR_8;
   VAR_10 = FUNC_2(VAR_6->data,
            &VAR_7);
   if (VAR_10)
    return VAR_10;

   VAR_6[1].immediate =
    (unsigned long)FUNC_0(VAR_6->data);
   if (VAR_8)
    *VAR_8 = VAR_9;
   if (!VAR_6[1].immediate)
    return -VAR_1;
   VAR_6[1].immediate += VAR_7;
  }
  VAR_6++;
 }
 return 0;
}
