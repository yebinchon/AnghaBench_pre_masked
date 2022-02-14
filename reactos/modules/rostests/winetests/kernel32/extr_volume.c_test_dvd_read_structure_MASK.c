
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Length; int * Reserved; } ;
struct COMPLETE_DVD_MANUFACTURER_DESCRIPTOR {TYPE_2__ Header; } ;
struct COMPLETE_DVD_LAYER_DESCRIPTOR {TYPE_2__ Header; } ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {int Format; scalar_t__ LayerNumber; scalar_t__ SessionId; TYPE_1__ BlockByteOffset; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_3__ DVD_READ_STRUCTURE ;
typedef int DVD_MANUFACTURER_DESCRIPTOR ;
typedef struct COMPLETE_DVD_MANUFACTURER_DESCRIPTOR DVD_LAYER_DESCRIPTOR ;
typedef int DVD_DESCRIPTOR_HEADER ;
typedef struct COMPLETE_DVD_MANUFACTURER_DESCRIPTOR DVD_COPYRIGHT_DESCRIPTOR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_3__*,int,struct COMPLETE_DVD_MANUFACTURER_DESCRIPTOR*,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(HANDLE VAR_4)
{
    int VAR_5;
    DWORD VAR_6;
    BOOL VAR_7;
    DVD_READ_STRUCTURE VAR_8;
    DVD_LAYER_DESCRIPTOR VAR_9;
    struct COMPLETE_DVD_LAYER_DESCRIPTOR VAR_10;
    DVD_COPYRIGHT_DESCRIPTOR VAR_11;
    struct COMPLETE_DVD_MANUFACTURER_DESCRIPTOR VAR_12;

    VAR_8.BlockByteOffset.QuadPart = 0;
    VAR_8.SessionId = 0;
    VAR_8.LayerNumber = 0;



    VAR_8.Format = 0;

    FUNC_2(0xdeadbeef);


    VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
        &VAR_10, sizeof(struct COMPLETE_DVD_LAYER_DESCRIPTOR), &VAR_6, ((void*)0));

    if(!VAR_7)
    {
        FUNC_5("IOCTL_DVD_READ_STRUCTURE not supported: %u\n", FUNC_1());
        return;
    }


    FUNC_4( VAR_10.Header.Length == 0x0802, "Length is 0x%04x instead of 0x0802\n", VAR_10.Header.Length);
    FUNC_4( VAR_10.Header.Reserved[0] == 0, "Reserved[0] is %x instead of 0\n", VAR_10.Header.Reserved[0]);
    FUNC_4( VAR_10.Header.Reserved[1] == 0, "Reserved[1] is %x instead of 0\n", VAR_10.Header.Reserved[1]);




    for(VAR_5=0; VAR_5<sizeof(DVD_DESCRIPTOR_HEADER); VAR_5++)
    {
        FUNC_2(0xdeadbeef);

        VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
            &VAR_10, VAR_5, &VAR_6, ((void*)0));
        FUNC_4(!VAR_7 && FUNC_1() == VAR_0,"IOCTL_DVD_READ_STRUCTURE should fail with small buffer\n");
    }

    FUNC_2(0xdeadbeef);



    VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
        &VAR_9, sizeof(DVD_LAYER_DESCRIPTOR), &VAR_6, ((void*)0));
    FUNC_4( (!VAR_7 && FUNC_1() == VAR_1) || FUNC_3(VAR_7) ,
        "IOCTL_DVD_READ_STRUCTURE should have failed\n");

    FUNC_2(0xdeadbeef);

    VAR_7 = FUNC_0(VAR_4, VAR_3, ((void*)0), sizeof(DVD_READ_STRUCTURE),
        &VAR_10, sizeof(struct COMPLETE_DVD_LAYER_DESCRIPTOR), &VAR_6, ((void*)0));
    FUNC_4( (!VAR_7 && FUNC_1() == VAR_1),
        "IOCTL_DVD_READ_STRUCTURE should have failed\n");


    for(VAR_5=0; VAR_5<sizeof(DVD_READ_STRUCTURE); VAR_5++)
    {
        FUNC_2(0xdeadbeef);

        VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, VAR_5,
        &VAR_10, sizeof(struct COMPLETE_DVD_LAYER_DESCRIPTOR), &VAR_6, ((void*)0));
        FUNC_4( (!VAR_7 && FUNC_1() == VAR_1),
            "IOCTL_DVD_READ_STRUCTURE should have failed\n");
    }



    VAR_8.Format = 1;

    FUNC_2(0xdeadbeef);


    VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
        ((void*)0), sizeof(DVD_COPYRIGHT_DESCRIPTOR), &VAR_6, ((void*)0));
    FUNC_4(!VAR_7 && FUNC_1() == VAR_0, "IOCTL_DVD_READ_STRUCTURE should have failed %d %u\n", VAR_7, FUNC_1());

    for(VAR_5=0; VAR_5<sizeof(DVD_COPYRIGHT_DESCRIPTOR); VAR_5++)
    {
        FUNC_2(0xdeadbeef);

        VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
            &VAR_11, VAR_5, &VAR_6, ((void*)0));
        FUNC_4(!VAR_7 && FUNC_1() == VAR_0, "IOCTL_DVD_READ_STRUCTURE should have failed %d %u\n", VAR_7, FUNC_1());
    }



    VAR_8.Format = 4;

    FUNC_2(0xdeadbeef);

    VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
        &VAR_12, sizeof(DVD_MANUFACTURER_DESCRIPTOR), &VAR_6, ((void*)0));
    FUNC_4(VAR_7 || FUNC_3(FUNC_1() == VAR_2),
        "IOCTL_DVD_READ_STRUCTURE (DvdManufacturerDescriptor) failed, last error = %u\n", FUNC_1());
    if(!VAR_7)
        return;


    FUNC_4( VAR_12.Header.Length == 0x0802, "Length is 0x%04x instead of 0x0802\n", VAR_12.Header.Length);
    FUNC_4( VAR_12.Header.Reserved[0] == 0, "Reserved[0] is %x instead of 0\n", VAR_12.Header.Reserved[0]);
    FUNC_4( VAR_12.Header.Reserved[1] == 0, "Reserved[1] is %x instead of 0\n", VAR_12.Header.Reserved[1]);

    FUNC_2(0xdeadbeef);


    VAR_7 = FUNC_0(VAR_4, VAR_3, &VAR_8, sizeof(DVD_READ_STRUCTURE),
        ((void*)0), sizeof(DVD_MANUFACTURER_DESCRIPTOR), &VAR_6, ((void*)0));
    FUNC_4(!VAR_7 && FUNC_1() == VAR_0, "IOCTL_DVD_READ_STRUCTURE should have failed %d %u\n", VAR_7, FUNC_1());
}
