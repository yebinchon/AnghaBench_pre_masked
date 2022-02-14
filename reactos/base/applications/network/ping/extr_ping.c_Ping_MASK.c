
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {int S_addr; } ;
struct TYPE_18__ {TYPE_4__ S_un; } ;
struct TYPE_15__ {int Word; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
struct sockaddr_in6 {TYPE_5__ sin_addr; int sin_family; TYPE_3__ sin6_addr; scalar_t__ sin6_family; } ;
typedef int socklen_t ;
typedef int USHORT ;
struct TYPE_19__ {int Ttl; } ;
struct TYPE_22__ {int Status; int DataSize; int RoundTripTime; TYPE_6__ Options; int Address; } ;
struct TYPE_21__ {int sin6_addr; } ;
struct TYPE_14__ {int s_addr; } ;
struct TYPE_20__ {TYPE_1__ sin_addr; } ;
struct TYPE_13__ {scalar_t__ ai_addr; } ;
struct TYPE_12__ {int Status; int RoundTripTime; int Address; } ;
typedef int Source ;
typedef int SockAddrIn6 ;
typedef int SockAddrIn ;
typedef struct sockaddr_in6 SOCKADDR_IN6 ;
typedef struct sockaddr_in6 SOCKADDR_IN ;
typedef struct sockaddr_in6* PVOID ;
typedef TYPE_7__* PSOCKADDR_IN ;
typedef scalar_t__ PSOCKADDR ;
typedef TYPE_8__* PIPV6_ADDRESS_EX ;
typedef TYPE_9__* PICMP_ECHO_REPLY ;
typedef TYPE_10__* PICMPV6_ECHO_REPLY ;
typedef int IPAddr ;
typedef int ICMP_ECHO_REPLY ;
typedef int ICMPV6_ECHO_REPLY ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,int,int ,int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;





