
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_3__ {int * spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 char* FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_6 (char const*,int ) ;

int FUNC_7(mp_obj_t VAR_8) {
    if (FUNC_2(VAR_8)) {

        const char *VAR_9 = FUNC_4(VAR_8);
        if (0) {
        }
        FUNC_5(FUNC_3(&VAR_6,
            "SPI(%s) doesn't exist", VAR_9));
    } else {

        int VAR_10 = FUNC_1(VAR_8);
        if (VAR_10 >= 1 && VAR_10 <= FUNC_0(VAR_7)
            && VAR_7[VAR_10 - 1].spi != ((void*)0)) {
            return VAR_10;
        }
        FUNC_5(FUNC_3(&VAR_6,
            "SPI(%d) doesn't exist", VAR_10));
    }
}
