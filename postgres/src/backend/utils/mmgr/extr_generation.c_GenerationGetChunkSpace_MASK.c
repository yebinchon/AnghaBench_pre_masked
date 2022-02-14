
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
typedef scalar_t__ Size ;
typedef int MemoryContext ;
typedef TYPE_1__ GenerationChunk ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static Size
FUNC_3(MemoryContext VAR_2, void *VAR_3)
{
 GenerationChunk *VAR_4 = FUNC_0(VAR_3);
 Size VAR_5;

 FUNC_1(VAR_4, VAR_0);
 VAR_5 = VAR_4->size + VAR_1;
 FUNC_2(VAR_4, VAR_0);
 return VAR_5;
}
