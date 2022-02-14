
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int null; int texture; int atlas; int device; } ;
struct TYPE_4__ {int Pitch; scalar_t__ pBits; } ;
typedef int HRESULT ;
typedef TYPE_1__ D3DLOCKED_RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (void*,void*,int) ;
 void* FUNC_6 (int *,int*,int*,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9()
{
    int VAR_5, VAR_6, VAR_7;
    const void *VAR_8;

    HRESULT VAR_9;
    D3DLOCKED_RECT VAR_10;

    VAR_8 = FUNC_6(&VAR_4, &VAR_5, &VAR_6, VAR_3);

    VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, 1, VAR_2, VAR_0, VAR_1, &VAR_4, ((void*)0));
    FUNC_3(FUNC_4(VAR_9));

    VAR_9 = FUNC_1(VAR_4, 0, &VAR_10, ((void*)0), 0);
    FUNC_3(FUNC_4(VAR_9));

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        void *VAR_11 = (char *)VAR_8 + VAR_7 * VAR_5 * 4;
        void *VAR_12 = (char *)VAR_10.pBits + VAR_7 * VAR_10.Pitch;
        FUNC_5(VAR_12, VAR_11, VAR_5 * 4);
    }

    VAR_9 = FUNC_2(VAR_4, 0);
    FUNC_3(FUNC_4(VAR_9));

    FUNC_7(&VAR_4, FUNC_8(VAR_4), &VAR_4);
}
