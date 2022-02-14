
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int flags; int pwqs; } ;
struct workqueue_attrs {int dummy; } ;
struct apply_wqattrs_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct apply_wqattrs_ctx*) ;
 int FUNC_2 (struct apply_wqattrs_ctx*) ;
 struct apply_wqattrs_ctx* FUNC_3 (struct workqueue_struct*,struct workqueue_attrs const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct workqueue_struct *VAR_5,
     const struct workqueue_attrs *VAR_6)
{
 struct apply_wqattrs_ctx *VAR_7;


 if (FUNC_0(!(VAR_5->flags & VAR_2)))
  return -VAR_0;


 if (!FUNC_4(&VAR_5->pwqs)) {
  if (FUNC_0(VAR_5->flags & VAR_4))
   return -VAR_0;

  VAR_5->flags &= ~VAR_3;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6);
 if (!VAR_7)
  return -VAR_1;


 FUNC_2(VAR_7);
 FUNC_1(VAR_7);

 return 0;
}
