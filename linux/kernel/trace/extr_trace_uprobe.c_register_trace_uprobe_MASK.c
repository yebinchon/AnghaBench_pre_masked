
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_uprobe {int devent; int tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_uprobe*,struct trace_uprobe*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct trace_uprobe* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct trace_uprobe*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct trace_uprobe*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct trace_uprobe*) ;

__attribute__((used)) static int FUNC_13(struct trace_uprobe *VAR_3)
{
 struct trace_uprobe *VAR_4;
 int VAR_5;

 FUNC_4(&VAR_2);

 VAR_5 = FUNC_12(VAR_3);
 if (VAR_5)
  goto end;


 VAR_4 = FUNC_2(FUNC_11(&VAR_3->tp),
      FUNC_8(&VAR_3->tp));
 if (VAR_4) {
  if (FUNC_3(VAR_3) != FUNC_3(VAR_4)) {
   FUNC_10(0);
   FUNC_9(0, VAR_0);
   VAR_5 = -VAR_1;
  } else {
   VAR_5 = FUNC_0(VAR_3, VAR_4);
  }
  goto end;
 }

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5) {
  FUNC_6("Failed to register probe event(%d)\n", VAR_5);
  goto end;
 }

 FUNC_1(&VAR_3->devent);

end:
 FUNC_5(&VAR_2);

 return VAR_5;
}
