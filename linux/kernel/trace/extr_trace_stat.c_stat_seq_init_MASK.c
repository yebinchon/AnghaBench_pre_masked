
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_stat {scalar_t__ stat_cmp; void* (* stat_next ) (void*,int) ;void* (* stat_start ) (struct tracer_stat*) ;} ;
struct rb_root {int dummy; } ;
struct stat_session {int stat_mutex; struct rb_root stat_root; struct tracer_stat* ts; } ;


 int FUNC_0 (struct stat_session*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rb_root*,void*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (struct tracer_stat*) ;
 void* FUNC_5 (void*,int) ;

__attribute__((used)) static int FUNC_6(struct stat_session *VAR_1)
{
 struct tracer_stat *VAR_2 = VAR_1->ts;
 struct rb_root *VAR_3 = &VAR_1->stat_root;
 void *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 FUNC_2(&VAR_1->stat_mutex);
 FUNC_0(VAR_1);

 if (!VAR_2->stat_cmp)
  VAR_2->stat_cmp = VAR_0;

 VAR_4 = VAR_2->stat_start(VAR_2);
 if (!VAR_4)
  goto exit;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2->stat_cmp);
 if (VAR_5)
  goto exit;




 for (VAR_6 = 1; ; VAR_6++) {
  VAR_4 = VAR_2->stat_next(VAR_4, VAR_6);


  if (!VAR_4)
   break;

  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2->stat_cmp);
  if (VAR_5)
   goto exit_free_rbtree;
 }

exit:
 FUNC_3(&VAR_1->stat_mutex);
 return VAR_5;

exit_free_rbtree:
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->stat_mutex);
 return VAR_5;
}
