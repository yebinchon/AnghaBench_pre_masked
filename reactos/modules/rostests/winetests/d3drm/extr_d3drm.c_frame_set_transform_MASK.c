
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {float member_0; float member_1; float member_2; float member_3; } ;
struct TYPE_9__ {float member_0; float member_1; float member_2; float member_3; } ;
struct TYPE_8__ {float member_0; float member_1; float member_2; float member_3; } ;
struct TYPE_7__ {float member_0; float member_1; float member_2; float member_3; } ;
struct TYPE_11__ {TYPE_4__ member_3; TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef int IDirect3DRMFrame ;
typedef TYPE_5__ D3DRMMATRIX4D ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_5__) ;

__attribute__((used)) static void FUNC_1(IDirect3DRMFrame *VAR_1,
        float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9,
        float VAR_10, float VAR_11, float VAR_12, float VAR_13, float VAR_14, float VAR_15, float VAR_16, float VAR_17)
{
    D3DRMMATRIX4D VAR_18 =
    {
        {VAR_2, VAR_3, VAR_4, VAR_5},
        {VAR_6, VAR_7, VAR_8, VAR_9},
        {VAR_10, VAR_11, VAR_12, VAR_13},
        {VAR_14, VAR_15, VAR_16, VAR_17},
    };

    FUNC_0(VAR_1, VAR_0, VAR_18);
}
