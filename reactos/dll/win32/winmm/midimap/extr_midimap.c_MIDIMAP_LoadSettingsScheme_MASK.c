
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int port ;
typedef int mask ;
typedef int buffer ;
typedef int const WCHAR ;
struct TYPE_3__ {int ** ChannelMap; } ;
typedef TYPE_1__ MIDIMAPDATA ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int,int const*,int) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 scalar_t__ FUNC_5 (int ,int const*,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int*,void*,int*) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int*,void*,int*) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static BOOL FUNC_8(MIDIMAPDATA* VAR_4, const WCHAR* VAR_5)
{
    HKEY VAR_6, VAR_7, VAR_8;
    unsigned VAR_9, VAR_10, VAR_11;
    WCHAR VAR_12[256], VAR_13[256];
    DWORD VAR_14, VAR_15, VAR_16;

    for (VAR_9 = 0; VAR_9 < 16; VAR_9++) VAR_4->ChannelMap[VAR_9] = ((void*)0);

    if (FUNC_4(VAR_1,
      "System\\CurrentControlSet\\Control\\MediaProperties\\PrivateProperties\\Midi\\Schemes",
      &VAR_6))
    {
 return VAR_0;
    }
    if (FUNC_5(VAR_6, VAR_5, &VAR_7))
    {
 FUNC_2(VAR_6);
 return VAR_0;
    }

    for (VAR_10 = 0; !FUNC_3(VAR_7, VAR_10, VAR_12, sizeof(VAR_12)); VAR_10++)
    {
 if (FUNC_5(VAR_7, VAR_12, &VAR_8)) continue;

 VAR_15 = sizeof(VAR_13);
 if (FUNC_7(VAR_8, ((void*)0), 0, &VAR_14, (void*)VAR_13, &VAR_15)) continue;

 if (!FUNC_1(VAR_13, &VAR_11)) continue;

 VAR_15 = sizeof(VAR_16);
 if (FUNC_6(VAR_8, "Channels", 0, &VAR_14, (void*)&VAR_16, &VAR_15))
     continue;

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
 {
     if (VAR_16 & (1 << VAR_9))
     {
  if (VAR_4->ChannelMap[VAR_9])
      FUNC_0("Quirks in registry, channel %u is mapped twice\n", VAR_9);
  VAR_4->ChannelMap[VAR_9] = &VAR_3[VAR_11];
     }
 }
    }

    FUNC_2(VAR_6);
    FUNC_2(VAR_7);

    return VAR_2;
}