 int FUNC_5 (int ,int *,int *,int *,struct sockaddr_in6*,struct sockaddr_in6*,struct sockaddr_in6*,int ,int *,struct sockaddr_in6*,int,int ) ;
 int FUNC_6 (int ,int *,int *,int *,int ,struct sockaddr_in6*,int ,int *,struct sockaddr_in6*,int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_11__* VAR_30 ;
 int VAR_31 ;
 int FUNC_7 (struct sockaddr_in6*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sockaddr_in6*) ;
 int VAR_32 ;
 struct sockaddr_in6* FUNC_10 (int) ;

__attribute__((used)) static
void
FUNC_11(void)
{
    PVOID VAR_33 = ((void*)0);
    PVOID VAR_34 = ((void*)0);
    DWORD VAR_35 = 0;
    DWORD VAR_36;

    VAR_34 = FUNC_10(VAR_25);
    if (VAR_34 == ((void*)0))
    {
        FUNC_1(VAR_28, VAR_9);
        FUNC_8(1);
    }

    FUNC_7(VAR_34, VAR_25);

    if (VAR_6 == VAR_1)
        VAR_35 += sizeof(ICMPV6_ECHO_REPLY);
    else
        VAR_35 += sizeof(ICMP_ECHO_REPLY);

    VAR_35 += VAR_25 + VAR_26 + VAR_27;

    VAR_33 = FUNC_10(VAR_35);
    if (VAR_33 == ((void*)0))
    {
        FUNC_1(VAR_28, VAR_9);
        FUNC_9(VAR_34);
        FUNC_8(1);
    }

    FUNC_7(VAR_33, VAR_35);

    VAR_4++;

    if (VAR_6 == VAR_1)
    {
        struct sockaddr_in6 VAR_37;

        FUNC_7(&VAR_37, sizeof(VAR_37));
        VAR_37.sin6_family = VAR_1;

        VAR_36 = FUNC_5(VAR_32, ((void*)0), ((void*)0), ((void*)0),
                                &VAR_37,
                                (struct sockaddr_in6 *)VAR_30->ai_addr,
                                VAR_34, (USHORT)VAR_25, &VAR_19,
                                VAR_33, VAR_35, VAR_31);
    }
    else
    {
        VAR_36 = FUNC_6(VAR_32, ((void*)0), ((void*)0), ((void*)0),
                               ((PSOCKADDR_IN)VAR_30->ai_addr)->sin_addr.s_addr,
                               VAR_34, (USHORT)VAR_25, &VAR_19,
                               VAR_33, VAR_35, VAR_31);
    }

    FUNC_9(VAR_34);

    if (VAR_36 == 0)
    {
        VAR_36 = FUNC_3();
        switch (VAR_36)
        {
        case 130:
            FUNC_1(VAR_29, VAR_16);
            break;

        default:
            FUNC_1(VAR_29, VAR_17, VAR_36);
            break;
        }
    }
    else
    {
        SOCKADDR_IN6 VAR_38;
        SOCKADDR_IN VAR_39;
        PSOCKADDR VAR_40;
        socklen_t VAR_41;

        VAR_3++;

        FUNC_7(&VAR_39, sizeof(VAR_39));
        FUNC_7(&VAR_38, sizeof(VAR_38));

        if (VAR_6 == VAR_1)
        {
            PICMPV6_ECHO_REPLY VAR_42;
            PIPV6_ADDRESS_EX VAR_43;

            VAR_42 = (PICMPV6_ECHO_REPLY)VAR_33;

            VAR_43 = (PIPV6_ADDRESS_EX)&VAR_42->Address;
            VAR_38 = VAR_1;
            FUNC_2(VAR_38, VAR_43->sin6_addr, sizeof(VAR_38));

            VAR_40 = (PSOCKADDR)&VAR_38;
            VAR_41 = sizeof(SOCKADDR_IN6);

            FUNC_4(VAR_40,
                         VAR_41,
                         VAR_2,
                         VAR_20,
                         ((void*)0),
                         0,
                         VAR_21);

            FUNC_1(VAR_29, VAR_11, VAR_2);

            switch (VAR_42->Status)
            {
            case 129:
            {
                VAR_5++;

                if (VAR_42->RoundTripTime == 0)
                    FUNC_1(VAR_29, VAR_13);
                else
                    FUNC_1(VAR_29, VAR_14, VAR_42->RoundTripTime);

                if (VAR_42->RoundTripTime < VAR_23 || VAR_23 == 0)
                    VAR_23 = VAR_42->RoundTripTime;

                if (VAR_42->RoundTripTime > VAR_22 || VAR_22 == 0)
                    VAR_22 = VAR_42->RoundTripTime;

                FUNC_0(VAR_29, L"\n");

                VAR_24 += VAR_42->RoundTripTime;
                break;
            }

            case 131:
                FUNC_1(VAR_29, VAR_8);
                break;

            case 132:
                FUNC_1(VAR_29, VAR_7);
                break;

            case 128:
                FUNC_1(VAR_29, VAR_18);
                break;

            default:
                FUNC_1(VAR_29, VAR_12, VAR_42->Status);
                break;
            }
        }
        else
        {
            PICMP_ECHO_REPLY VAR_44;
            IPAddr *VAR_45;

            VAR_44 = (PICMP_ECHO_REPLY)VAR_33;

            VAR_45 = (IPAddr *)&VAR_44->Address;
            VAR_39.sin_family = VAR_0;
            VAR_39.sin_addr.S_un.S_addr = *VAR_45;
            VAR_40 = (PSOCKADDR)&VAR_39;
            VAR_41 = sizeof(SOCKADDR_IN);

            FUNC_4(VAR_40,
                         VAR_41,
                         VAR_2,
                         VAR_20,
                         ((void*)0),
                         0,
                         VAR_21);

            FUNC_1(VAR_29, VAR_11, VAR_2);

            switch (VAR_44->Status)
            {
            case 129:
            {
                VAR_5++;

                FUNC_1(VAR_29, VAR_10, VAR_44->DataSize);

                if (VAR_44->RoundTripTime == 0)
                    FUNC_1(VAR_29, VAR_13);
                else
                    FUNC_1(VAR_29, VAR_14, VAR_44->RoundTripTime);

                FUNC_1(VAR_29, VAR_15, VAR_44->Options.Ttl);

                if (VAR_44->RoundTripTime < VAR_23 || VAR_23 == 0)
                    VAR_23 = VAR_44->RoundTripTime;

                if (VAR_44->RoundTripTime > VAR_22 || VAR_22 == 0)
                    VAR_22 = VAR_44->RoundTripTime;

                VAR_24 += VAR_44->RoundTripTime;
                break;
            }

            case 131:
                FUNC_1(VAR_29, VAR_8);
                break;

            case 132:
                FUNC_1(VAR_29, VAR_7);
                break;

            case 128:
                FUNC_1(VAR_29, VAR_18);
                break;

            default:
                FUNC_1(VAR_29, VAR_12, VAR_44->Status);
                break;
            }
        }
    }

    FUNC_9(VAR_33);
}
