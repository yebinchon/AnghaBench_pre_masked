
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct buffer {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ socket_descriptor_t ;
typedef int fd_set ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct buffer*) ;
 int FUNC_4 (struct buffer*,int ) ;
 int FUNC_5 (struct buffer*,char) ;
 int FUNC_6 (int volatile*) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (scalar_t__,char*,int,int ) ;
 int FUNC_12 (scalar_t__,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static bool
FUNC_13(socket_descriptor_t VAR_4,
          char *VAR_5,
          int VAR_6,
          const int VAR_7,
          const bool VAR_8,
          struct buffer *VAR_9,
          volatile int *VAR_10)
{
    struct buffer VAR_11;
    int VAR_12 = 0;

    FUNC_1(VAR_11);
    if (VAR_9)
    {
        VAR_11 = *VAR_9;
    }

    while (1)
    {
        int VAR_13;
        ssize_t VAR_14;
        fd_set VAR_15;
        struct timeval VAR_16;
        uint8_t VAR_17;

        if (FUNC_3(&VAR_11))
        {
            FUNC_0(FUNC_4(&VAR_11, 0));
        }

        FUNC_2(&VAR_15);
        FUNC_10(VAR_4, &VAR_15);
        VAR_16.tv_sec = VAR_7;
        VAR_16.tv_usec = 0;

        VAR_13 = FUNC_12(VAR_4 + 1, &VAR_15, ((void*)0), ((void*)0), &VAR_16);

        FUNC_6(VAR_10);
        if (*VAR_10)
        {
            goto error;
        }


        if (VAR_13 == 0)
        {
            if (VAR_8)
            {
                FUNC_9(VAR_0 | VAR_2, "recv_line: TCP port read timeout expired");
            }
            goto error;
        }


        if (VAR_13 < 0)
        {
            if (VAR_8)
            {
                FUNC_9(VAR_0 | VAR_2, "recv_line: TCP port read failed on select()");
            }
            goto error;
        }


        VAR_14 = FUNC_11(VAR_4, &VAR_17, 1, VAR_1);


        if (VAR_14 != 1)
        {
            if (VAR_8)
            {
                FUNC_9(VAR_0 | VAR_2, "recv_line: TCP port read failed on recv()");
            }
            goto error;
        }
        if (VAR_6 > 1)
        {
            *VAR_5++ = VAR_17;
            --VAR_6;
        }


        if (FUNC_3(&VAR_11))
        {
            FUNC_5(&VAR_11, VAR_17);
            if (!FUNC_7(VAR_17) && !FUNC_8(VAR_17))
            {
                if (VAR_8)
                {
                    FUNC_9(VAR_0 | VAR_2, "recv_line: Non-ASCII character (%d) read on recv()", (int)VAR_17);
                }
                *VAR_9 = VAR_11;
                return 0;
            }
        }


        if (VAR_12 == '\r' && VAR_17 == '\n')
        {
            break;
        }

        VAR_12 = VAR_17;
    }


    if (VAR_6 > 0)
    {
        *VAR_5++ = '\0';
    }

    return 1;

error:
    return 0;
}
