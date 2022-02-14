
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_11__ {void* sharevistring; void* helpmsgstring; void* lbselchstring; void* fileokstring; } ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_13__ {scalar_t__ ole_initialized; TYPE_4__* ofnInfos; scalar_t__ unicode; TYPE_3__ HookMsg; TYPE_2__ initial_size; TYPE_1__ sizedlg; } ;
struct TYPE_12__ {int Flags; int hwndOwner; } ;
typedef int LRESULT ;
typedef int LPCWSTR ;
typedef int LPARAM ;
typedef int HRSRC ;
typedef int HANDLE ;
typedef TYPE_5__ FileOpenDlgInfos ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,int ,int ,int ) ;
 int FUNC_2 (int ,void*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 () ;
 scalar_t__ VAR_15 ;
 void* FUNC_9 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;

__attribute__((used)) static BOOL FUNC_12(FileOpenDlgInfos *VAR_18)
{
    LRESULT VAR_19;
    void *VAR_20;
    HRSRC VAR_21;
    HANDLE VAR_22 = 0;
    WORD VAR_23;


    if (VAR_18->ofnInfos->Flags & VAR_17)
    {
      FUNC_3("Flags 0x%08x not yet implemented\n",
         VAR_18->ofnInfos->Flags & VAR_17);
    }



    if (FUNC_11(VAR_18))
        VAR_23 = VAR_9;
    else
        VAR_23 = VAR_8;

    if (!(VAR_21 = FUNC_4(VAR_2, FUNC_7(VAR_23), (LPCWSTR)VAR_15)))
    {
        FUNC_0(VAR_0);
        return VAR_3;
    }
    if (!(VAR_22 = FUNC_5(VAR_2, VAR_21 )) ||
        !(VAR_20 = FUNC_6( VAR_22 )))
    {
        FUNC_0(VAR_1);
        return VAR_3;
    }




    if( (VAR_18->ofnInfos->Flags & VAR_14) &&
            !(VAR_18->ofnInfos->Flags & ( VAR_10 | VAR_12 | VAR_13)))
        VAR_18->ofnInfos->Flags |= VAR_11;

    if (VAR_18->ofnInfos->Flags & VAR_11)
    {
        VAR_18->sizedlg.cx = VAR_18->sizedlg.cy = 0;
        VAR_18->initial_size.x = VAR_18->initial_size.y = 0;
    }


    if (FUNC_10(VAR_18))
    {
      VAR_18->HookMsg.fileokstring = FUNC_9(VAR_4);
      VAR_18->HookMsg.lbselchstring = FUNC_9(VAR_7);
      VAR_18->HookMsg.helpmsgstring = FUNC_9(VAR_6);
      VAR_18->HookMsg.sharevistring = FUNC_9(VAR_16);
    }

    if (VAR_18->unicode)
      VAR_19 = FUNC_2(VAR_2,
                                     VAR_20,
                                     VAR_18->ofnInfos->hwndOwner,
                                     VAR_5,
                                     (LPARAM) VAR_18);
    else
      VAR_19 = FUNC_1(VAR_2,
                                     VAR_20,
                                     VAR_18->ofnInfos->hwndOwner,
                                     VAR_5,
                                     (LPARAM) VAR_18);
    if (VAR_18->ole_initialized)
        FUNC_8();


    if( VAR_19 == -1)
        return VAR_3;

    return VAR_19;
}
