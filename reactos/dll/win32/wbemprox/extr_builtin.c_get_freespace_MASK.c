
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int info ;
typedef char WCHAR ;
struct TYPE_7__ {int QuadPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
typedef int UINT64 ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_8__ {TYPE_1__ DiskSize; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_3__ DISK_GEOMETRY_EX ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *,int ,TYPE_3__*,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char const*,int *,int *,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static UINT64 FUNC_4( const WCHAR *VAR_6, UINT64 *VAR_7 )
{
    WCHAR VAR_8[] = {'\\','\\','.','\\','A',':',0};
    ULARGE_INTEGER VAR_9;
    DISK_GEOMETRY_EX VAR_10;
    HANDLE VAR_11;
    DWORD VAR_12;

    VAR_9.QuadPart = 512 * 1024 * 1024;
    FUNC_3( VAR_6, ((void*)0), ((void*)0), &VAR_9 );

    VAR_8[4] = VAR_6[0];
    VAR_11 = FUNC_1( VAR_8, VAR_2, VAR_0|VAR_1, ((void*)0), VAR_5, 0, 0 );
    if (VAR_11 != VAR_3)
    {
        if (FUNC_2( VAR_11, VAR_4, ((void*)0), 0, &VAR_10, sizeof(VAR_10), &VAR_12, ((void*)0) ))
            *VAR_7 = VAR_10.DiskSize.QuadPart;
        FUNC_0( VAR_11 );
    }
    return VAR_9.QuadPart;
}
