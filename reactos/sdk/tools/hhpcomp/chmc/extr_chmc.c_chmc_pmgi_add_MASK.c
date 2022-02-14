
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcItspHeader {int num_blocks; } ;
struct chmcPmgiChunkNode {struct chmcPmgiChunkNode* pmgi_last; int pmgi_list; int list; struct chmcItspHeader itsp; } ;
struct chmcFile {struct chmcFile* pmgi_last; int pmgi_list; int list; struct chmcItspHeader itsp; } ;


 int FUNC_0 (struct chmcPmgiChunkNode*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct chmcFile *VAR_0, struct chmcPmgiChunkNode *VAR_1)
{
 struct chmcItspHeader *VAR_2 = &VAR_0->itsp;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->list, &VAR_0->pmgi_list);
 VAR_2->num_blocks++;

 VAR_0->pmgi_last = VAR_1;
}
