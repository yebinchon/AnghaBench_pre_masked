
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_prev; int block_next; scalar_t__ unknown_0008; scalar_t__ free_space; int signature; } ;
struct chmcPmglChunk {int data; TYPE_1__ header; } ;
struct chmcPmglChunkNode {struct chmcPmglChunk chunk; scalar_t__ index_len; scalar_t__ data_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct chmcPmglChunkNode*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

void FUNC_3(struct chmcPmglChunkNode *VAR_1)
{
 struct chmcPmglChunk *VAR_2;

 FUNC_0(VAR_1);

 VAR_1->data_len = 0;
 VAR_1->index_len = 0;

 VAR_2 = &VAR_1->chunk;

 FUNC_1(VAR_2->header.signature, "PMGL", 4);


 VAR_2->header.free_space = VAR_0 + 2;
 VAR_2->header.unknown_0008 = 0;
 VAR_2->header.block_prev = -1;
 VAR_2->header.block_next = -1;

 FUNC_2(VAR_2->data, 0, VAR_0);
}
