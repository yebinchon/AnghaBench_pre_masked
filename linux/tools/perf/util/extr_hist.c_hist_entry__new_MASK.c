
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry_ops {int (* free ) (struct hist_entry*) ;struct hist_entry* (* new ) (size_t) ;} ;
struct hist_entry {struct hist_entry_ops* ops; } ;
struct callchain_root {int dummy; } ;
struct TYPE_2__ {scalar_t__ use_callchain; } ;


 struct hist_entry_ops VAR_0 ;
 int FUNC_0 (struct hist_entry*,struct hist_entry*,int,size_t) ;
 struct hist_entry* FUNC_1 (size_t) ;
 int FUNC_2 (struct hist_entry*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct hist_entry *FUNC_3(struct hist_entry *VAR_2,
       bool VAR_3)
{
 struct hist_entry_ops *VAR_4 = VAR_2->ops;
 size_t VAR_5 = 0;
 struct hist_entry *VAR_6;
 int VAR_7 = 0;

 if (!VAR_4)
  VAR_4 = VAR_2->ops = &VAR_0;

 if (VAR_1.use_callchain)
  VAR_5 = sizeof(struct callchain_root);

 VAR_6 = VAR_4->new(VAR_5);
 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3, VAR_5);
  if (VAR_7) {
   VAR_4->free(VAR_6);
   VAR_6 = ((void*)0);
  }
 }

 return VAR_6;
}
