
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int dwFlags; int dwContext; } ;
struct TYPE_11__ {size_t index; size_t size; TYPE_6__ hdr; int * lpafp; } ;
typedef TYPE_1__ WININETFTPFINDNEXTW ;
struct TYPE_12__ {size_t nFileSizeLow; int cFileName; } ;
typedef TYPE_2__ WIN32_FIND_DATAW ;
struct TYPE_13__ {int dwResult; scalar_t__ dwError; } ;
typedef TYPE_2__* LPVOID ;
typedef TYPE_4__ INTERNET_ASYNC_RESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_6__*,int ,int ,TYPE_4__*,int) ;
 int FUNC_2 (char*,size_t,size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static DWORD FUNC_5(WININETFTPFINDNEXTW *VAR_4, LPVOID VAR_5)
{
    WIN32_FIND_DATAW *VAR_6 = VAR_5;
    DWORD VAR_7 = VAR_1;

    FUNC_2("index(%d) size(%d)\n", VAR_4->index, VAR_4->size);

    FUNC_3(VAR_6, sizeof(WIN32_FIND_DATAW));

    if (VAR_4->index < VAR_4->size) {
        FUNC_0(&VAR_4->lpafp[VAR_4->index], VAR_6);
        VAR_4->index++;

        FUNC_2("Name: %s\nSize: %d\n", FUNC_4(VAR_6->cFileName), VAR_6->nFileSizeLow);
    }else {
        VAR_7 = VAR_0;
    }

    if (VAR_4->hdr.dwFlags & VAR_2)
    {
        INTERNET_ASYNC_RESULT VAR_8;

        VAR_8.dwResult = (VAR_7 == VAR_1);
        VAR_8.dwError = VAR_7;

        FUNC_1(&VAR_4->hdr, VAR_4->hdr.dwContext,
                              VAR_3, &VAR_8,
                              sizeof(INTERNET_ASYNC_RESULT));
    }

    return VAR_7;
}
