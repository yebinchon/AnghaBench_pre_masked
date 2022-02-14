
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PFILE_STANDARD_INFORMATION ;
typedef int PFILE_BASIC_INFORMATION ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;
typedef int FILE_STANDARD_INFORMATION ;
typedef int FILE_BASIC_INFORMATION ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int *,int ,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static
BOOL
FUNC_4(
    LPCWSTR VAR_11,
    PFILE_BASIC_INFORMATION VAR_12,
    PFILE_STANDARD_INFORMATION VAR_13)
{
    HANDLE VAR_14;
    IO_STATUS_BLOCK VAR_15;
    NTSTATUS VAR_16;

    VAR_14 = FUNC_1(VAR_11, VAR_2 | VAR_10,
                        VAR_3 | VAR_4, ((void*)0),
                        VAR_9, VAR_1 | VAR_5,
                        ((void*)0));
    if (VAR_14 == VAR_8)
    {
        return VAR_0;
    }

    VAR_16 = FUNC_3(VAR_14, &VAR_15, VAR_12,
                                    sizeof(FILE_BASIC_INFORMATION), VAR_6);
    if (!FUNC_2(VAR_16))
    {
        FUNC_0(VAR_14);
        return VAR_0;
    }

    VAR_16 = FUNC_3(VAR_14, &VAR_15, VAR_13,
                                    sizeof(FILE_STANDARD_INFORMATION), VAR_7);

    FUNC_0(VAR_14);
    return FUNC_2(VAR_16);
}
