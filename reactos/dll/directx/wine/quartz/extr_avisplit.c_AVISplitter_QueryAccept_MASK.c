
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtype; int majortype; } ;
typedef int LPVOID ;
typedef int HRESULT ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_1(LPVOID VAR_4, const AM_MEDIA_TYPE * VAR_5)
{
    if (FUNC_0(&VAR_5->majortype, &VAR_1) && FUNC_0(&VAR_5->subtype, &VAR_0))
        return VAR_3;
    return VAR_2;
}
