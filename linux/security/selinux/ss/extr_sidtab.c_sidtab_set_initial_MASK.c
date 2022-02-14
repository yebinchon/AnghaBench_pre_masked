
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sidtab_isid_entry {int set; int context; } ;
struct sidtab {struct sidtab_isid_entry* isids; } ;
struct context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct context*) ;

int FUNC_1(struct sidtab *VAR_2, u32 VAR_3, struct context *VAR_4)
{
 struct sidtab_isid_entry *VAR_5;
 int VAR_6;

 if (VAR_3 == 0 || VAR_3 > VAR_1)
  return -VAR_0;

 VAR_5 = &VAR_2->isids[VAR_3 - 1];

 VAR_6 = FUNC_0(&VAR_5->context, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5->set = 1;
 return 0;
}
