
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int av_len; char* av_val; } ;
typedef TYPE_1__ AVal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char*) ;

int FUNC_6(const char *VAR_12, int *VAR_13, AVal *VAR_14, unsigned int *VAR_15,
                  AVal *VAR_16)
{
    char *VAR_17, *VAR_18, *VAR_19, *VAR_20, *VAR_21;

    FUNC_0(VAR_1, "Parsing...");

    *VAR_13 = VAR_5;
    *VAR_15 = 0;
    VAR_16->av_len = 0;
    VAR_16->av_val = ((void*)0);




    VAR_17 = FUNC_5(VAR_12, "://");
    if(!VAR_17)
    {
        FUNC_0(VAR_2, "RTMP URL: No :// in url!");
        return VAR_0;
    }
    {
        int VAR_22 = (int)(VAR_17-VAR_12);

        if(VAR_22 == 4 && FUNC_4(VAR_12, "rtmp", 4)==0)
            *VAR_13 = VAR_5;
        else if(VAR_22 == 5 && FUNC_4(VAR_12, "rtmpt", 5)==0)
            *VAR_13 = VAR_8;
        else if(VAR_22 == 5 && FUNC_4(VAR_12, "rtmps", 5)==0)
            *VAR_13 = VAR_7;
        else if(VAR_22 == 5 && FUNC_4(VAR_12, "rtmpe", 5)==0)
            *VAR_13 = VAR_6;
        else if(VAR_22 == 5 && FUNC_4(VAR_12, "rtmfp", 5)==0)
            *VAR_13 = VAR_4;
        else if(VAR_22 == 6 && FUNC_4(VAR_12, "rtmpte", 6)==0)
            *VAR_13 = VAR_9;
        else if(VAR_22 == 6 && FUNC_4(VAR_12, "rtmpts", 6)==0)
            *VAR_13 = VAR_10;
        else
        {
            FUNC_0(VAR_3, "Unknown protocol!\n");
            goto parsehost;
        }
    }

    FUNC_0(VAR_1, "Parsed protocol: %d", *VAR_13);

parsehost:

    VAR_17+=3;


    if(*VAR_17==0)
    {
        FUNC_0(VAR_3, "No hostname in URL!");
        return VAR_0;
    }

    VAR_18 = VAR_17 + FUNC_3(VAR_17);
    VAR_21 = FUNC_2(VAR_17, ']');

    VAR_20 = FUNC_2(VAR_17, '/');
    VAR_19 = FUNC_2((VAR_21 && VAR_21 < VAR_20) ? VAR_21 : VAR_17, ':');

    {
        int VAR_23;
        if(VAR_20)
            VAR_23 = VAR_20 - VAR_17;
        else
            VAR_23 = VAR_18 - VAR_17;
        if(VAR_19 && VAR_19 -VAR_17 < VAR_23)
            VAR_23 = VAR_19 - VAR_17;

        if(VAR_23 < 256)
        {
            VAR_14->av_val = VAR_17;
            VAR_14->av_len = VAR_23;
            FUNC_0(VAR_1, "Parsed host    : %.*s", VAR_23, VAR_14->av_val);
        }
        else
        {
            FUNC_0(VAR_3, "Hostname exceeds 255 characters!");
        }

        VAR_17+=VAR_23;
    }


    if(*VAR_17 == ':')
    {
        unsigned int VAR_24;
        VAR_17++;
        VAR_24 = FUNC_1(VAR_17);
        if(VAR_24 > 65535)
        {
            FUNC_0(VAR_3, "Invalid port number!");
        }
        else
        {
            *VAR_15 = VAR_24;
        }
    }

    if(!VAR_20)
    {
        FUNC_0(VAR_3, "No application or playpath in URL!");
        return VAR_11;
    }
    VAR_17 = VAR_20+1;


    VAR_16->av_val = VAR_17;
    VAR_16->av_len = (int)FUNC_3(VAR_17);

    if(VAR_16->av_len && VAR_17[VAR_16->av_len-1] == '/')
        VAR_16->av_len--;

    FUNC_0(VAR_1, "Parsed app     : %.*s", VAR_16->av_len, VAR_17);
    VAR_17 += VAR_16->av_len;

    if (*VAR_17 == '/')
        VAR_17++;

    return VAR_11;
}
