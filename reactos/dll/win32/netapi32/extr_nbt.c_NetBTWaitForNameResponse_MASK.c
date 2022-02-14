
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int member_0; int member_1; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct fd_set {int dummy; } ;
typedef int fromaddr ;
typedef int buffer ;
struct TYPE_5__ {int member_0; int * member_1; } ;
typedef TYPE_1__ WSABUF ;
typedef scalar_t__ WORD ;
typedef scalar_t__ UCHAR ;
struct TYPE_6__ {scalar_t__ nameQueryXID; } ;
typedef scalar_t__ SOCKET ;
typedef scalar_t__* PUCHAR ;
typedef scalar_t__ (* NetBTAnswerCallback ) (void*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__) ;
typedef TYPE_2__ NetBTAdapter ;
typedef int DWORD ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct fd_set*) ;
 int FUNC_1 (struct fd_set*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__,TYPE_1__*,int,int*,int*,struct sockaddr*,int*,int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,struct fd_set*,int *,int *,struct timeval*) ;

__attribute__((used)) static UCHAR FUNC_8(const NetBTAdapter *VAR_12, SOCKET VAR_13,
 DWORD VAR_14, NetBTAnswerCallback VAR_15, void *VAR_16)
{
    BOOL VAR_17 = VAR_0;
    DWORD VAR_18;
    UCHAR VAR_19 = VAR_8;

    if (!VAR_12) return VAR_7;
    if (VAR_13 == VAR_1) return VAR_7;
    if (!VAR_15) return VAR_7;

    while (!VAR_17 && VAR_19 == VAR_8 && (int)((VAR_18 = FUNC_2()) - VAR_14) < 0)
    {
        DWORD VAR_20 = VAR_14 - VAR_18;
        struct fd_set VAR_21;
        struct timeval VAR_22 = { VAR_20 / 1000, VAR_20 % 1000 };
        int VAR_23;

        FUNC_1(&VAR_21);
        FUNC_0(VAR_13, &VAR_21);
        VAR_23 = FUNC_7(VAR_13 + 1, &VAR_21, ((void*)0), ((void*)0), &VAR_22);
        if (VAR_23 < 0)
            VAR_19 = VAR_10;
        else if (VAR_23 == 1)
        {

            UCHAR VAR_24[256];
            int VAR_25;
            struct sockaddr_in VAR_26;
            WORD VAR_27, VAR_28, VAR_29, VAR_30;
            WSABUF VAR_31 = { sizeof(VAR_24), (CHAR*)VAR_24 };
            DWORD VAR_32, VAR_33 = 0;

            VAR_25 = sizeof(VAR_26);
            VAR_23 = FUNC_5(VAR_13, &VAR_31, 1, &VAR_32, &VAR_33,
             (struct sockaddr*)&VAR_26, &VAR_25, ((void*)0), ((void*)0));
            if(VAR_23 < 0)
            {
                VAR_19 = VAR_10;
                break;
            }

            if (VAR_32 < VAR_3)
                continue;

            VAR_27 = FUNC_3(VAR_24);
            if (VAR_12->nameQueryXID != VAR_27)
                continue;

            VAR_28 = FUNC_3(VAR_24 + 2);
            VAR_29 = FUNC_3(VAR_24 + 4);
            VAR_30 = FUNC_3(VAR_24 + 6);


            if (VAR_29 > 0)
                continue;

            if ((VAR_28 & VAR_5) == VAR_6)
            {
                if ((VAR_28 & VAR_4) != 0)
                    VAR_19 = VAR_9;
                else if ((VAR_28 & VAR_4) == 0 && VAR_30 > 0)
                {
                    PUCHAR VAR_34 = VAR_24 + VAR_3;
                    BOOL VAR_35 = VAR_11;
                    WORD VAR_36 = 0;

                    VAR_17 = VAR_11;

                    while (VAR_19 == VAR_8 && VAR_36 < VAR_30 &&
                     VAR_34 - VAR_24 < VAR_32 && VAR_35)
                    {
                        WORD VAR_37;


                        for (; VAR_34[0] && VAR_34 - VAR_24 < VAR_32; )
                            VAR_34 += VAR_34[0] + 1;
                        VAR_34++;
                        VAR_34 += 2;
                        if (VAR_34 - VAR_24 < VAR_32 && VAR_19 == VAR_8
                         && FUNC_3(VAR_34) == VAR_2)
                            VAR_34 += sizeof(WORD);
                        else
                            VAR_19 = VAR_10;
                        VAR_34 += sizeof(DWORD);
                        VAR_37 = FUNC_3(VAR_34);
                        VAR_37 = FUNC_6(VAR_37, VAR_32 - (VAR_34 - VAR_24));
                        VAR_34 += sizeof(WORD);
                        VAR_35 = VAR_15(VAR_16, VAR_30,
                         VAR_36, VAR_34, VAR_37);
                        VAR_34 += VAR_37;
                        VAR_36++;
                    }
                }
            }
        }
    }
    FUNC_4("returning 0x%02x\n", VAR_19);
    return VAR_19;
}
