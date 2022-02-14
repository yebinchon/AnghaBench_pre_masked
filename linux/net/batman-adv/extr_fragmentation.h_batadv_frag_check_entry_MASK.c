
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_frag_table_entry {int timestamp; int fragment_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool
FUNC_2(struct batadv_frag_table_entry *VAR_1)
{
 if (!FUNC_1(&VAR_1->fragment_list) &&
     FUNC_0(VAR_1->timestamp, VAR_0))
  return 1;
 return 0;
}
