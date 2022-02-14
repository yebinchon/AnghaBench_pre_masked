
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
struct TYPE_12__ {scalar_t__ nFileSizeLow; TYPE_2__ ftCreationTime; } ;
typedef TYPE_4__ WIN32_FIND_DATAW ;
typedef int UINT ;
struct TYPE_11__ {scalar_t__ dwLowDateTime; scalar_t__ dwHighDateTime; } ;
struct TYPE_9__ {scalar_t__ dwLowDateTime; scalar_t__ dwHighDateTime; } ;
struct TYPE_13__ {scalar_t__ MinSize; scalar_t__ MaxSize; scalar_t__ MaxVersionLS; scalar_t__ MaxVersionMS; scalar_t__ MinVersionLS; scalar_t__ MinVersionMS; TYPE_3__ MaxTime; TYPE_1__ MinTime; } ;
typedef TYPE_5__ MSISIGNATURE ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_5__ const*,int ,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static UINT FUNC_1(const MSISIGNATURE *VAR_3,
 const WIN32_FIND_DATAW *VAR_4, LPCWSTR VAR_5, BOOL *VAR_6)
{
    UINT VAR_7 = VAR_0;

    *VAR_6 = VAR_2;



    if (VAR_3->MinTime.dwLowDateTime || VAR_3->MinTime.dwHighDateTime)
    {
        if (VAR_4->ftCreationTime.dwHighDateTime <
         VAR_3->MinTime.dwHighDateTime ||
         (VAR_4->ftCreationTime.dwHighDateTime == VAR_3->MinTime.dwHighDateTime
         && VAR_4->ftCreationTime.dwLowDateTime <
         VAR_3->MinTime.dwLowDateTime))
            *VAR_6 = VAR_1;
    }
    if (*VAR_6 && (VAR_3->MaxTime.dwLowDateTime || VAR_3->MaxTime.dwHighDateTime))
    {
        if (VAR_4->ftCreationTime.dwHighDateTime >
         VAR_3->MaxTime.dwHighDateTime ||
         (VAR_4->ftCreationTime.dwHighDateTime == VAR_3->MaxTime.dwHighDateTime
         && VAR_4->ftCreationTime.dwLowDateTime >
         VAR_3->MaxTime.dwLowDateTime))
            *VAR_6 = VAR_1;
    }
    if (*VAR_6 && VAR_3->MinSize && VAR_4->nFileSizeLow < VAR_3->MinSize)
        *VAR_6 = VAR_1;
    if (*VAR_6 && VAR_3->MaxSize && VAR_4->nFileSizeLow > VAR_3->MaxSize)
        *VAR_6 = VAR_1;
    if (*VAR_6 && (VAR_3->MinVersionMS || VAR_3->MinVersionLS ||
     VAR_3->MaxVersionMS || VAR_3->MaxVersionLS))
        VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
    return VAR_7;
}
