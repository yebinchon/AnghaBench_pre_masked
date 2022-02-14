
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sb_size; char* sb_start; } ;
struct TYPE_5__ {char* av_val; int av_len; } ;
struct TYPE_6__ {int m_resplen; TYPE_3__ m_sb; int m_polling; TYPE_1__ m_clientID; int m_unackd; } ;
typedef TYPE_2__ RTMP ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(RTMP *VAR_0, int VAR_1)
{
    char *VAR_2;
    int VAR_3;

restart:
    if (VAR_1)
        FUNC_0(&VAR_0->m_sb);
    if (VAR_0->m_sb.sb_size < 13)
    {
        if (VAR_1)
            goto restart;
        return -2;
    }
    if (FUNC_5(VAR_0->m_sb.sb_start, "HTTP/1.1 200 ", 13))
        return -1;
    VAR_0->m_sb.sb_start[VAR_0->m_sb.sb_size] = '\0';
    if (!FUNC_6(VAR_0->m_sb.sb_start, "\r\n\r\n"))
    {
        if (VAR_1)
            goto restart;
        return -2;
    }

    VAR_2 = VAR_0->m_sb.sb_start + sizeof("HTTP/1.1 200");
    while ((VAR_2 = FUNC_6(VAR_2, "Content-")))
    {
        if (!FUNC_4(VAR_2+8, "length:", 7)) break;
        VAR_2 += 8;
    }
    if (!VAR_2)
        return -1;
    VAR_3 = FUNC_1(VAR_2+16);
    VAR_2 = FUNC_6(VAR_2+16, "\r\n\r\n");
    if (!VAR_2)
        return -1;
    VAR_2 += 4;
    if (VAR_2 + (VAR_0->m_clientID.av_val ? 1 : VAR_3) > VAR_0->m_sb.sb_start + VAR_0->m_sb.sb_size)
    {
        if (VAR_1)
            goto restart;
        return -2;
    }
    VAR_0->m_sb.sb_size -= VAR_2 - VAR_0->m_sb.sb_start;
    VAR_0->m_sb.sb_start = VAR_2;
    VAR_0->m_unackd--;

    if (!VAR_0->m_clientID.av_val)
    {
        VAR_0->m_clientID.av_len = VAR_3;
        VAR_0->m_clientID.av_val = FUNC_2(VAR_3+1);
        if (!VAR_0->m_clientID.av_val)
            return -1;
        VAR_0->m_clientID.av_val[0] = '/';
        FUNC_3(VAR_0->m_clientID.av_val+1, VAR_2, VAR_3-1);
        VAR_0->m_clientID.av_val[VAR_3] = 0;
        VAR_0->m_sb.sb_size = 0;
    }
    else
    {
        VAR_0->m_polling = *VAR_2++;
        VAR_0->m_resplen = VAR_3 - 1;
        VAR_0->m_sb.sb_start++;
        VAR_0->m_sb.sb_size--;
    }
    return 0;
}
