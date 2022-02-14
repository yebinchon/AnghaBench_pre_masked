
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int libcaption_stauts_t ;
typedef int caption_frame_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ,int*,char*,char*) ;
 int FUNC_3 (int *,char*) ;

libcaption_stauts_t FUNC_4(caption_frame_t* VAR_1, uint16_t VAR_2)
{
    int VAR_3;
    char VAR_4[5], VAR_5[5];
    size_t VAR_6 = FUNC_2(VAR_2, &VAR_3, &VAR_4[0], &VAR_5[0]);

    if (FUNC_1(VAR_2)) {

        FUNC_0(VAR_1);
    }

    if (0 < VAR_6) {
        FUNC_3(VAR_1, VAR_4);
    }

    if (1 < VAR_6) {
        FUNC_3(VAR_1, VAR_5);
    }

    return VAR_0;
}
