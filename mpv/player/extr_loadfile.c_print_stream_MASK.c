
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {int type; scalar_t__ is_external; int title; scalar_t__ attached_picture; scalar_t__ forced_track; scalar_t__ default_track; int lang; int user_tid; scalar_t__ selected; struct sh_stream* stream; } ;
struct sh_stream {TYPE_2__* codec; } ;
struct MPContext {int dummy; } ;
struct TYPE_3__ {int num; } ;
struct TYPE_4__ {char* codec; int samplerate; TYPE_1__ channels; int fps; int disp_h; int disp_w; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (struct MPContext*,char*,char*) ;




__attribute__((used)) static void FUNC_2(struct MPContext *VAR_0, struct track *VAR_1)
{
    struct sh_stream *VAR_2 = VAR_1->stream;
    const char *VAR_3 = "?";
    const char *VAR_4 = "?";
    const char *VAR_5 = "?";
    switch (VAR_1->type) {
    case 128:
        VAR_3 = "Video"; VAR_4 = "vid"; VAR_5 = ((void*)0);
        break;
    case 130:
        VAR_3 = "Audio"; VAR_4 = "aid"; VAR_5 = "alang";
        break;
    case 129:
        VAR_3 = "Subs"; VAR_4 = "sid"; VAR_5 = "slang";
        break;
    }
    char VAR_6[2048] = {0};
    FUNC_0(VAR_6, " %3s %-5s", VAR_1->selected ? "(+)" : "", VAR_3);
    FUNC_0(VAR_6, " --%s=%d", VAR_4, VAR_1->user_tid);
    if (VAR_1->lang && VAR_5)
        FUNC_0(VAR_6, " --%s=%s", VAR_5, VAR_1->lang);
    if (VAR_1->default_track)
        FUNC_0(VAR_6, " (*)");
    if (VAR_1->forced_track)
        FUNC_0(VAR_6, " (f)");
    if (VAR_1->attached_picture)
        FUNC_0(VAR_6, " [P]");
    if (VAR_1->title)
        FUNC_0(VAR_6, " '%s'", VAR_1->title);
    const char *VAR_7 = VAR_2 ? VAR_2->codec->codec : ((void*)0);
    FUNC_0(VAR_6, " (%s", VAR_7 ? VAR_7 : "<unknown>");
    if (VAR_1->type == 128) {
        if (VAR_2 && VAR_2->codec->disp_w)
            FUNC_0(VAR_6, " %dx%d", VAR_2->codec->disp_w, VAR_2->codec->disp_h);
        if (VAR_2 && VAR_2->codec->fps)
            FUNC_0(VAR_6, " %.3ffps", VAR_2->codec->fps);
    } else if (VAR_1->type == 130) {
        if (VAR_2 && VAR_2->codec->channels.num)
            FUNC_0(VAR_6, " %dch", VAR_2->codec->channels.num);
        if (VAR_2 && VAR_2->codec->samplerate)
            FUNC_0(VAR_6, " %dHz", VAR_2->codec->samplerate);
    }
    FUNC_0(VAR_6, ")");
    if (VAR_1->is_external)
        FUNC_0(VAR_6, " (external)");
    FUNC_1(VAR_0, "%s\n", VAR_6);
}
