
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kprobe* FUNC_0 (struct kprobe*) ;
 int FUNC_1 (struct kprobe*) ;
 scalar_t__ FUNC_2 (struct kprobe*) ;
 scalar_t__ FUNC_3 (struct kprobe*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct kprobe *VAR_4)
{
 int VAR_5 = 0;
 struct kprobe *VAR_6;

 FUNC_4(&VAR_2);


 VAR_6 = FUNC_0(VAR_4);
 if (FUNC_6(VAR_6 == ((void*)0))) {
  VAR_5 = -VAR_0;
  goto out;
 }

 if (FUNC_3(VAR_4)) {

  VAR_5 = -VAR_0;
  goto out;
 }

 if (VAR_6 != VAR_4)
  VAR_4->flags &= ~VAR_1;

 if (!VAR_3 && FUNC_2(VAR_6)) {
  VAR_6->flags &= ~VAR_1;
  VAR_5 = FUNC_1(VAR_6);
  if (VAR_5)
   VAR_6->flags |= VAR_1;
 }
out:
 FUNC_5(&VAR_2);
 return VAR_5;
}
