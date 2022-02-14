
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SpyedBlockTableLength; int SpyedAllocationsLeft; int ** SpyedBlocks; } ;
typedef int * LPVOID ;
typedef int * LPCVOID ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(LPCVOID VAR_3)
{
        LPVOID * VAR_4;


        if (!VAR_1 && !FUNC_0(0x1000))
            return VAR_0;

 VAR_4 = VAR_1;


 while (*VAR_4 != VAR_3) {
            VAR_4++;
            if (VAR_4 >= VAR_1 + VAR_1)
                return VAR_0;
 }


        VAR_1--;

 *VAR_4 = ((void*)0);
        return VAR_2;
}
