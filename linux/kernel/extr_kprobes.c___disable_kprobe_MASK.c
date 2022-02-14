
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int flags; } ;


 int VAR_0 ;
 struct kprobe* FUNC_0 (int) ;
 int VAR_1 ;
 struct kprobe* FUNC_1 (struct kprobe*) ;
 scalar_t__ FUNC_2 (struct kprobe*) ;
 int FUNC_3 (struct kprobe*,int) ;
 int FUNC_4 (struct kprobe*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static struct kprobe *FUNC_6(struct kprobe *VAR_3)
{
 struct kprobe *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_5(VAR_4 == ((void*)0)))
  return FUNC_0(-VAR_0);

 if (!FUNC_4(VAR_3)) {

  if (VAR_3 != VAR_4)
   VAR_3->flags |= VAR_1;


  if (VAR_3 == VAR_4 || FUNC_2(VAR_4)) {





   if (!VAR_2) {
    VAR_5 = FUNC_3(VAR_4, 1);
    if (VAR_5) {
     VAR_3->flags &= ~VAR_1;
     return FUNC_0(VAR_5);
    }
   }
   VAR_4->flags |= VAR_1;
  }
 }

 return VAR_4;
}
