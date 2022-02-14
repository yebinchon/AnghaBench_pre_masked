
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_nh_notifier_info {int info; struct fib_nh* fib_nh; } ;
struct fib_nh {int fib_nh_flags; int fib_nh_dev; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fib_nh *VAR_3,
     enum fib_event_type VAR_4)
{
 bool VAR_5 = FUNC_2(VAR_3->fib_nh_dev);
 struct fib_nh_notifier_info VAR_6 = {
  .fib_nh = VAR_3,
 };

 switch (VAR_4) {
 case 129:
  if (VAR_3->fib_nh_flags & VAR_1)
   break;
  if (VAR_5 && VAR_3->fib_nh_flags & VAR_2)
   break;
  return FUNC_0(FUNC_1(VAR_3->fib_nh_dev), VAR_4,
        &VAR_6.info);
 case 128:
  if ((VAR_5 && VAR_3->fib_nh_flags & VAR_2) ||
      (VAR_3->fib_nh_flags & VAR_1))
   return FUNC_0(FUNC_1(VAR_3->fib_nh_dev),
         VAR_4, &VAR_6.info);
 default:
  break;
 }

 return VAR_0;
}
