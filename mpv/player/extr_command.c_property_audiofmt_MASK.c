
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int num; int member_0; } ;
struct mp_aframe {int dummy; } ;
struct m_sub_property {char* member_0; int member_1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct m_sub_property*,int,void*) ;
 int FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*,struct mp_chmap*) ;
 int FUNC_6 (struct mp_aframe*) ;
 int FUNC_7 (struct mp_aframe*) ;
 int FUNC_8 (struct mp_chmap*) ;
 int FUNC_9 (struct mp_chmap*) ;

__attribute__((used)) static int FUNC_10(struct mp_aframe *VAR_1, int VAR_2, void *VAR_3)
{
    if (!VAR_1 || !FUNC_4(VAR_1))
        return VAR_0;

    struct mp_chmap VAR_4 = {0};
    FUNC_5(VAR_1, &VAR_4);

    struct m_sub_property VAR_5[] = {
        {"samplerate", FUNC_0(FUNC_7(VAR_1))},
        {"channel-count", FUNC_0(VAR_4.num)},
        {"channels", FUNC_1(FUNC_8(&VAR_4))},
        {"hr-channels", FUNC_1(FUNC_9(&VAR_4))},
        {"format", FUNC_1(FUNC_2(FUNC_6(VAR_1)))},
        {0}
    };

    return FUNC_3(VAR_5, VAR_2, VAR_3);
}
