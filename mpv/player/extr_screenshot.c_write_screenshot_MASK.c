
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_image {int dummy; } ;
struct mp_cmd_ctx {struct MPContext* mpctx; } ;
struct image_writer_opts {int dummy; } ;
struct MPContext {int log; int global; TYPE_1__* opts; } ;
struct TYPE_2__ {struct image_writer_opts* screenshot_image_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mp_cmd_ctx*,int ,char*,...) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;
 scalar_t__ FUNC_3 (struct mp_image*,struct image_writer_opts*,char const*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct mp_cmd_ctx *VAR_3, struct mp_image *VAR_4,
                             const char *VAR_5, struct image_writer_opts *VAR_6)
{
    struct MPContext *VAR_7 = VAR_3->mpctx;
    struct image_writer_opts *VAR_8 = VAR_7->opts->screenshot_image_opts;
    struct image_writer_opts VAR_9 = VAR_6 ? *VAR_6 : *VAR_8;

    FUNC_0(VAR_3, VAR_2, "Starting screenshot: '%s'", VAR_5);

    FUNC_2(VAR_7);

    bool VAR_10 = VAR_4 && FUNC_3(VAR_4, &VAR_9, VAR_5, VAR_7->global,
                                 VAR_7->log);

    FUNC_1(VAR_7);

    if (VAR_10) {
        FUNC_0(VAR_3, VAR_1, "Screenshot: '%s'", VAR_5);
    } else {
        FUNC_0(VAR_3, VAR_0, "Error writing screenshot!");
    }
    return VAR_10;
}
