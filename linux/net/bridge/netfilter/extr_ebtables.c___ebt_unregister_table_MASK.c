
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net {int dummy; } ;
struct ebt_table {TYPE_1__* private; int me; int list; } ;
struct TYPE_4__ {struct TYPE_4__* entries; scalar_t__ nentries; int entries_size; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,struct net*,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct ebt_table*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct net *VAR_2, struct ebt_table *VAR_3)
{
 FUNC_5(&VAR_1);
 FUNC_3(&VAR_3->list);
 FUNC_6(&VAR_1);
 FUNC_0(VAR_3->private->entries, VAR_3->private->entries_size,
     VAR_0, VAR_2, ((void*)0));
 if (VAR_3->private->nentries)
  FUNC_4(VAR_3->me);
 FUNC_7(VAR_3->private->entries);
 FUNC_1(VAR_3->private);
 FUNC_7(VAR_3->private);
 FUNC_2(VAR_3);
}
