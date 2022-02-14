
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_delete; int node_new; int node_cmp; } ;
struct intlist {TYPE_1__ rblist; } ;


 int FUNC_0 (struct intlist*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct intlist*,char const*) ;
 struct intlist* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

struct intlist *FUNC_4(const char *VAR_3)
{
 struct intlist *VAR_4 = FUNC_2(sizeof(*VAR_4));

 if (VAR_4 != ((void*)0)) {
  FUNC_3(&VAR_4->rblist);
  VAR_4->rblist.node_cmp = VAR_0;
  VAR_4->rblist.node_new = VAR_2;
  VAR_4->rblist.node_delete = VAR_1;

  if (VAR_3 && FUNC_1(VAR_4, VAR_3))
   goto out_delete;
 }

 return VAR_4;
out_delete:
 FUNC_0(VAR_4);
 return ((void*)0);
}
