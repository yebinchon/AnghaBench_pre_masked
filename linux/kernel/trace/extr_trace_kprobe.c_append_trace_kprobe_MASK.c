
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_kprobe {int devent; int tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct trace_kprobe*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct trace_kprobe*,struct trace_kprobe*) ;
 int FUNC_4 (struct trace_kprobe*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct trace_kprobe *VAR_4, struct trace_kprobe *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_6(&VAR_4->tp, &VAR_5->tp);
 if (VAR_6) {

  FUNC_8(VAR_6 + 1);
  FUNC_7(0, VAR_0);
  return -VAR_1;
 }
 if (FUNC_3(VAR_5, VAR_4)) {
  FUNC_8(0);
  FUNC_7(0, VAR_3);
  return -VAR_1;
 }


 VAR_6 = FUNC_5(&VAR_4->tp, &VAR_5->tp);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 == -VAR_2 && !FUNC_4(VAR_4)) {
  FUNC_2("This probe might be able to register after target module is loaded. Continue.\n");
  VAR_6 = 0;
 }

 if (VAR_6)
  FUNC_9(&VAR_4->tp);
 else
  FUNC_1(&VAR_4->devent);

 return VAR_6;
}
