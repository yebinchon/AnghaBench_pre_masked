
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct _utimbuf {scalar_t__ actime; scalar_t__ modtime; } ;
struct TYPE_4__ {scalar_t__ handle; } ;
typedef TYPE_1__ ioinfo ;
typedef int ULONG ;
typedef int LARGE_INTEGER ;
typedef scalar_t__ FILETIME ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(int VAR_1, struct _utimbuf *VAR_2)
{
    ioinfo *VAR_3 = FUNC_5(VAR_1);
    FILETIME VAR_4, VAR_5;

    if (VAR_3->handle == VAR_0)
    {
        FUNC_6(VAR_3);
        return -1;
    }

    if (!VAR_2)
    {
        time_t VAR_6;
        FUNC_4(&VAR_6);
        FUNC_1((ULONG)VAR_6,
                                  (LARGE_INTEGER *)&VAR_4);
        VAR_5 = VAR_4;
    }
    else
    {
        FUNC_1((ULONG)VAR_2->actime,
                                  (LARGE_INTEGER *)&VAR_4);
        if (VAR_2->actime == VAR_2->modtime)
        {
            VAR_5 = VAR_4;
        }
        else
        {
            FUNC_1((ULONG)VAR_2->modtime,
                                      (LARGE_INTEGER *)&VAR_5);
        }
    }

    if (!FUNC_2(VAR_3->handle, ((void*)0), &VAR_4, &VAR_5))
    {
        FUNC_6(VAR_3);
        FUNC_3(FUNC_0());
        return -1 ;
    }
    FUNC_6(VAR_3);
    return 0;
}
