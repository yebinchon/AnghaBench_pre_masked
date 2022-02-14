
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int ULONG ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_1__ NE_NAMEINFO ;
typedef int * LPBYTE ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,int *,TYPE_1__*,int) ;

__attribute__((used)) static BYTE * FUNC_1( LPBYTE VAR_0, NE_NAMEINFO* VAR_1, WORD VAR_2, ULONG *VAR_3)
{
 FUNC_0("%p %p 0x%08x\n", VAR_0, VAR_1, VAR_2);

 *VAR_3 = (DWORD)VAR_1->length << VAR_2;
 return VAR_0 + ((DWORD)VAR_1->offset << VAR_2);
}
