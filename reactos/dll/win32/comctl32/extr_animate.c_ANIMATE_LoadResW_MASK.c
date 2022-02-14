
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mminfo ;
typedef char WCHAR ;
struct TYPE_7__ {int hRes; int hMMio; } ;
struct TYPE_6__ {int cchBuffer; scalar_t__ pchBuffer; int fccIOProc; } ;
typedef TYPE_1__ MMIOINFO ;
typedef scalar_t__ LPVOID ;
typedef int LPCWSTR ;
typedef int HRSRC ;
typedef int HINSTANCE ;
typedef int BOOL ;
typedef TYPE_2__ ANIMATE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static BOOL FUNC_7(ANIMATE_INFO *VAR_4, HINSTANCE VAR_5, LPCWSTR VAR_6)
{
    static const WCHAR VAR_7[] = { 'A', 'V', 'I', 0 };
    HRSRC VAR_8;
    MMIOINFO VAR_9;
    LPVOID VAR_10;

    VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
    if (!VAR_8)
 return VAR_0;

    VAR_4->hRes = FUNC_2(VAR_5, VAR_8);
    if (!VAR_4->hRes)
  return VAR_0;

    VAR_10 = FUNC_3(VAR_4->hRes);
    if (!VAR_10)
 return VAR_0;

    FUNC_5(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.fccIOProc = VAR_1;
    VAR_9.pchBuffer = VAR_10;
    VAR_9.cchBuffer = FUNC_4(VAR_5, VAR_8);
    VAR_4->hMMio = FUNC_6(((void*)0), &VAR_9, VAR_2);
    if (!VAR_4->hMMio)
    {
 FUNC_1(VAR_4->hRes);
 return VAR_0;
    }

    return VAR_3;
}
