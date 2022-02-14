
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_11__ {int inUse; } ;
struct TYPE_10__ {size_t sessionsLen; int cmdQueue; TYPE_4__* sessions; } ;
struct TYPE_9__ {int ncb_command; size_t ncb_lsn; } ;
typedef TYPE_1__* PNCB ;
typedef TYPE_2__ NetBIOSAdapter ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,TYPE_2__*,...) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static UCHAR FUNC_3(NetBIOSAdapter *VAR_6, PNCB VAR_7)
{
    UCHAR VAR_8;

    FUNC_1(": adapter %p, ncb %p\n", VAR_6, VAR_7);

    if (!VAR_6) return VAR_0;
    if (!VAR_7) return VAR_4;

    switch (VAR_7->ncb_command & 0x7f)
    {
        case 136:
        case 138:
        case 139:
        case 133:
        case 131:
        case 128:
            VAR_8 = VAR_1;
            break;



        case 137:
        case 130:
        case 135:
        case 129:
        case 134:
        case 132:
        {
            if (VAR_7->ncb_lsn >= VAR_6->sessionsLen)
                VAR_8 = VAR_5;
            else if (!VAR_6->sessions[VAR_7->ncb_lsn].inUse)
                VAR_8 = VAR_5;
            else
            {
                VAR_8 = FUNC_0(VAR_6->cmdQueue, VAR_7);
                if (VAR_8 == VAR_3 || VAR_8 == VAR_2)
                    FUNC_2(VAR_6, &VAR_6->sessions[VAR_7->ncb_lsn]);
            }
            break;
        }

        default:
            VAR_8 = FUNC_0(VAR_6->cmdQueue, VAR_7);
    }
    FUNC_1("returning 0x%02x\n", VAR_8);
    return VAR_8;
}
