
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int wMid; int wPid; int vDriverVersion; int wChannelMask; long dwSupport; scalar_t__ wNotes; scalar_t__ wVoices; int wTechnology; int szPname; } ;
typedef int MIDIMAPDATA ;
typedef TYPE_1__* LPMIDIOUTCAPSW ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static DWORD FUNC_1(UINT VAR_2, MIDIMAPDATA* VAR_3, LPMIDIOUTCAPSW VAR_4, DWORD_PTR VAR_5)
{
    static const WCHAR VAR_6[] = {'W','i','n','e',' ','m','i','d','i',' ','m','a','p','p','e','r',0};
    VAR_4->wMid = 0x00FF;
    VAR_4->wPid = 0x0001;
    VAR_4->vDriverVersion = 0x0100;
    FUNC_0(VAR_4->szPname, VAR_6);
    VAR_4->wTechnology = VAR_1;
    VAR_4->wVoices = 0;
    VAR_4->wNotes = 0;
    VAR_4->wChannelMask = 0xFFFF;
    VAR_4->dwSupport = 0L;

    return VAR_0;
}
