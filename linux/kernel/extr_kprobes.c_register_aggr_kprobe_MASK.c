
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int flags; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kprobe*,struct kprobe*) ;
 struct kprobe* FUNC_1 (struct kprobe*) ;
 int FUNC_2 (struct kprobe*) ;
 int FUNC_3 (struct kprobe*) ;
 int FUNC_4 (struct kprobe*,struct kprobe*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct kprobe*,struct kprobe*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct kprobe*) ;
 scalar_t__ FUNC_11 (struct kprobe*) ;
 scalar_t__ FUNC_12 (struct kprobe*) ;
 scalar_t__ FUNC_13 (struct kprobe*) ;
 int VAR_3 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct kprobe*) ;
 int FUNC_18 (struct kprobe*) ;
 int FUNC_19 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_20(struct kprobe *VAR_5, struct kprobe *VAR_6)
{
 int VAR_7 = 0;
 struct kprobe *VAR_8 = VAR_5;

 FUNC_5();


 FUNC_8();
 FUNC_15(&VAR_4);

 if (!FUNC_10(VAR_5)) {

  VAR_8 = FUNC_1(VAR_5);
  if (!VAR_8) {
   VAR_7 = -VAR_0;
   goto out;
  }
  FUNC_7(VAR_8, VAR_5);
 } else if (FUNC_13(VAR_8)) {

  VAR_7 = FUNC_18(VAR_8);
  if (VAR_7)
   goto out;
 }

 if (FUNC_12(VAR_8)) {






  VAR_7 = FUNC_2(VAR_8);
  if (VAR_7)





   goto out;


  FUNC_17(VAR_8);





  VAR_8->flags = (VAR_8->flags & ~VAR_2)
       | VAR_1;
 }


 FUNC_4(VAR_8, VAR_6);
 VAR_7 = FUNC_0(VAR_8, VAR_6);

out:
 FUNC_16(&VAR_4);
 FUNC_9();
 FUNC_6();

 if (VAR_7 == 0 && FUNC_11(VAR_8) && !FUNC_11(VAR_6)) {
  VAR_8->flags &= ~VAR_1;
  if (!VAR_3) {

   VAR_7 = FUNC_3(VAR_8);
   if (VAR_7) {
    VAR_8->flags |= VAR_1;
    FUNC_14(&VAR_6->list);
    FUNC_19();
   }
  }
 }
 return VAR_7;
}
