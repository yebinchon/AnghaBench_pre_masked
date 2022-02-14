
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stream {int dummy; } ;
struct encoder_context {TYPE_2__* encoder; int twopass_bytebuffer; int global; int type; TYPE_1__* options; } ;
struct bstr {scalar_t__ start; } ;
struct TYPE_4__ {int flags; scalar_t__ stats_in; } ;
struct TYPE_3__ {int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct encoder_context*,char*,char*) ;
 int FUNC_1 (struct encoder_context*,char*,char*) ;
 int FUNC_2 (struct stream*) ;
 int FUNC_3 (char*,int ) ;
 struct stream* FUNC_4 (char*,int ) ;
 struct bstr FUNC_5 (struct stream*,struct encoder_context*,int) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int *,char*,int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(struct encoder_context *VAR_2)
{
    char *VAR_3 = FUNC_7(((void*)0), "%s-%s-pass1.log",
                                     VAR_2->options->file,
                                     FUNC_6(VAR_2->type));

    if (VAR_2->encoder->flags & VAR_1) {
        FUNC_0(VAR_2, "Reading 2-pass log: %s\n", VAR_3);
        struct stream *VAR_4 = FUNC_4(VAR_3, VAR_2->global);
        if (VAR_4) {
            struct bstr VAR_5 = FUNC_5(VAR_4, VAR_2, 1000000000);
            if (VAR_5.start) {
                VAR_2->encoder->stats_in = VAR_5.start;
            } else {
                FUNC_1(VAR_2, "could not read '%s', "
                        "disabling 2-pass encoding at pass 1\n", VAR_3);
            }
            FUNC_2(VAR_4);
        } else {
            FUNC_1(VAR_2, "could not open '%s', "
                    "disabling 2-pass encoding at pass 2\n", VAR_3);
            VAR_2->encoder->flags &= ~(unsigned)VAR_1;
        }
    }

    if (VAR_2->encoder->flags & VAR_0) {
        FUNC_0(VAR_2, "Writing to 2-pass log: %s\n", VAR_3);
        VAR_2->twopass_bytebuffer = FUNC_3(VAR_3, VAR_2->global);
        if (!VAR_2->twopass_bytebuffer) {
            FUNC_1(VAR_2, "could not open '%s', "
                    "disabling 2-pass encoding at pass 1\n", VAR_3);
            VAR_2->encoder->flags &= ~(unsigned)VAR_0;
        }
    }

    FUNC_8(VAR_3);
}
