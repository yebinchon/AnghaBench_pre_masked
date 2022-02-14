
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_meta_ops {int (* alloc ) (struct tcf_meta_info*,void*,int ) ;} ;
struct tcf_meta_info {int metalist; struct tcf_meta_ops const* ops; int metaid; } ;
struct tcf_ife_info {int tcf_lock; int metalist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tcf_meta_info*) ;
 struct tcf_meta_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tcf_meta_info*,void*,int ) ;

__attribute__((used)) static int FUNC_6(const struct tcf_meta_ops *VAR_3,
     struct tcf_ife_info *VAR_4, u32 VAR_5, void *VAR_6,
     int VAR_7, bool VAR_8, bool VAR_9)
{
 struct tcf_meta_info *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_8 ? VAR_1 : VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->metaid = VAR_5;
 VAR_10->ops = VAR_3;
 if (VAR_7 > 0) {
  VAR_11 = VAR_3->alloc(VAR_10, VAR_6, VAR_8 ? VAR_1 : VAR_2);
  if (VAR_11 != 0) {
   FUNC_0(VAR_10);
   return VAR_11;
  }
 }

 if (VAR_9)
  FUNC_3(&VAR_4->tcf_lock);
 FUNC_2(&VAR_10->metalist, &VAR_4->metalist);
 if (VAR_9)
  FUNC_4(&VAR_4->tcf_lock);

 return VAR_11;
}
