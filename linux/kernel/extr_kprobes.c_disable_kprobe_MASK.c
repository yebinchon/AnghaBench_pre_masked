
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int dummy; } ;


 scalar_t__ FUNC_0 (struct kprobe*) ;
 int FUNC_1 (struct kprobe*) ;
 struct kprobe* FUNC_2 (struct kprobe*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct kprobe *VAR_1)
{
 int VAR_2 = 0;
 struct kprobe *VAR_3;

 FUNC_3(&VAR_0);


 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_3))
  VAR_2 = FUNC_1(VAR_3);

 FUNC_4(&VAR_0);
 return VAR_2;
}
