
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwHVertexOffset; int dwInstructionLength; int dwInstructionOffset; int dwVertexCount; int dwVertexOffset; int dwSize; } ;
typedef TYPE_1__ D3DEXECUTEDATA ;


 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static void FUNC_1(const D3DEXECUTEDATA *VAR_0) {
    FUNC_0("dwSize : %d\n", VAR_0->dwSize);
    FUNC_0("Vertex      Offset : %d  Count  : %d\n", VAR_0->dwVertexOffset, VAR_0->dwVertexCount);
    FUNC_0("Instruction Offset : %d  Length : %d\n", VAR_0->dwInstructionOffset, VAR_0->dwInstructionLength);
    FUNC_0("HVertex     Offset : %d\n", VAR_0->dwHVertexOffset);
}
