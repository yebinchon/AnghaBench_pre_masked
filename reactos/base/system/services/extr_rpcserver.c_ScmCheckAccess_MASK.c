
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Tag; void* DesiredAccess; } ;
struct TYPE_4__ {TYPE_1__ Handle; } ;
typedef scalar_t__ SC_HANDLE ;
typedef TYPE_2__* PMANAGER_HANDLE ;
typedef void* DWORD ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void**,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static DWORD
FUNC_1(SC_HANDLE VAR_6,
               DWORD VAR_7)
{
    PMANAGER_HANDLE VAR_8;

    VAR_8 = (PMANAGER_HANDLE)VAR_6;
    if (VAR_8->Handle.Tag == VAR_2)
    {
        FUNC_0(&VAR_7,
                          &VAR_4);

        VAR_8->Handle.DesiredAccess = VAR_7;

        return VAR_1;
    }
    else if (VAR_8->Handle.Tag == VAR_3)
    {
        FUNC_0(&VAR_7,
                          &VAR_5);

        VAR_8->Handle.DesiredAccess = VAR_7;

        return VAR_1;
    }

    return VAR_0;
}
