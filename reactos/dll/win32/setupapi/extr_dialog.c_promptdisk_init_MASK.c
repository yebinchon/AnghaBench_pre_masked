
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unknown ;
struct promptdisk_params {int DiskPromptStyle; scalar_t__ DiskName; scalar_t__ FileSought; int * PathToSource; scalar_t__ DialogTitle; } ;
typedef int message ;
typedef int format ;
typedef int __ms_va_list ;
typedef int WCHAR ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef scalar_t__ DWORD_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int ,int ,int *,int,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_7(HWND VAR_17, struct promptdisk_params *VAR_18)
{
    FUNC_4(VAR_17, VAR_0, (LONG_PTR)VAR_18);

    if(VAR_18->DialogTitle)
        FUNC_5(VAR_17, VAR_18->DialogTitle);
    if(VAR_18->PathToSource)
        FUNC_3(VAR_17, VAR_6, VAR_18->PathToSource);

    if(!(VAR_18->DiskPromptStyle & VAR_9))
    {
        WCHAR VAR_19[256+2*VAR_14];
        WCHAR VAR_20[256];
        WCHAR VAR_21[256];
        DWORD_PTR VAR_22[2];
        FUNC_2(VAR_16, VAR_12, VAR_20,
            sizeof(VAR_20)/sizeof(VAR_20[0]));

        VAR_22[0] = (DWORD_PTR)VAR_18->FileSought;
        if(VAR_18->DiskName)
            VAR_22[1] = (DWORD_PTR)VAR_18->DiskName;
        else
        {
            FUNC_2(VAR_16, VAR_13, VAR_21,
                sizeof(VAR_21)/sizeof(VAR_21[0]));
            VAR_22[1] = (DWORD_PTR)VAR_21;
        }
        FUNC_0(VAR_2|VAR_1,
                       VAR_20, 0, 0, VAR_19, sizeof(VAR_19)/sizeof(*VAR_19),
                       (__ms_va_list*)VAR_22);
        FUNC_3(VAR_17, VAR_4, VAR_19);

        FUNC_2(VAR_16, VAR_11, VAR_19,
            sizeof(VAR_19)/sizeof(VAR_19[0]));
        FUNC_3(VAR_17, VAR_5, VAR_19);
        FUNC_2(VAR_16, VAR_10, VAR_19,
            sizeof(VAR_19)/sizeof(VAR_19[0]));
        FUNC_3(VAR_17, VAR_3, VAR_19);
    }
    if(VAR_18->DiskPromptStyle & VAR_8)
        FUNC_6(FUNC_1(VAR_17, VAR_7), VAR_15);
}
