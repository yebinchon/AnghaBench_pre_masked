
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nk_rect {int h; } ;
struct nk_image {int dummy; } ;
struct TYPE_5__ {float x; } ;
struct TYPE_6__ {TYPE_1__ spacing; } ;
struct TYPE_7__ {TYPE_2__ window; } ;
struct nk_context {TYPE_3__ style; } ;
struct TYPE_8__ {struct nk_image directory; struct nk_image computer; struct nk_image desktop; struct nk_image home; } ;
struct media {TYPE_4__ icons; } ;
struct file_browser {char* directory; char* home; char* desktop; size_t dir_count; size_t file_count; char** files; char* file; char** directories; struct media* media; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file_browser*,char*) ;
 struct nk_image* FUNC_1 (struct media*,char*) ;
 scalar_t__ FUNC_2 (struct nk_context*,char*,int ,int) ;
 scalar_t__ FUNC_3 (struct nk_context*,struct nk_image) ;
 scalar_t__ FUNC_4 (struct nk_context*,struct nk_image,char*,int ) ;
 scalar_t__ FUNC_5 (struct nk_context*,char*) ;
 int FUNC_6 (struct nk_context*) ;
 int FUNC_7 (struct nk_context*,char*,int) ;
 int FUNC_8 (struct nk_context*) ;
 int FUNC_9 (struct nk_context*,char*,int ) ;
 int FUNC_10 (struct nk_context*,int ,int ,int,float*) ;
 int FUNC_11 (struct nk_context*,int,int) ;
 int FUNC_12 (struct nk_context*) ;
 int FUNC_13 (struct nk_context*) ;
 int FUNC_14 (int,int,int,int) ;
 struct nk_rect FUNC_15 (struct nk_context*) ;
 size_t FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_18(struct file_browser *VAR_6, struct nk_context *VAR_7)
{
    int VAR_8 = 0;
    struct media *VAR_9 = VAR_6->media;
    struct nk_rect VAR_10;

    if (FUNC_2(VAR_7, "File Browser", FUNC_14(50, 50, 800, 600),
        VAR_3|VAR_5|VAR_4))
    {
        static float VAR_11[] = {0.25f, 128};
        float VAR_12 = VAR_7->style.window.spacing.x;


        VAR_7->style.window.spacing.x = 0;
        FUNC_12(VAR_7);
        {
            char *VAR_13 = VAR_6->directory;
            char *VAR_14 = VAR_13 + 1;
            FUNC_11(VAR_7, 25, 6);
            while (*VAR_13++) {
                if (*VAR_13 == '/') {
                    *VAR_13 = '\0';
                    if (FUNC_5(VAR_7, VAR_14)) {
                        *VAR_13++ = '/'; *VAR_13 = '\0';
                        FUNC_0(VAR_6, VAR_6->directory);
                        break;
                    }
                    *VAR_13 = '/';
                    VAR_14 = VAR_13 + 1;
                }
            }
        }
        FUNC_13(VAR_7);
        VAR_7->style.window.spacing.x = VAR_12;


        VAR_10 = FUNC_15(VAR_7);
        FUNC_10(VAR_7, VAR_1, VAR_10.h, 2, VAR_11);
        FUNC_7(VAR_7, "Special", VAR_5);
        {
            struct nk_image VAR_15 = VAR_9->icons.home;
            struct nk_image VAR_16 = VAR_9->icons.desktop;
            struct nk_image VAR_17 = VAR_9->icons.computer;

            FUNC_11(VAR_7, 40, 1);
            if (FUNC_4(VAR_7, VAR_15, "home", VAR_2))
                FUNC_0(VAR_6, VAR_6->home);
            if (FUNC_4(VAR_7,VAR_16,"desktop",VAR_2))
                FUNC_0(VAR_6, VAR_6->desktop);
            if (FUNC_4(VAR_7,VAR_17,"computer",VAR_2))
                FUNC_0(VAR_6, "/");
            FUNC_8(VAR_7);
        }


        FUNC_7(VAR_7, "Content", 0);
        {
            int VAR_18 = -1;
            size_t VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
            size_t VAR_22 = 0, VAR_23 = 0;
            size_t VAR_24 = VAR_6->dir_count + VAR_6->file_count;

            VAR_23 = 4;
            VAR_22 = VAR_24 / VAR_23;
            for (VAR_19 = 0; VAR_19 <= VAR_22; VAR_19 += 1) {
                {size_t VAR_25 = VAR_20 + VAR_23;
                FUNC_11(VAR_7, 135, (int)VAR_23);
                for (; VAR_20 < VAR_24 && VAR_20 < VAR_25; ++VAR_20) {

                    if (VAR_20 < VAR_6->dir_count) {

                        if (FUNC_3(VAR_7,VAR_9->icons.directory))
                            VAR_18 = (int)VAR_20;
                    } else {

                        struct nk_image *VAR_26;
                        size_t VAR_27 = ((size_t)VAR_20 - VAR_6->dir_count);
                        VAR_26 = FUNC_1(VAR_9,VAR_6->files[VAR_27]);
                        if (FUNC_3(VAR_7, *VAR_26)) {
                            FUNC_17(VAR_6->file, VAR_6->directory, VAR_0);
                            VAR_25 = FUNC_16(VAR_6->file);
                            FUNC_17(VAR_6->file + VAR_25, VAR_6->files[VAR_27], VAR_0 - VAR_25);
                            VAR_8 = 1;
                        }
                    }
                }}
                {size_t VAR_28 = VAR_21 + VAR_23;
                FUNC_11(VAR_7, 20, (int)VAR_23);
                for (; VAR_21 < VAR_24 && VAR_21 < VAR_28; VAR_21++) {

                    if (VAR_21 < VAR_6->dir_count) {
                        FUNC_9(VAR_7, VAR_6->directories[VAR_21], VAR_2);
                    } else {
                        size_t VAR_29 = VAR_21-VAR_6->dir_count;
                        FUNC_9(VAR_7,VAR_6->files[VAR_29],VAR_2);
                    }
                }}
            }

            if (VAR_18 != -1) {
                size_t VAR_30 = FUNC_16(VAR_6->directory);
                FUNC_17(VAR_6->directory + VAR_30, VAR_6->directories[VAR_18], VAR_0 - VAR_30);
                VAR_30 = FUNC_16(VAR_6->directory);
                if (VAR_30 < VAR_0 - 1) {
                    VAR_6->directory[VAR_30] = '/';
                    VAR_6->directory[VAR_30+1] = '\0';
                }
                FUNC_0(VAR_6, VAR_6->directory);
            }
            FUNC_8(VAR_7);
        }
    }
    FUNC_6(VAR_7);
    return VAR_8;
}
