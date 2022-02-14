
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int (* convert ) (TYPE_1__*,int ,void**,int ,void**) ;} ;
struct TYPE_10__ {int fdwConvert; void* cbDstLengthUsed; void* cbSrcLengthUsed; int pbDst; int pbSrc; void* cbDstLength; void* cbSrcLength; } ;
struct TYPE_9__ {scalar_t__ dwDriver; } ;
typedef TYPE_1__* PACMDRVSTREAMINSTANCE ;
typedef TYPE_2__* PACMDRVSTREAMHEADER ;
typedef int LRESULT ;
typedef void* DWORD ;
typedef TYPE_3__ AcmAdpcmData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,void**,int ,void**) ;

__attribute__((used)) static LRESULT FUNC_3(PACMDRVSTREAMINSTANCE VAR_4, PACMDRVSTREAMHEADER VAR_5)
{
    AcmAdpcmData* VAR_6 = (AcmAdpcmData*)VAR_4->dwDriver;
    DWORD VAR_7 = VAR_5->cbSrcLength;
    DWORD VAR_8 = VAR_5->cbDstLength;

    if (VAR_5->fdwConvert &
 ~(VAR_0|
   VAR_1|
   VAR_2))
    {
 FUNC_1("Unsupported fdwConvert (%08x), ignoring it\n", VAR_5->fdwConvert);
    }





    if ((VAR_5->fdwConvert & VAR_2))
    {
 FUNC_0(VAR_4, VAR_6);
    }

    VAR_6->convert(VAR_4, VAR_5->pbSrc, &VAR_7, VAR_5->pbDst, &VAR_8);
    VAR_5->cbSrcLengthUsed = VAR_7;
    VAR_5->cbDstLengthUsed = VAR_8;

    return VAR_3;
}
