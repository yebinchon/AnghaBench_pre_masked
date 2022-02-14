
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct batadv_frag_table_entry {scalar_t__ seqno; scalar_t__ size; int fragment_list; int lock; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct batadv_frag_table_entry *VAR_0,
       u16 VAR_1)
{
 FUNC_2(&VAR_0->lock);

 if (VAR_0->seqno == VAR_1)
  return 0;

 if (!FUNC_1(&VAR_0->fragment_list))
  FUNC_0(&VAR_0->fragment_list, 1);

 VAR_0->size = 0;
 VAR_0->seqno = VAR_1;

 return 1;
}
