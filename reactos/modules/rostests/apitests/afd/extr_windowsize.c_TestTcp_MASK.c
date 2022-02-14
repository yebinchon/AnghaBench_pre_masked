
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef int ULONG ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,struct sockaddr const*,int) ;
 int FUNC_1 (int ,struct sockaddr const*,int) ;
 int FUNC_2 (int *,void*,int ,int ) ;
 int FUNC_3 (int ,int ,int *,int*,int *) ;
 int FUNC_4 (int ,int ,int *,int*,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 int FUNC_9 (int,char*,int,...) ;

__attribute__((used)) static
void
FUNC_10(void)
{
    NTSTATUS VAR_7;
    HANDLE VAR_8;
    struct sockaddr_in VAR_9;
    ULONG VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_7 = FUNC_2(&VAR_8, VAR_2, VAR_4, VAR_3);
    FUNC_9(VAR_7 == VAR_6, "AfdCreateSocket failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_10, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_10 == 0x1000 || VAR_10 == 0x2000, "Invalid size: %lu\n", VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_11, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_11 == 0x1000 || VAR_11 == 0x2000, "Invalid size: %lu\n", VAR_11);

    VAR_12 = 0;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = 0;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_12 = (ULONG)-1L;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = (ULONG)-1L;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = VAR_10;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = VAR_11;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);

    FUNC_8(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.sin_family = VAR_2;
    VAR_9.sin_addr.s_addr = FUNC_7("0.0.0.0");
    VAR_9.sin_port = FUNC_6(0);

    VAR_7 = FUNC_0(VAR_8, (const struct sockaddr *)&VAR_9, sizeof(VAR_9));
    FUNC_9(VAR_7 == VAR_6, "AfdBind failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = 0;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = 0;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_12 = (ULONG)-1L;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = (ULONG)-1L;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = VAR_10;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = VAR_11;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_5, "AfdSetInformation failed with %lx\n", VAR_7);

    FUNC_8(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.sin_family = VAR_2;
    VAR_9.sin_addr.s_addr = FUNC_7("8.8.8.8");
    VAR_9.sin_port = FUNC_6(53);

    VAR_7 = FUNC_1(VAR_8, (const struct sockaddr *)&VAR_9, sizeof(VAR_9));
    FUNC_9(VAR_7 == VAR_6, "AfdConnect failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = 0;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = 0;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = (ULONG)-1L;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = (ULONG)-1L;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = VAR_10 + 1;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = VAR_11 + 1;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    VAR_12 = VAR_10 - 1;
    VAR_7 = FUNC_4(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);
    VAR_13 = VAR_11 - 1;
    VAR_7 = FUNC_4(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdSetInformation failed with %lx\n", VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0), &VAR_12, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_12 == VAR_10, "Invalid size: %lu %lu\n", VAR_12, VAR_10);
    VAR_7 = FUNC_3(VAR_8, VAR_1, ((void*)0), &VAR_13, ((void*)0));
    FUNC_9(VAR_7 == VAR_6, "AfdGetInformation failed with %lx\n", VAR_7);
    FUNC_9(VAR_13 == VAR_11, "Invalid size: %lu %lu\n", VAR_13, VAR_11);

    FUNC_5(VAR_8);
}
