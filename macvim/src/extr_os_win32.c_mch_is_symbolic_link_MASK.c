
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_5__ {scalar_t__ dwFileAttributes; scalar_t__ dwReserved0; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
struct TYPE_6__ {scalar_t__ dwFileAttributes; scalar_t__ dwReserved0; } ;
typedef TYPE_2__ WIN32_FIND_DATAA ;
typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(char_u *VAR_7)
{
    HANDLE VAR_8;
    int VAR_9 = VAR_1;
    WIN32_FIND_DATAA VAR_10;
    DWORD VAR_11 = 0, VAR_12 = 0;
    {
 VAR_8 = FUNC_1(VAR_7, &VAR_10);
 if (VAR_8 != VAR_3)
 {
     VAR_11 = VAR_10.dwFileAttributes;
     VAR_12 = VAR_10.dwReserved0;
 }
    }

    if (VAR_8 != VAR_3)
 FUNC_0(VAR_8);

    if ((VAR_11 & VAR_2)
     && VAR_12 == VAR_4)
 VAR_9 = VAR_5;

    return VAR_9;
}
