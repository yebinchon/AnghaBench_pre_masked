
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; } ;
typedef TYPE_1__* LPDBLIST ;
typedef int LPDATABLOCK_HEADER ;



__attribute__((used)) static inline LPDATABLOCK_HEADER FUNC_0(LPDBLIST VAR_0)
{
  char* VAR_1 = (char*)VAR_0;
  VAR_1 += VAR_0->cbSize;
  return (LPDATABLOCK_HEADER)VAR_1;
}
