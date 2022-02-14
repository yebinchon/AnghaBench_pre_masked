
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {char* sct_text_file; int sct_dir; int sct_list; } ;
typedef int SCT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,char const*,int ,int const,char const*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(void)
{
    const char VAR_5[] = "3xwuwRUAlFJHqWFoMl3cXHlZ6PfG04j8AC4LvT9012Q=";
    const uint64_t VAR_6 = 1;
    const char VAR_7[] = "";
    const char VAR_8[] = "BAMARzBAMiBIL2dRrzXbplQ2vh/WZA89v5pBQpSVkkUwKI+j5"
            "eI+BgIhAOTtwNs6xXKx4vXoq2poBlOYfc9BAn3+/6EFUZ2J7b8I";
    SCT *VAR_9 = ((void*)0);

    FUNC_2();
    if (VAR_3 == ((void*)0))
        return 0;

    VAR_3->sct_list = FUNC_4();
    if (!FUNC_3(VAR_9 = FUNC_1(VAR_1, VAR_5,
                                            VAR_0, VAR_6,
                                            VAR_7, VAR_8)))

        return 0;

    FUNC_5(VAR_3->sct_list, VAR_9);
    VAR_3->sct_dir = VAR_2;
    VAR_3->sct_text_file = "tls1.sct";
    FUNC_0();
    return VAR_4;
}
