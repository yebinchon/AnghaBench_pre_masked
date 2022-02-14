
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfn {int member_0; } ;
struct mpv_global {int dummy; } ;
struct MPOpts {scalar_t__ sub_auto; scalar_t__ audiofile_auto; int audiofile_paths; int sub_paths; } ;


 int FUNC_0 (int *,struct subfn*,int,struct subfn) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mpv_global*,struct MPOpts*,struct subfn**,int*,int ,char const*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct subfn**,int*) ;
 int FUNC_3 (struct mpv_global*,struct MPOpts*,struct subfn**,int*,char const*,int ,char*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct subfn*,int,int,int ) ;
 struct subfn* VAR_4 ;
 struct subfn* FUNC_6 (int *,int ,int) ;

struct subfn *FUNC_7(struct mpv_global *VAR_5, const char *VAR_6,
                                  struct MPOpts *VAR_7)
{
    struct subfn *VAR_8 = FUNC_6(((void*)0), VAR_8, 1);
    int VAR_9 = 0;


    FUNC_1(VAR_5, VAR_7, &VAR_8, &VAR_9, FUNC_4(VAR_6), VAR_6, 0, -1);


    if (VAR_7->sub_auto >= 0) {
        FUNC_3(VAR_5, VAR_7, &VAR_8, &VAR_9, VAR_6, VAR_7->sub_paths, "sub",
                   VAR_1);
    }

    if (VAR_7->audiofile_auto >= 0) {
        FUNC_3(VAR_5, VAR_7, &VAR_8, &VAR_9, VAR_6, VAR_7->audiofile_paths,
                   "audio", VAR_0);
    }


    FUNC_5(VAR_8, VAR_9, sizeof(*VAR_8), VAR_2);

    FUNC_2(&VAR_8, &VAR_9);


    FUNC_5(VAR_8, VAR_9, sizeof(*VAR_8), VAR_3);

    struct subfn VAR_10 = {0};
    FUNC_0(((void*)0), VAR_8, VAR_9, VAR_10);

    return VAR_8;
}
