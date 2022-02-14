
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_24__ {int data; } ;
struct TYPE_26__ {int cmdQueue; TYPE_2__ impl; TYPE_1__* transport; } ;
struct TYPE_25__ {int ncb_command; } ;
struct TYPE_23__ {int (* findName ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__* PNCB ;
typedef TYPE_4__ NetBIOSAdapter ;


 int FUNC_0 (char*,TYPE_3__*,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;







 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_3__*) ;

__attribute__((used)) static UCHAR FUNC_11(NetBIOSAdapter *VAR_5, PNCB VAR_6)
{
    UCHAR VAR_7, VAR_8;

    FUNC_3(": adapter %p, ncb %p\n", VAR_5, VAR_6);

    if (!VAR_5) return VAR_1;
    if (!VAR_6) return VAR_4;

    VAR_8 = VAR_6->ncb_command & 0x7f;
    if (VAR_8 == VAR_0)
        VAR_7 = FUNC_8(VAR_5, VAR_6);
    else
    {
        VAR_7 = FUNC_1(VAR_5->cmdQueue, VAR_6);
        if (VAR_7 == VAR_2)
        {
            switch (VAR_8)
            {
                case 135:
                    VAR_7 = FUNC_5(VAR_5, VAR_6);
                    break;




                case 129:
                case 128:
                case 134:
                case 133:
                    VAR_7 = FUNC_9(VAR_5, VAR_6);
                    break;

                case 130:
                    VAR_7 = FUNC_7(VAR_5, VAR_6);
                    break;

                case 131:
                    VAR_7 = FUNC_6(VAR_5, VAR_6);
                    break;

                case 136:
                    VAR_7 = FUNC_4(VAR_5, VAR_6);
                    break;

                case 132:
                    if (VAR_5->transport->findName)
                        VAR_7 = VAR_5->transport->findName(VAR_5->impl.data,
                         VAR_6);
                    else
                        VAR_7 = VAR_3;
                    break;

                default:
                    FUNC_0("(%p): command code 0x%02x\n", VAR_6, VAR_6->ncb_command);
                    VAR_7 = VAR_3;
            }
            FUNC_2(VAR_5->cmdQueue, VAR_6, VAR_7);
        }
    }
    FUNC_3("returning 0x%02x\n", VAR_7);
    return VAR_7;
}
