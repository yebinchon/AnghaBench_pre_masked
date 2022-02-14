
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtype; int majortype; } ;
typedef int LPVOID ;
typedef int HRESULT ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(LPVOID VAR_7, const AM_MEDIA_TYPE *VAR_8)
{
    if (!FUNC_1(&VAR_8->majortype, &VAR_4))
        return VAR_5;

    if (FUNC_1(&VAR_8->subtype, &VAR_0))
        return VAR_6;

    if (FUNC_1(&VAR_8->subtype, &VAR_2))
        FUNC_0("MPEG-1 video streams not yet supported.\n");
    else if (FUNC_1(&VAR_8->subtype, &VAR_1))
        FUNC_0("MPEG-1 system streams not yet supported.\n");
    else if (FUNC_1(&VAR_8->subtype, &VAR_3))
        FUNC_0("MPEG-1 VideoCD streams not yet supported.\n");
    else FUNC_0("%s\n", FUNC_2(&VAR_8->subtype));

    return VAR_5;
}
