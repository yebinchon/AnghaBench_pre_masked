
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {TYPE_3__ kp; } ;
struct TYPE_4__ {int nr_args; int * args; } ;
struct trace_kprobe {TYPE_2__ rp; TYPE_1__ tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct trace_kprobe*) ;
 scalar_t__ FUNC_5 (struct trace_kprobe*) ;
 int FUNC_6 (struct trace_kprobe*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct trace_kprobe*) ;

__attribute__((used)) static int FUNC_10(struct trace_kprobe *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  return VAR_5;

 if (FUNC_4(VAR_3))
  return -VAR_0;

 if (FUNC_9(VAR_3)) {
  FUNC_0("Could not probe notrace function %s\n",
   FUNC_6(VAR_3));
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->tp.nr_args; VAR_4++) {
  VAR_5 = FUNC_8(&VAR_3->tp.args[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }


 if (FUNC_7(&VAR_3->tp))
  VAR_3->rp.kp.flags &= ~VAR_1;
 else
  VAR_3->rp.kp.flags |= VAR_1;

 if (FUNC_5(VAR_3))
  VAR_5 = FUNC_2(&VAR_3->rp);
 else
  VAR_5 = FUNC_1(&VAR_3->rp.kp);

 return VAR_5;
}
