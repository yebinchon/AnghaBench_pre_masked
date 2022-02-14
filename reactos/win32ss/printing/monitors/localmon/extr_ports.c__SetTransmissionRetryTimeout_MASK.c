
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int WriteTotalTimeoutConstant; } ;
struct TYPE_6__ {int hFile; } ;
typedef TYPE_1__* PLOCALMON_PORT ;
typedef TYPE_2__ COMMTIMEOUTS ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_3(PLOCALMON_PORT VAR_2)
{
    COMMTIMEOUTS VAR_3;


    if (!FUNC_0(VAR_2->hFile, &VAR_3))
        return VAR_0;


    VAR_3.WriteTotalTimeoutConstant = FUNC_1() * 1000;
    FUNC_2(VAR_2->hFile, &VAR_3);

    return VAR_1;
}
