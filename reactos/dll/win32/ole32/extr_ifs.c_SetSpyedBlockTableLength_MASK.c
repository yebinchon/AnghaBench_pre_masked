
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SpyedBlockTableLength; int * SpyedBlocks; } ;
typedef int PVOID ;
typedef int LPVOID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int) ;
 int * FUNC_1 (int *,int,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_2 ( DWORD VAR_3 )
{
 LPVOID *VAR_4;

 if (!VAR_2) VAR_4 = FUNC_0(VAR_1, VAR_3 * sizeof(PVOID));
 else VAR_4 = FUNC_1(VAR_2, VAR_3 * sizeof(PVOID), VAR_1 | VAR_0);
 if (VAR_4) {
  VAR_2 = VAR_4;
  VAR_2 = VAR_3;
 }

 return VAR_4 != ((void*)0);
}
