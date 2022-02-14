
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int pfnCallback; scalar_t__ dwCookie; } ;
struct TYPE_10__ {scalar_t__ nLength; int hData; } ;
struct TYPE_8__ {int hGlobal; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_GlobalDestStruct ;
typedef int HRESULT ;
typedef int FORMATETC ;
typedef TYPE_4__ EDITSTREAM ;
typedef scalar_t__ DWORD_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_2(ME_TextEditor *VAR_7, FORMATETC *VAR_8, STGMEDIUM *VAR_9)
{
    EDITSTREAM VAR_10;
    ME_GlobalDestStruct VAR_11;
    HRESULT VAR_12;

    VAR_11.hData = VAR_9->u.hGlobal;
    VAR_11.nLength = 0;
    VAR_10.dwCookie = (DWORD_PTR)&VAR_11;
    VAR_10.pfnCallback = VAR_2;
    VAR_12 = FUNC_0( VAR_7, VAR_4 | VAR_5 | VAR_3, &VAR_10, VAR_1 ) == 0 ? VAR_0 : VAR_6;
    FUNC_1( VAR_9 );
    return VAR_12;
}
