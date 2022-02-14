
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int FUNC_0 (struct mp_log*,int) ;
 int FUNC_1 (struct mp_log*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct mp_log *VAR_0, int VAR_1, char *VAR_2, char *VAR_3)
{
    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0, "\n"
        "This lists %s->%s filters only. Refer to\n"
        "\n"
        " https://ffmpeg.org/ffmpeg-filters.html\n"
        "\n"
        "to see how to use each filter and what arguments each filter takes.\n"
        "Also, be sure to quote the FFmpeg filter string properly, e.g.:\n"
        "\n"
        " \"%s\"\n"
        "\n"
        "Otherwise, mpv and libavfilter syntax will conflict.\n"
        "\n", VAR_2, VAR_2, VAR_3);
}
