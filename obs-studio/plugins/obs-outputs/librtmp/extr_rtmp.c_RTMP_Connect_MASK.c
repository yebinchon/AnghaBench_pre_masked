
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ socklen_t ;
typedef int service ;
struct TYPE_11__ {int av_len; } ;
struct TYPE_9__ {int port; TYPE_4__ hostname; int socksport; TYPE_4__ sockshost; } ;
struct TYPE_8__ {scalar_t__ addrLen; } ;
struct TYPE_10__ {int last_error_code; int m_bSendCounter; TYPE_2__ Link; TYPE_1__ m_bindIP; } ;
typedef int RTMPPacket ;
typedef TYPE_3__ RTMP ;
typedef int HOSTENT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,struct sockaddr*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct sockaddr_storage*,scalar_t__*,TYPE_4__*,int ,scalar_t__,int*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (struct sockaddr_storage*,int ,int) ;

int
FUNC_7(RTMP *VAR_4, RTMPPacket *VAR_5)
{



    struct sockaddr_storage VAR_6;
    socklen_t VAR_7 = 0;
    socklen_t VAR_8 = 0;
    int VAR_9 = 0;

    if (!VAR_4->Link.hostname.av_len)
        return VAR_0;
    FUNC_6(&VAR_6, 0, sizeof(VAR_6));

    if (VAR_4->m_bindIP.addrLen)
        VAR_8 = VAR_4->m_bindIP.addrLen;

    if (VAR_4->Link.socksport)
    {

        if (!FUNC_4(&VAR_6, &VAR_7, &VAR_4->Link.sockshost, VAR_4->Link.socksport, VAR_8, &VAR_9))
        {
            VAR_4->last_error_code = VAR_9;
            return VAR_0;
        }
    }
    else
    {

        if (!FUNC_4(&VAR_6, &VAR_7, &VAR_4->Link.hostname, VAR_4->Link.port, VAR_8, &VAR_9))
        {
            VAR_4->last_error_code = VAR_9;
            return VAR_0;
        }
    }

    if (!FUNC_1(VAR_4, (struct sockaddr *)&VAR_6, VAR_7))
        return VAR_0;

    VAR_4->m_bSendCounter = VAR_2;

    return FUNC_2(VAR_4, VAR_5);
}
