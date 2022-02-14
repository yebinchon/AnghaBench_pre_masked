
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int * Key; } ;
typedef int * PWCHAR ;
typedef int * PVOID ;
typedef TYPE_1__* PINFCACHELINE ;
typedef int PCWSTR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

PVOID
FUNC_4(PINFCACHELINE VAR_0,
                 PCWSTR VAR_1)
{
  if (VAR_0 == ((void*)0))
    {
      FUNC_0("Invalid Line\n");
      return ((void*)0);
    }

  if (VAR_0->Key != ((void*)0))
    {
      FUNC_0("Line already has a key\n");
      return ((void*)0);
    }

  VAR_0->Key = (PWCHAR)FUNC_1((FUNC_3(VAR_1) + 1) * sizeof(WCHAR));
  if (VAR_0->Key == ((void*)0))
    {
      FUNC_0("MALLOC() failed\n");
      return ((void*)0);
    }

  FUNC_2(VAR_0->Key, VAR_1);

  return (PVOID)VAR_0->Key;
}
