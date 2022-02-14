
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct bstr {int member_0; } ;
typedef int stream_t ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,struct mpv_global*,char const*) ;
 int * FUNC_2 (char*,struct mpv_global*) ;
 struct bstr FUNC_3 (int *,void*,int) ;
 int FUNC_4 (char*) ;

struct bstr FUNC_5(const char *VAR_0, void *VAR_1,
                             struct mpv_global *VAR_2, int VAR_3)
{
    struct bstr VAR_4 = {0};
    char *VAR_5 = FUNC_1(((void*)0), VAR_2, VAR_0);
    stream_t *VAR_6 = FUNC_2(VAR_5, VAR_2);
    if (VAR_6) {
        VAR_4 = FUNC_3(VAR_6, VAR_1, VAR_3);
        FUNC_0(VAR_6);
    }
    FUNC_4(VAR_5);
    return VAR_4;
}
