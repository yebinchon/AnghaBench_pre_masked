
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_20__ {scalar_t__ EntryPoint; } ;
struct TYPE_19__ {TYPE_1__* Extension; int ConfigurationRoot; } ;
struct TYPE_18__ {int LoaderPagesSpanned; } ;
typedef int PVOID ;
typedef TYPE_2__* PLOADER_PARAMETER_BLOCK ;
typedef TYPE_3__* PLDR_DATA_TABLE_ENTRY ;
typedef scalar_t__ PCSTR ;
typedef int PCHAR ;
typedef int (* KERNEL_ENTRY_POINT ) (TYPE_2__*) ;
typedef scalar_t__ BOOLEAN ;
typedef int ARC_STATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,scalar_t__,scalar_t__,TYPE_3__**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (scalar_t__,char*) ;
 int FUNC_21 (TYPE_2__*) ;

ARC_STATUS
FUNC_22(
    USHORT VAR_5,
    PLOADER_PARAMETER_BLOCK VAR_6,
    PCSTR VAR_7,
    PCSTR VAR_8,
    BOOLEAN VAR_9)
{
    PLOADER_PARAMETER_BLOCK VAR_10;
    BOOLEAN VAR_11;
    PLDR_DATA_TABLE_ENTRY VAR_12;
    KERNEL_ENTRY_POINT VAR_13;
    PCSTR VAR_14;

    FUNC_7("LoadAndBootWindowsCommon()\n");

    FUNC_0(VAR_5 != 0);







    VAR_14 = FUNC_20(VAR_8, "\\");


    FUNC_8();
    FUNC_9(20, 100, "Detecting hardware...");
    VAR_6->ConfigurationRoot = FUNC_3();


    VAR_11 = FUNC_2(VAR_5,
                              VAR_6,
                              VAR_7,
                              VAR_8,
                              &VAR_12);
    if (!VAR_11)
    {
        FUNC_10("Error loading NTOS core.");
        return VAR_0;
    }


    FUNC_8();
    FUNC_9(100, 100, "Loading boot drivers...");
    VAR_11 = FUNC_12(VAR_6, VAR_8);
    FUNC_7("Boot drivers loading %s\n", VAR_11 ? "successful" : "failed");


    FUNC_1();


    FUNC_11(VAR_6,
                           VAR_7,
                           VAR_14,
                           VAR_8,
                           VAR_5);


    VAR_13 = (KERNEL_ENTRY_POINT)VAR_12->EntryPoint;
    VAR_10 = FUNC_5(VAR_6);


    FUNC_4();





    FUNC_15(VAR_6);


    FUNC_16(VAR_6);


    FUNC_13();


    VAR_6->Extension->LoaderPagesSpanned = VAR_3;

    FUNC_7("Hello from paged mode, KiSystemStartup %p, LoaderBlockVA %p!\n",
          VAR_13, VAR_10);


    FUNC_6((PVOID)VAR_2, VAR_4);

    FUNC_19(VAR_10);
    FUNC_18(VAR_10);

    FUNC_17(VAR_10);



    (*VAR_13)(VAR_10);
    return VAR_1;
}
