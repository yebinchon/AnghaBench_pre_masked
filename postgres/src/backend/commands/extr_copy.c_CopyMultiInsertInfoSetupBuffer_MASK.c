
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int multiInsertBuffers; } ;
struct TYPE_6__ {int * ri_CopyMultiInsertBuffer; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef TYPE_2__ CopyMultiInsertInfo ;
typedef int CopyMultiInsertBuffer ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_2(CopyMultiInsertInfo *VAR_0,
          ResultRelInfo *VAR_1)
{
 CopyMultiInsertBuffer *VAR_2;

 VAR_2 = FUNC_0(VAR_1);


 VAR_1->ri_CopyMultiInsertBuffer = VAR_2;

 VAR_0->multiInsertBuffers = FUNC_1(VAR_0->multiInsertBuffers, VAR_2);
}
