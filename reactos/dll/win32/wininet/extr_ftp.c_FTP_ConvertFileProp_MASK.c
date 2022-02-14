
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WIN32_FIND_DATAW ;
struct TYPE_7__ {scalar_t__ lpszName; scalar_t__ bIsDirectory; int nSize; int tmLastModified; } ;
struct TYPE_6__ {int cFileName; int dwFileAttributes; int nFileSizeLow; scalar_t__ nFileSizeHigh; int ftLastAccessTime; int ftCreationTime; int ftLastWriteTime; } ;
typedef TYPE_1__* LPWIN32_FIND_DATAW ;
typedef TYPE_2__* LPFILEPROPERTIESW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static BOOL FUNC_3(LPFILEPROPERTIESW VAR_4, LPWIN32_FIND_DATAW VAR_5)
{
    BOOL VAR_6 = VAR_0;

    FUNC_1(VAR_5, sizeof(WIN32_FIND_DATAW));

    if (VAR_4)
    {
        FUNC_0( &VAR_4->tmLastModified, &VAR_5->ftLastAccessTime );
 VAR_5->ftLastWriteTime = VAR_5->ftLastAccessTime;
 VAR_5->ftCreationTime = VAR_5->ftLastAccessTime;


        VAR_5->nFileSizeHigh = 0;
        VAR_5->nFileSizeLow = VAR_4->nSize;

 if (VAR_4->bIsDirectory)
     VAR_5->dwFileAttributes |= VAR_1;

        if (VAR_4->lpszName)
            FUNC_2(VAR_5->cFileName, VAR_4->lpszName, VAR_2);

 VAR_6 = VAR_3;
    }

    return VAR_6;
}
