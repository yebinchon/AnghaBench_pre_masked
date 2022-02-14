
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_kprobe {int devent; int tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct trace_kprobe*) ;
 int FUNC_1 (struct trace_kprobe*,struct trace_kprobe*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 struct trace_kprobe* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct trace_kprobe*) ;
 scalar_t__ FUNC_8 (struct trace_kprobe*) ;
 int FUNC_9 (struct trace_kprobe*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct trace_kprobe*) ;

__attribute__((used)) static int FUNC_15(struct trace_kprobe *VAR_4)
{
 struct trace_kprobe *VAR_5;
 int VAR_6;

 FUNC_4(&VAR_3);

 VAR_5 = FUNC_3(FUNC_13(&VAR_4->tp),
       FUNC_10(&VAR_4->tp));
 if (VAR_5) {
  if (FUNC_8(VAR_4) != FUNC_8(VAR_5)) {
   FUNC_12(0);
   FUNC_11(0, VAR_0);
   VAR_6 = -VAR_1;
  } else {
   VAR_6 = FUNC_1(VAR_4, VAR_5);
  }
  goto end;
 }


 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6) {
  FUNC_6("Failed to register probe event(%d)\n", VAR_6);
  goto end;
 }


 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 == -VAR_2 && !FUNC_9(VAR_4)) {
  FUNC_6("This probe might be able to register after target module is loaded. Continue.\n");
  VAR_6 = 0;
 }

 if (VAR_6 < 0)
  FUNC_14(VAR_4);
 else
  FUNC_2(&VAR_4->devent);

end:
 FUNC_5(&VAR_3);
 return VAR_6;
}
