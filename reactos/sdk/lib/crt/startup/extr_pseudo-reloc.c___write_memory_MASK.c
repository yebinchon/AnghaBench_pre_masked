
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int b ;
struct TYPE_3__ {scalar_t__ Protect; int RegionSize; int BaseAddress; } ;
typedef TYPE_1__ MEMORY_BASIC_INFORMATION ;
typedef int LPVOID ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (void*,TYPE_1__*,int) ;
 int FUNC_2 (char*,int,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,void const*,size_t) ;

__attribute__((used)) static void
FUNC_5 (void *VAR_2, const void *VAR_3, size_t VAR_4)
{
  MEMORY_BASIC_INFORMATION VAR_5;
  DWORD VAR_6;
  int VAR_7 = 0;

  if (!VAR_4)
    return;





  if (!FUNC_1 (VAR_2, &VAR_5, sizeof(VAR_5)))
    {
      FUNC_2 ("  VirtualQuery failed for %d bytes at address %p",
        (int) sizeof(VAR_5), VAR_2);
    }


  if (VAR_5.Protect != VAR_0 && VAR_5.Protect != VAR_1)
    {
      VAR_7 = 1;
      FUNC_0 (VAR_5.BaseAddress, VAR_5.RegionSize, VAR_0,
        &VAR_6);
    }


  FUNC_4 (VAR_2, VAR_3, VAR_4);

  if (VAR_7 && VAR_5.Protect != VAR_0 && VAR_5.Protect != VAR_1)
    FUNC_0 (VAR_5.BaseAddress, VAR_5.RegionSize, VAR_6, &VAR_6);
}
