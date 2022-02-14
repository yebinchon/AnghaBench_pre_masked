
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char const* av_val; scalar_t__ av_len; } ;
struct TYPE_7__ {char* av_val; int av_len; } ;
struct TYPE_8__ {int socksport; TYPE_1__ sockshost; } ;
struct TYPE_9__ {TYPE_2__ Link; } ;
typedef TYPE_3__ RTMP ;
typedef TYPE_4__ AVal ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(RTMP *VAR_1, AVal *VAR_2)
{
    if (VAR_2->av_len)
    {
        const char *VAR_3 = FUNC_2(VAR_2->av_val, ':');
        char *VAR_4 = FUNC_3(VAR_2->av_val);

        if (VAR_3)
            VAR_4[VAR_3 - VAR_2->av_val] = '\0';
        VAR_1->Link.sockshost.av_val = VAR_4;
        VAR_1->Link.sockshost.av_len = (int)FUNC_4(VAR_4);

        VAR_1->Link.socksport = VAR_3 ? FUNC_1(VAR_3 + 1) : 1080;
        FUNC_0(VAR_0, "Connecting via SOCKS proxy: %s:%d", VAR_1->Link.sockshost.av_val,
                 VAR_1->Link.socksport);
    }
    else
    {
        VAR_1->Link.sockshost.av_val = ((void*)0);
        VAR_1->Link.sockshost.av_len = 0;
        VAR_1->Link.socksport = 0;
    }
}
