
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int dummy; } ;
struct mp_chmap_sel {int member_0; } ;
struct mp_chmap {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mp_chmap*,struct mp_chmap*) ;
 int FUNC_6 (struct mp_chmap*,int ) ;
 int FUNC_7 (struct mp_chmap_sel*,struct mp_chmap*) ;
 int FUNC_8 (struct mp_chmap_sel*,struct mp_chmap*) ;
 int FUNC_9 (struct mp_chmap*,int) ;
 int FUNC_10 (struct mp_chmap*) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_12(struct test_ctx *VAR_0)
{
    struct mp_chmap VAR_1;
    struct mp_chmap VAR_2;
    struct mp_chmap_sel VAR_3 = {0};

    FUNC_11("5.1", "7.1", FUNC_0("7.1"));
    FUNC_11("7.1", "5.1", FUNC_0("5.1"));
    FUNC_11("7.1(wide-side)", "7.1", FUNC_0("7.1"));
    FUNC_11("7.1(wide-side)", "5.1(side)", FUNC_0("7.1", "5.1(side)"));
    FUNC_11("3.1", "5.1", FUNC_0("7.1", "5.1", "2.1", "stereo", "mono"));
    FUNC_11("5.1", "7.1(rear)", FUNC_0("7.1(rear)"));
    FUNC_11("5.1(side)", "5.1", FUNC_0("5.1", "7.1"));
    FUNC_11("5.1", "7.1(alsa)", FUNC_0("7.1(alsa)"));
    FUNC_11("mono", "stereo", FUNC_0("stereo", "5.1"));
    FUNC_11("stereo", "stereo", FUNC_0("stereo", "5.1"));
    FUNC_11("5.1(side)", "7.1(rear)", FUNC_0("stereo", "7.1(rear)"));
    FUNC_11("7.1", "fl-fr-lfe-fc-bl-br-flc-frc",
             FUNC_0("fl-fr-lfe-fc-bl-br-flc-frc", "3.0(back)"));

    FUNC_9(&VAR_1, 2);

    FUNC_6(&VAR_2, FUNC_4("5.1"));

    FUNC_7(&VAR_3, &VAR_1);
    FUNC_1(FUNC_8(&VAR_3, &VAR_2));
    FUNC_3(FUNC_10(&VAR_2), "5.1");

    FUNC_11("quad", "quad(side)", FUNC_0("quad(side)", "stereo"));
    FUNC_11("quad", "quad(side)", FUNC_0("quad(side)", "7.0"));
    FUNC_11("quad", "quad(side)", FUNC_0("7.0", "quad(side)"));
    FUNC_11("quad", "7.1(wide-side)", FUNC_0("7.1(wide-side)", "stereo"));
    FUNC_11("quad", "7.1(wide-side)", FUNC_0("stereo", "7.1(wide-side)"));
    FUNC_11("quad", "fl-fr-sl-sr",
             FUNC_0("fl-fr-fc-bl-br", "fl-fr-sl-sr"));
    FUNC_11("quad", "fl-fr-bl-br-na-na-na-na",
             FUNC_0("fl-fr-bl-br-na-na-na-na", "quad(side)", "stereo"));
    FUNC_11("quad", "fl-fr-bl-br-na-na-na-na",
             FUNC_0("stereo", "quad(side)", "fl-fr-bl-br-na-na-na-na"));
    FUNC_11("fl-fr-fc-lfe-sl-sr", "fl-fr-lfe-fc-bl-br-na-na",
             FUNC_0("fl-fr-lfe-fc-bl-br-na-na", "fl-fr-lfe-fc-bl-br-sdl-sdr"));
    FUNC_11("fl-fr-fc-lfe-sl-sr", "fl-fr-lfe-fc-bl-br-na-na",
             FUNC_0("fl-fr-lfe-fc-bl-br-sdl-sdr", "fl-fr-lfe-fc-bl-br-na-na"));

    FUNC_11("na-fl-fr", "na-fl-fr", FUNC_0("na-fl-fr-na", "fl-na-fr", "na-fl-fr",
                                             "fl-fr-na-na", "na-na-fl-fr"));

    FUNC_6(&VAR_1, FUNC_4("3.1"));
    FUNC_6(&VAR_2, FUNC_4("2.1"));

    FUNC_2(FUNC_5(&VAR_1, &VAR_2), 1);

    FUNC_6(&VAR_2, FUNC_4("6.1(back)"));
    FUNC_2(FUNC_5(&VAR_1, &VAR_2), 0);
    FUNC_2(FUNC_5(&VAR_2, &VAR_1), 3);
}
