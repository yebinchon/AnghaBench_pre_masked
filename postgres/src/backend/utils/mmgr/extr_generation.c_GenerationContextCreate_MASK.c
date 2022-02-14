
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blockSize; int blocks; int * block; } ;
typedef int Size ;
typedef int MemoryContext ;
typedef TYPE_1__ GenerationContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int ,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int ) ;

MemoryContext
FUNC_13(MemoryContext VAR_8,
      const char *VAR_9,
      Size VAR_10)
{
 GenerationContext *VAR_11;


 FUNC_4(VAR_4 == FUNC_1(VAR_4),
      "sizeof(GenerationChunk) is not maxaligned");
 FUNC_4(FUNC_12(VAR_2, VAR_7) + sizeof(MemoryContext) ==
      VAR_4,
      "padding calculation in GenerationChunk is wrong");







 if (VAR_10 != FUNC_1(VAR_10) ||
  VAR_10 < 1024 ||
  !FUNC_0(VAR_10))
  FUNC_6(VAR_1, "invalid blockSize for memory context: %zu",
    VAR_10);







 VAR_11 = (GenerationContext *) FUNC_11(FUNC_1(sizeof(GenerationContext)));
 if (VAR_11 == ((void*)0))
 {
  FUNC_3(VAR_6);
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_10("out of memory"),
     FUNC_9("Failed while creating memory context \"%s\".",
         VAR_9)));
 }







 VAR_11->blockSize = VAR_10;
 VAR_11->block = ((void*)0);
 FUNC_5(&VAR_11->blocks);


 FUNC_2((MemoryContext) VAR_11,
      VAR_5,
      &VAR_3,
      VAR_8,
      VAR_9);

 return (MemoryContext) VAR_11;
}
