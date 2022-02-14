
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct net_device {int dummy; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct seq_file*,struct hlist_head*,struct net_device*) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (struct hlist_head*) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct seq_file *VAR_0,
            struct net_device *VAR_1,
            struct hlist_head *VAR_2,
            unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 1;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (!FUNC_3(&VAR_2[VAR_4])) {
   VAR_5 = 0;
   break;
  }

 if (!VAR_5) {
  FUNC_2(VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (!FUNC_3(&VAR_2[VAR_4]))
    FUNC_1(VAR_0, &VAR_2[VAR_4], VAR_1);
  }
 } else
  FUNC_4(VAR_0, "  (%s: no entry)\n", FUNC_0(VAR_1));
}
