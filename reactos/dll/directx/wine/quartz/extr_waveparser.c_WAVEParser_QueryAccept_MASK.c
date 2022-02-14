
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtype; int majortype; } ;
typedef int LPVOID ;
typedef int HRESULT ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_2(LPVOID VAR_6, const AM_MEDIA_TYPE * VAR_7)
{
    if (!FUNC_1(&VAR_7->majortype, &VAR_3))
 return VAR_4;
    if (FUNC_1(&VAR_7->subtype, &VAR_2))
        return VAR_5;
    if (FUNC_1(&VAR_7->subtype, &VAR_1) || FUNC_1(&VAR_7->subtype, &VAR_0))
 FUNC_0("AU and AIFF files not supported yet!\n");
    return VAR_4;
}
