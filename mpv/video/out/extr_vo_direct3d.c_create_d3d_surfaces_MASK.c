
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int d3d_device; int d3d_backbuf; } ;
typedef TYPE_1__ d3d_priv ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_7(d3d_priv *VAR_16)
{
    FUNC_5(VAR_16, "create_d3d_surfaces called.\n");

    if (!VAR_16->d3d_backbuf &&
        FUNC_0(FUNC_1(VAR_16->d3d_device, 0, 0,
                                              VAR_0,
                                              &VAR_16->d3d_backbuf))) {
        FUNC_4(VAR_16, "Allocating backbuffer failed.\n");
        return 0;
    }

    if (!FUNC_6(VAR_16))
        return 0;


    FUNC_2(VAR_16->d3d_device,
                                    VAR_8, VAR_2);
    FUNC_2(VAR_16->d3d_device,
                                    VAR_6, VAR_1);
    FUNC_2(VAR_16->d3d_device,
                                    VAR_4, VAR_3);
    FUNC_2(VAR_16->d3d_device,
                                    VAR_5, (DWORD)0x0);
    FUNC_2(VAR_16->d3d_device,
                                    VAR_7, VAR_15);


    for (int VAR_17 = 0; VAR_17 < 3; VAR_17++) {
        FUNC_3(VAR_16->d3d_device, VAR_17, VAR_12,
                                         VAR_14);
        FUNC_3(VAR_16->d3d_device, VAR_17, VAR_11,
                                         VAR_14);
        FUNC_3(VAR_16->d3d_device, VAR_17, VAR_9,
                                         VAR_13);
        FUNC_3(VAR_16->d3d_device, VAR_17, VAR_10,
                                         VAR_13);
    }

    return 1;
}
