
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hwdec_info {int use_hw_frames; int use_hw_device; int copying; int method_name; int pix_fmt; int lavc_device; TYPE_2__ const* codec; } ;
struct TYPE_8__ {scalar_t__ type; int capabilities; char* wrapper_name; } ;
struct TYPE_7__ {int methods; int pix_fmt; int device_type; } ;
typedef TYPE_1__ AVCodecHWConfig ;
typedef TYPE_2__ AVCodec ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hwdec_info**,int*,struct hwdec_info) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_3 (void**) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (TYPE_2__ const*,int) ;
 int VAR_7 ;
 int FUNC_7 (struct hwdec_info*,int,int,int ) ;
 int FUNC_8 (int ,int,char*,char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static void FUNC_10(struct hwdec_info **VAR_8, int *VAR_9)
{
    const AVCodec *VAR_10 = ((void*)0);
    void *VAR_11 = ((void*)0);
    while (1) {
        VAR_10 = FUNC_3(&VAR_11);
        if (!VAR_10)
            break;
        if (VAR_10->type != VAR_0 || !FUNC_2(VAR_10))
            continue;

        struct hwdec_info VAR_12 = {
            .pix_fmt = VAR_6,
            .codec = VAR_10,
        };

        const char *VAR_13 = ((void*)0);
        if (VAR_10->capabilities & (VAR_1 | VAR_2))
            VAR_13 = VAR_10->wrapper_name;




        bool VAR_14 = 0;
        for (int VAR_15 = 0; ; VAR_15++) {
            const AVCodecHWConfig *VAR_16 = FUNC_6(VAR_10, VAR_15);
            if (!VAR_16)
                break;

            if ((VAR_16->methods & VAR_4) ||
                (VAR_16->methods & VAR_3))
            {
                struct hwdec_info VAR_17 = VAR_12;
                VAR_17.lavc_device = VAR_16->device_type;
                VAR_17.pix_fmt = VAR_16->pix_fmt;

                const char *VAR_18 = FUNC_5(VAR_16->device_type);
                FUNC_1(VAR_18);



                if (FUNC_9(VAR_18, "cuda") == 0 && !VAR_13)
                    VAR_18 = "nvdec";

                FUNC_8(VAR_17.method_name, sizeof(VAR_17.method_name), "%s", VAR_18);




                if (VAR_16->methods & VAR_4) {
                    VAR_17.use_hw_frames = 1;
                } else {
                    VAR_17.use_hw_device = 1;
                }


                FUNC_0(VAR_8, VAR_9, VAR_17);


                VAR_17.copying = 1;
                if (VAR_16->methods & VAR_3) {
                    VAR_17.use_hw_frames = 0;
                    VAR_17.use_hw_device = 1;
                }
                FUNC_0(VAR_8, VAR_9, VAR_17);

                VAR_14 = 1;
            } else if (VAR_16->methods & VAR_5) {
                struct hwdec_info VAR_19 = VAR_12;
                VAR_19.pix_fmt = VAR_16->pix_fmt;

                const char *VAR_20 = VAR_13;
                if (!VAR_20)
                    VAR_20 = FUNC_4(VAR_19.pix_fmt);
                FUNC_1(VAR_20);

                FUNC_8(VAR_19.method_name, sizeof(VAR_19.method_name), "%s", VAR_20);


                FUNC_0(VAR_8, VAR_9, VAR_19);


                VAR_19.copying = 1;
                VAR_19.pix_fmt = VAR_6;
                FUNC_0(VAR_8, VAR_9, VAR_19);

                VAR_14 = 1;
            }
        }

        if (!VAR_14 && VAR_13) {



            struct hwdec_info VAR_21 = VAR_12;
            VAR_21.copying = 1;

            FUNC_8(VAR_21.method_name, sizeof(VAR_21.method_name), "%s", VAR_13);
            FUNC_0(VAR_8, VAR_9, VAR_21);
        }
    }

    FUNC_7(*VAR_8, *VAR_9, sizeof(struct hwdec_info), VAR_7);
}
