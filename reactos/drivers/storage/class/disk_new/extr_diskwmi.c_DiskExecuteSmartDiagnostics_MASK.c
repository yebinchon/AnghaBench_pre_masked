
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int srbControl ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int SRB_IO_CONTROL ;
typedef int SENDCMDINPARAMS ;
typedef int PSRB_IO_CONTROL ;
typedef int PFUNCTIONAL_DEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__inline NTSTATUS
FUNC_1(
    PFUNCTIONAL_DEVICE_EXTENSION VAR_3,
    UCHAR VAR_4
    )
{
    UCHAR VAR_5[sizeof(SRB_IO_CONTROL) + sizeof(SENDCMDINPARAMS)];
    ULONG VAR_6 = sizeof(VAR_5);
    return FUNC_0(VAR_3,
                                   VAR_1,
                                   VAR_2,
                                   VAR_0,
                                   0,
                                   VAR_4,
                                   (PSRB_IO_CONTROL)VAR_5,
                                   &VAR_6);
}
