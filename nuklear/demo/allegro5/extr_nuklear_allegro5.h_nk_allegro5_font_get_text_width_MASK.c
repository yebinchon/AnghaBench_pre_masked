
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; } ;
typedef TYPE_1__ nk_handle ;
struct TYPE_5__ {int font; } ;
typedef TYPE_2__ NkAllegro5Font ;


 float FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static float
FUNC_2(nk_handle VAR_0, float VAR_1, const char *VAR_2, int VAR_3)
{
    NkAllegro5Font *VAR_4 = (NkAllegro5Font*)VAR_0.ptr;
    if (!VAR_4 || !VAR_2) {
        return 0;
    }




    char VAR_5[VAR_3+1];
    FUNC_1((char*)&VAR_5, VAR_2, VAR_3);
    VAR_5[VAR_3] = '\0';
    return FUNC_0(VAR_4->font, VAR_5);
}
