
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int out ;
typedef int buffer ;
typedef char WCHAR ;
struct TYPE_7__ {TYPE_1__** ChannelMap; } ;
struct TYPE_6__ {int uDevID; } ;
typedef TYPE_2__ MIDIMAPDATA ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int ,char*,int ,int*,void*,int*) ;
 int FUNC_6 (int ,char const*,int ,int*,void*,int*) ;
 int FUNC_7 (char*,unsigned int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_9(MIDIMAPDATA* VAR_2)
{
    HKEY VAR_3;
    BOOL VAR_4;

    if (FUNC_4(VAR_0,
      "Software\\Microsoft\\Windows\\CurrentVersion\\Multimedia\\MIDIMap", &VAR_3))
    {
 VAR_4 = FUNC_1(VAR_2, ((void*)0));
    }
    else
    {
 DWORD VAR_5, VAR_6, VAR_7;
 WCHAR VAR_8[256];

 VAR_4 = 2;
 VAR_6 = sizeof(VAR_7);
 if (!FUNC_5(VAR_3, "UseScheme", 0, &VAR_5, (void*)&VAR_7, &VAR_6) && VAR_7)
 {
            static const WCHAR VAR_9[] = {'C','u','r','r','e','n','t','S','c','h','e','m','e',0};
     VAR_6 = sizeof(VAR_8);
     if (!FUNC_6(VAR_3, VAR_9, 0, &VAR_5, (void*)VAR_8, &VAR_6))
     {
  if (!(VAR_4 = FUNC_2(VAR_2, VAR_8)))
      VAR_4 = FUNC_1(VAR_2, ((void*)0));
     }
     else
     {
  FUNC_0("Wrong registry: UseScheme is active, but no CurrentScheme found\n");
     }
 }
 if (VAR_4 == 2)
 {
            static const WCHAR VAR_10[] = {'C','u','r','r','e','n','t','I','n','s','t','r','u','m','e','n','t',0};
     VAR_6 = sizeof(VAR_8);
     if (!FUNC_6(VAR_3, VAR_10, 0, &VAR_5, (void*)VAR_8, &VAR_6) && *VAR_8)
     {
  VAR_4 = FUNC_1(VAR_2, VAR_8);
     }
     else if (!FUNC_6(VAR_3, L"szPname", 0, &VAR_5, (void*)VAR_8, &VAR_6) && *VAR_8)
     {

  VAR_4 = FUNC_1(VAR_2, VAR_8);
     }
     else
     {
  VAR_4 = FUNC_1(VAR_2, ((void*)0));
     }
 }
    }
    FUNC_3(VAR_3);

    if (VAR_4 && FUNC_8(VAR_1))
    {
 unsigned VAR_11;

 for (VAR_11 = 0; VAR_11 < 16; VAR_11++)
 {
     FUNC_7("chnMap[%2d] => %d\n",
    VAR_11, VAR_2->ChannelMap[VAR_11] ? VAR_2->ChannelMap[VAR_11]->uDevID : -1);
 }
    }
    return VAR_4;
}
