
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int cbData; void* pbData; } ;
struct TYPE_5__ {TYPE_1__ Value; int fCritical; scalar_t__ pszObjId; } ;
typedef scalar_t__ LPSTR ;
typedef int DWORD ;
typedef TYPE_2__ CERT_EXTENSION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static WCHAR *FUNC_1(void *VAR_2, DWORD VAR_3)
{
    CERT_EXTENSION VAR_4;

    VAR_4.pszObjId = (LPSTR)VAR_1;
    VAR_4.fCritical = VAR_0;
    VAR_4.Value.pbData = VAR_2;
    VAR_4.Value.cbData = VAR_3;
    return FUNC_0(&VAR_4, 0);
}
