
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chmcPmglHeader {scalar_t__ block_next; scalar_t__ block_prev; } ;
struct TYPE_2__ {struct chmcPmglHeader header; } ;
struct chmcItspHeader {scalar_t__ num_blocks; scalar_t__ index_last; } ;
struct chmcPmglChunkNode {struct chmcPmglChunkNode* pmgl_last; TYPE_1__ chunk; int pmgl_list; int list; struct chmcItspHeader itsp; } ;
struct chmcFile {struct chmcFile* pmgl_last; TYPE_1__ chunk; int pmgl_list; int list; struct chmcItspHeader itsp; } ;


 int FUNC_0 (struct chmcPmglChunkNode*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct chmcFile *VAR_0, struct chmcPmglChunkNode *VAR_1)
{
 struct chmcItspHeader *VAR_2 = &VAR_0->itsp;
 struct chmcPmglHeader *VAR_3;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->list, &VAR_0->pmgl_list);

 VAR_2->index_last = VAR_2->num_blocks;

 VAR_3 = &VAR_1->chunk.header;
 VAR_3->block_prev = VAR_2->num_blocks - 1;

 if (VAR_0->pmgl_last) {
  VAR_3 = &VAR_0->pmgl_last->chunk.header;
  VAR_3->block_next = VAR_2->num_blocks;
 }

 VAR_2->num_blocks++;

 VAR_0->pmgl_last = VAR_1;
}
