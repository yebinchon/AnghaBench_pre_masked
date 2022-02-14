
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_10__ {scalar_t__ inUse; } ;
struct TYPE_9__ {size_t sessionsLen; int resetting; int cs; TYPE_7__* sessions; int cmdQueue; } ;
struct TYPE_8__ {scalar_t__* ncb_callname; int ncb_lsn; } ;
typedef TYPE_1__* PNCB ;
typedef TYPE_2__ NetBIOSAdapter ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*,TYPE_7__*) ;
 size_t FUNC_7 (TYPE_2__*,size_t) ;

__attribute__((used)) static UCHAR FUNC_8(NetBIOSAdapter *VAR_5, PNCB VAR_6)
{
    UCHAR VAR_7;

    FUNC_5(": adapter %p, ncb %p\n", VAR_5, VAR_6);

    if (!VAR_5) return VAR_1;
    if (!VAR_6) return VAR_3;

    if (FUNC_2(&VAR_5->resetting) == 1)
    {
        UCHAR VAR_8, VAR_9;

        FUNC_4(VAR_5->cmdQueue);

        FUNC_0(&VAR_5->cs);
        for (VAR_8 = 0; VAR_8 < VAR_5->sessionsLen; VAR_8++)
            if (VAR_5->sessions[VAR_8].inUse)
                FUNC_6(VAR_5, &VAR_5->sessions[VAR_8]);
        if (!VAR_6->ncb_lsn)
            VAR_9 = VAR_6->ncb_callname[0] == 0 ? VAR_0 :
             VAR_6->ncb_callname[0];
        else if (VAR_5->sessionsLen == 0)
            VAR_9 = VAR_0;
        else
            VAR_9 = 0;
        if (VAR_9 > 0)
            VAR_7 = FUNC_7(VAR_5, VAR_9);
        else
            VAR_7 = VAR_2;
        FUNC_3(&VAR_5->cs);
    }
    else
        VAR_7 = VAR_4;
    FUNC_1(&VAR_5->resetting);
    FUNC_5("returning 0x%02x\n", VAR_7);
    return VAR_7;
}
