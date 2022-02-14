
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; char* buf; } ;
typedef TYPE_1__ WSABUF ;
typedef int UCHAR ;
struct TYPE_12__ {int recv_success; } ;
struct TYPE_11__ {scalar_t__ fd; scalar_t__ bytesPending; int cs; } ;
struct TYPE_10__ {int ncb_length; scalar_t__ ncb_buffer; } ;
typedef TYPE_2__* PNCB ;
typedef TYPE_3__ NetBTSession ;
typedef TYPE_4__ NetBTAdapter ;
typedef size_t DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_7 (char*,int,...) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,TYPE_1__*,size_t,size_t*,size_t*,int *,int *) ;

__attribute__((used)) static UCHAR FUNC_10(void *VAR_14, void *VAR_15, PNCB VAR_16)
{
    NetBTAdapter *VAR_17 = VAR_14;
    NetBTSession *VAR_18 = VAR_15;
    UCHAR VAR_19[VAR_2], VAR_20;
    int VAR_21;
    WSABUF VAR_22[2];
    DWORD VAR_23, VAR_24, VAR_25;

    FUNC_7("adapt %p, session %p, NCB %p\n", VAR_14, VAR_18, VAR_16);

    if (!VAR_17) return VAR_7;
    if (!VAR_16) return VAR_5;
    if (!VAR_16->ncb_buffer) return VAR_5;
    if (!VAR_18) return VAR_11;
    if (VAR_18->fd == VAR_0) return VAR_11;

    FUNC_1(&VAR_18->cs);
    VAR_23 = 0;
    if (VAR_18->bytesPending == 0)
    {
        VAR_23++;
        VAR_22[0].len = VAR_2;
        VAR_22[0].buf = (char*)VAR_19;
    }
    VAR_22[VAR_23].len = VAR_16->ncb_length;
    VAR_22[VAR_23].buf = (char*)VAR_16->ncb_buffer;
    VAR_23++;

    VAR_25 = 0;

    VAR_21 = FUNC_9(VAR_18->fd, VAR_22, VAR_23, &VAR_24, &VAR_25,
     ((void*)0), ((void*)0));
    if (VAR_21 == VAR_12 && FUNC_8() != VAR_13)
    {
        FUNC_3(&VAR_18->cs);
        FUNC_0("Receive error, WSAGetLastError() returns %d\n", FUNC_8());
        FUNC_6(VAR_16);
        VAR_20 = VAR_10;
    }
    else if (FUNC_5(VAR_16))
    {
        FUNC_3(&VAR_18->cs);
        VAR_20 = VAR_6;
    }
    else
    {
        if (VAR_23 == 2)
        {
            if (VAR_19[0] == VAR_3)
            {
                FUNC_3(&VAR_18->cs);
                FUNC_2("Oops, received a session keepalive and lost my place\n");


                FUNC_6(VAR_16);
                VAR_20 = VAR_10;
                goto error;
            }
            else if (VAR_19[0] != VAR_4)
            {
                FUNC_3(&VAR_18->cs);
                FUNC_2("Received unexpected session msg type %d\n", VAR_19[0]);
                FUNC_6(VAR_16);
                VAR_20 = VAR_10;
                goto error;
            }
            else
            {
                if (VAR_19[1] & VAR_1)
                {
                    FUNC_3(&VAR_18->cs);
                    FUNC_2("Received a message that's too long for my taste\n");
                    FUNC_6(VAR_16);
                    VAR_20 = VAR_10;
                    goto error;
                }
                else
                {
                    VAR_18->bytesPending = VAR_2
                     + FUNC_4(&VAR_19[2]) - VAR_24;
                    VAR_16->ncb_length = VAR_24 - VAR_2;
                    FUNC_3(&VAR_18->cs);
                }
            }
        }
        else
        {
            if (VAR_24 < VAR_18->bytesPending)
                VAR_18->bytesPending -= VAR_24;
            else
                VAR_18->bytesPending = 0;
            FUNC_3(&VAR_18->cs);
            VAR_16->ncb_length = VAR_24;
        }
        if (VAR_18->bytesPending > 0)
            VAR_20 = VAR_9;
        else
        {
            VAR_20 = VAR_8;
            VAR_17->recv_success++;
        }
    }
error:
    FUNC_7("returning 0x%02x\n", VAR_20);
    return VAR_20;
}
