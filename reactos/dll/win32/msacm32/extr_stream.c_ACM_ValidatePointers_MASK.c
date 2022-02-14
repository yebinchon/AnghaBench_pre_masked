
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pbPreparedSrc; scalar_t__ pbSrc; scalar_t__ cbPreparedSrcLength; scalar_t__ cbSrcLength; scalar_t__ pbPreparedDst; scalar_t__ pbDst; scalar_t__ cbPreparedDstLength; scalar_t__ cbDstLength; } ;
typedef TYPE_1__* PACMDRVSTREAMHEADER ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(PACMDRVSTREAMHEADER VAR_0)
{

    return !(VAR_0->pbPreparedSrc != VAR_0->pbSrc ||
             VAR_0->cbPreparedSrcLength < VAR_0->cbSrcLength ||
             VAR_0->pbPreparedDst != VAR_0->pbDst ||
             VAR_0->cbPreparedDstLength < VAR_0->cbDstLength);
}
