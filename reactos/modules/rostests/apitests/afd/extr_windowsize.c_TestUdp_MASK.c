
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef int ULONG ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sockaddr const*,int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int*,int *) ;
 int FUNC_3 (int ,int ,int *,int*,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static
void
FUNC_9(void)
{
    NTSTATUS VAR_6;
    HANDLE VAR_7;
    struct sockaddr_in VAR_8;
    ULONG VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_6 = FUNC_1(&VAR_7, VAR_2, VAR_4, VAR_3);
    FUNC_8(VAR_6 == VAR_5, "AfdCreateSocket failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_9, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_9 == 0x1000 || VAR_9 == 0x2000, "Invalid size: %lu\n", VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_10, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_10 == 0x1000 || VAR_10 == 0x2000, "Invalid size: %lu\n", VAR_10);

    VAR_11 = 0;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = 0;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    VAR_11 = (ULONG)-1L;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = (ULONG)-1L;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    VAR_11 = VAR_9;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = VAR_10;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    FUNC_7(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.sin_family = VAR_2;
    VAR_8.sin_addr.s_addr = FUNC_6("0.0.0.0");
    VAR_8.sin_port = FUNC_5(0);

    VAR_6 = FUNC_0(VAR_7, (const struct sockaddr *)&VAR_8, sizeof(VAR_8));
    FUNC_8(VAR_6 == VAR_5, "AfdBind failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    VAR_11 = 0;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = 0;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    VAR_11 = (ULONG)-1L;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = (ULONG)-1L;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    VAR_11 = VAR_9 + 1;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = VAR_10 + 1;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    VAR_11 = VAR_9 - 1;
    VAR_6 = FUNC_3(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);
    VAR_12 = VAR_10 - 1;
    VAR_6 = FUNC_3(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_0, ((void*)0), &VAR_11, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_11 == VAR_9, "Invalid size: %lu %lu\n", VAR_11, VAR_9);
    VAR_6 = FUNC_2(VAR_7, VAR_1, ((void*)0), &VAR_12, ((void*)0));
    FUNC_8(VAR_6 == VAR_5, "AfdGetInformation failed with %lx\n", VAR_6);
    FUNC_8(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);

    FUNC_4(VAR_7);
}
