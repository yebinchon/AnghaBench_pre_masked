
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wsaBufs ;
struct TYPE_8__ {int len; char* buf; } ;
typedef TYPE_1__ WSABUF ;
typedef scalar_t__ UCHAR ;
struct TYPE_11__ {int xmit_success; } ;
struct TYPE_10__ {scalar_t__ fd; } ;
struct TYPE_9__ {int ncb_length; scalar_t__ ncb_buffer; } ;
typedef TYPE_2__* PNCB ;
typedef TYPE_3__ NetBTSession ;
typedef TYPE_4__ NetBTAdapter ;
typedef int DWORD ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_3 (char*,void*,...) ;
 int FUNC_4 (scalar_t__,TYPE_1__*,int,int*,int ,int *,int *) ;

__attribute__((used)) static UCHAR FUNC_5(void *VAR_10, void *VAR_11, PNCB VAR_12)
{
    NetBTAdapter *VAR_13 = VAR_10;
    NetBTSession *VAR_14 = VAR_11;
    UCHAR VAR_15[VAR_1], VAR_16;
    int VAR_17;
    WSABUF VAR_18[2];
    DWORD VAR_19;

    FUNC_3("adapt %p, session %p, NCB %p\n", VAR_10, VAR_14, VAR_12);

    if (!VAR_13) return VAR_4;
    if (!VAR_12) return VAR_6;
    if (!VAR_12->ncb_buffer) return VAR_3;
    if (!VAR_14) return VAR_8;
    if (VAR_14->fd == VAR_0) return VAR_8;

    VAR_15[0] = VAR_2;
    VAR_15[1] = 0;
    FUNC_1(&VAR_15[2], VAR_12->ncb_length);

    VAR_18[0].len = VAR_1;
    VAR_18[0].buf = (char*)VAR_15;
    VAR_18[1].len = VAR_12->ncb_length;
    VAR_18[1].buf = (char*)VAR_12->ncb_buffer;

    VAR_17 = FUNC_4(VAR_14->fd, VAR_18, sizeof(VAR_18) / sizeof(VAR_18[0]),
     &VAR_19, 0, ((void*)0), ((void*)0));
    if (VAR_17 == VAR_9)
    {
        FUNC_2(VAR_12);
        VAR_16 = VAR_7;
    }
    else if (VAR_19 < VAR_1 + VAR_12->ncb_length)
    {
        FUNC_0("Only sent %d bytes (of %d), hanging up session\n", VAR_19,
         VAR_1 + VAR_12->ncb_length);
        FUNC_2(VAR_12);
        VAR_16 = VAR_7;
    }
    else
    {
        VAR_16 = VAR_5;
        VAR_13->xmit_success++;
    }
    FUNC_3("returning 0x%02x\n", VAR_16);
    return VAR_16;
}
