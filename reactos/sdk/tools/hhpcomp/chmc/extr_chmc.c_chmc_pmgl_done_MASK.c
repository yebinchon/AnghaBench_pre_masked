
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcTreeNode {int dummy; } ;
struct chmcFile {int entries_num; struct chmcTreeNode** sort_entries; } ;


 int FUNC_0 (struct chmcFile*) ;
 int FUNC_1 (struct chmcFile*,struct chmcTreeNode*) ;

void FUNC_2(struct chmcFile *VAR_0)
{
 struct chmcTreeNode *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0);

 for(VAR_2=0; VAR_2 < VAR_0->entries_num; VAR_2++) {
  VAR_1 = VAR_0->sort_entries[VAR_2];
  FUNC_1(VAR_0, VAR_1);
 }
}
