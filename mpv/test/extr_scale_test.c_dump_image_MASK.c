
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scale_test {TYPE_1__* ctx; } ;
struct mp_image {int dummy; } ;
struct image_writer_opts {int format; } ;
struct TYPE_2__ {int log; int global; int out_path; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 () ;
 struct image_writer_opts VAR_1 ;
 char* FUNC_2 (int,char*,int ,char const*) ;
 int FUNC_3 (struct mp_image*,struct image_writer_opts*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct scale_test *VAR_2, const char *VAR_3,
                       struct mp_image *VAR_4)
{
    char *VAR_5 = FUNC_2(4096, "%s/%s.png", VAR_2->ctx->out_path, VAR_3);

    struct image_writer_opts VAR_6 = VAR_1;
    VAR_6.format = VAR_0;

    if (!FUNC_3(VAR_4, &VAR_6, VAR_5, VAR_2->ctx->global, VAR_2->ctx->log)) {
        FUNC_0(VAR_2->ctx, "Failed to write '%s'.\n", VAR_5);
        FUNC_1();
    }
}
