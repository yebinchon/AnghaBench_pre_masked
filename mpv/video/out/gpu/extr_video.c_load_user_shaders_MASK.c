
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_video {int ra; int log; } ;
struct bstr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bstr FUNC_0 (struct gl_video*,char*) ;
 int FUNC_1 (int ,int ,struct bstr,struct gl_video*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_2, char **VAR_3)
{
    if (!VAR_3)
        return;

    for (int VAR_4 = 0; VAR_3[VAR_4] != ((void*)0); VAR_4++) {
        struct bstr VAR_5 = FUNC_0(VAR_2, VAR_3[VAR_4]);
        FUNC_1(VAR_2->log, VAR_2->ra, VAR_5, VAR_2, VAR_0, VAR_1);
    }
}
