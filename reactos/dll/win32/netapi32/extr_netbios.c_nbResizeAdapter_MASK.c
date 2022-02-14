
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int sessionsLen; int * sessions; } ;
typedef int NetBIOSSession ;
typedef TYPE_1__ NetBIOSAdapter ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static UCHAR FUNC_3(NetBIOSAdapter *VAR_3, UCHAR VAR_4)
{
    UCHAR VAR_5 = VAR_1;

    if (VAR_3 && VAR_3->sessionsLen < VAR_4)
    {
        NetBIOSSession *VAR_6;

        if (VAR_3->sessions)
            VAR_6 = FUNC_2(FUNC_0(),
             VAR_0, VAR_3->sessions, VAR_4 *
             sizeof(NetBIOSSession));
        else
            VAR_6 = FUNC_1(FUNC_0(),
             VAR_0, VAR_4 * sizeof(NetBIOSSession));
        if (VAR_6)
        {
            VAR_3->sessions = VAR_6;
            VAR_3->sessionsLen = VAR_4;
        }
        else
            VAR_5 = VAR_2;
    }
    return VAR_5;
}
