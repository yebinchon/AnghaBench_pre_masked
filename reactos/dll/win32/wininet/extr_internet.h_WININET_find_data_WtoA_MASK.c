
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cAlternateFileName; int cFileName; int dwReserved1; int dwReserved0; int nFileSizeLow; int nFileSizeHigh; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int dwFileAttributes; } ;
struct TYPE_5__ {int cAlternateFileName; int cFileName; int dwReserved1; int dwReserved0; int nFileSizeLow; int nFileSizeHigh; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int dwFileAttributes; } ;
typedef TYPE_1__* LPWIN32_FIND_DATAW ;
typedef TYPE_2__* LPWIN32_FIND_DATAA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ,int,int *,int *) ;

__attribute__((used)) static inline void FUNC_1(LPWIN32_FIND_DATAW VAR_1, LPWIN32_FIND_DATAA VAR_2)
{
    VAR_2->dwFileAttributes = VAR_1->dwFileAttributes;
    VAR_2->ftCreationTime = VAR_1->ftCreationTime;
    VAR_2->ftLastAccessTime = VAR_1->ftLastAccessTime;
    VAR_2->ftLastWriteTime = VAR_1->ftLastWriteTime;
    VAR_2->nFileSizeHigh = VAR_1->nFileSizeHigh;
    VAR_2->nFileSizeLow = VAR_1->nFileSizeLow;
    VAR_2->dwReserved0 = VAR_1->dwReserved0;
    VAR_2->dwReserved1 = VAR_1->dwReserved1;
    FUNC_0(VAR_0, 0, VAR_1->cFileName, -1,
        VAR_2->cFileName, sizeof(VAR_2->cFileName),
        ((void*)0), ((void*)0));
    FUNC_0(VAR_0, 0, VAR_1->cAlternateFileName, -1,
        VAR_2->cAlternateFileName, sizeof(VAR_2->cAlternateFileName),
        ((void*)0), ((void*)0));
}
