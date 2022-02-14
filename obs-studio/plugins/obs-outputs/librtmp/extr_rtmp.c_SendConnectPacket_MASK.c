
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_18__ {scalar_t__ av_len; } ;
struct TYPE_17__ {scalar_t__ av_len; } ;
struct TYPE_13__ {int o_num; int * o_props; } ;
struct TYPE_14__ {int protocol; int lFlags; TYPE_1__ extras; TYPE_6__ auth; TYPE_5__ pageUrl; TYPE_5__ tcUrl; TYPE_5__ swfUrl; TYPE_5__ flashVer; TYPE_5__ app; } ;
struct TYPE_16__ {double m_fAudioCodecs; double m_fVideoCodecs; double m_fEncoding; TYPE_2__ Link; scalar_t__ m_bSendEncoding; int m_numInvokes; int m_outChunkSize; scalar_t__ m_bSendChunkSizeInfo; } ;
struct TYPE_15__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; void* m_headerType; } ;
typedef TYPE_3__ RTMPPacket ;
typedef TYPE_4__ RTMP ;


 char* FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int ) ;
 char* FUNC_3 (char*,char*,int *,int) ;
 char* FUNC_4 (char*,char*,int *,double) ;
 char* FUNC_5 (char*,char*,int *,TYPE_5__*) ;
 char* FUNC_6 (char*,char*,int ) ;
 char* FUNC_7 (char*,char*,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_6__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_9(RTMP *VAR_24, RTMPPacket *VAR_25)
{
    RTMPPacket VAR_26;
    char VAR_27[4096], *VAR_28 = VAR_27 + sizeof(VAR_27);
    char *VAR_29;

    if (VAR_25)
        return FUNC_8(VAR_24, VAR_25, VAR_9);

    if((VAR_24->Link.protocol & VAR_3) && VAR_24->m_bSendChunkSizeInfo)
    {
        VAR_26.m_nChannel = 0x02;
        VAR_26.m_headerType = VAR_6;
        VAR_26.m_packetType = VAR_7;
        VAR_26.m_nTimeStamp = 0;
        VAR_26.m_nInfoField2 = 0;
        VAR_26.m_hasAbsTimestamp = 0;
        VAR_26.m_body = VAR_27 + VAR_5;
        VAR_26.m_nBodySize = 4;

        VAR_29 = VAR_26.m_body;
        FUNC_2(VAR_29, VAR_28, VAR_24->m_outChunkSize);

        if(!FUNC_8(VAR_24, &VAR_26, VAR_2))
            return 0;
    }

    VAR_26.m_nChannel = 0x03;
    VAR_26.m_headerType = VAR_6;
    VAR_26.m_packetType = VAR_8;
    VAR_26.m_nTimeStamp = 0;
    VAR_26.m_nInfoField2 = 0;
    VAR_26.m_hasAbsTimestamp = 0;
    VAR_26.m_body = VAR_27 + VAR_5;

    VAR_29 = VAR_26.m_body;
    VAR_29 = FUNC_7(VAR_29, VAR_28, &VAR_13);
    VAR_29 = FUNC_6(VAR_29, VAR_28, ++VAR_24->m_numInvokes);
    *VAR_29++ = VAR_0;

    VAR_29 = FUNC_5(VAR_29, VAR_28, &VAR_10, &VAR_24->Link.app);
    if (!VAR_29)
        return VAR_2;
    if (VAR_24->Link.protocol & VAR_3)
    {
        VAR_29 = FUNC_5(VAR_29, VAR_28, &VAR_21, &VAR_16);
        if (!VAR_29)
            return VAR_2;
    }
    if (VAR_24->Link.flashVer.av_len)
    {
        VAR_29 = FUNC_5(VAR_29, VAR_28, &VAR_14, &VAR_24->Link.flashVer);
        if (!VAR_29)
            return VAR_2;
    }
    if (VAR_24->Link.swfUrl.av_len)
    {
        VAR_29 = FUNC_5(VAR_29, VAR_28, &VAR_19, &VAR_24->Link.swfUrl);
        if (!VAR_29)
            return VAR_2;
    }
    if (VAR_24->Link.tcUrl.av_len)
    {
        VAR_29 = FUNC_5(VAR_29, VAR_28, &VAR_20, &VAR_24->Link.tcUrl);
        if (!VAR_29)
            return VAR_2;
    }
    if (!(VAR_24->Link.protocol & VAR_3))
    {
        VAR_29 = FUNC_3(VAR_29, VAR_28, &VAR_15, VAR_2);
        if (!VAR_29)
            return VAR_2;
        VAR_29 = FUNC_4(VAR_29, VAR_28, &VAR_12, 15.0);
        if (!VAR_29)
            return VAR_2;
        VAR_29 = FUNC_4(VAR_29, VAR_28, &VAR_11, VAR_24->m_fAudioCodecs);
        if (!VAR_29)
            return VAR_2;
        VAR_29 = FUNC_4(VAR_29, VAR_28, &VAR_22, VAR_24->m_fVideoCodecs);
        if (!VAR_29)
            return VAR_2;
        VAR_29 = FUNC_4(VAR_29, VAR_28, &VAR_23, 1.0);
        if (!VAR_29)
            return VAR_2;
        if (VAR_24->Link.pageUrl.av_len)
        {
            VAR_29 = FUNC_5(VAR_29, VAR_28, &VAR_18, &VAR_24->Link.pageUrl);
            if (!VAR_29)
                return VAR_2;
        }
    }
    if (VAR_24->m_fEncoding != 0.0 || VAR_24->m_bSendEncoding)
    {

        VAR_29 = FUNC_4(VAR_29, VAR_28, &VAR_17, VAR_24->m_fEncoding);
        if (!VAR_29)
            return VAR_2;
    }
    if (VAR_29 + 3 >= VAR_28)
        return VAR_2;
    *VAR_29++ = 0;
    *VAR_29++ = 0;
    *VAR_29++ = VAR_1;


    if (VAR_24->Link.auth.av_len)
    {
        VAR_29 = FUNC_1(VAR_29, VAR_28, VAR_24->Link.lFlags & VAR_4);
        if (!VAR_29)
            return VAR_2;
        VAR_29 = FUNC_7(VAR_29, VAR_28, &VAR_24->Link.auth);
        if (!VAR_29)
            return VAR_2;
    }
    if (VAR_24->Link.extras.o_num)
    {
        int VAR_30;
        for (VAR_30 = 0; VAR_30 < VAR_24->Link.extras.o_num; VAR_30++)
        {
            VAR_29 = FUNC_0(&VAR_24->Link.extras.o_props[VAR_30], VAR_29, VAR_28);
            if (!VAR_29)
                return VAR_2;
        }
    }
    VAR_26.m_nBodySize = VAR_29 - VAR_26.m_body;

    return FUNC_8(VAR_24, &VAR_26, VAR_9);
}
