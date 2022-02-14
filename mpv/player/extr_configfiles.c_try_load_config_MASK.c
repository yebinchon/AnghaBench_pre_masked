
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int mconfig; } ;


 int FUNC_0 (struct MPContext*,int,char*,char const*) ;
 int FUNC_1 (int ,char const*,int *,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct MPContext *VAR_0, const char *VAR_1, int VAR_2,
                           int VAR_3)
{
    if (!FUNC_2(VAR_1))
        return 0;
    FUNC_0(VAR_0, VAR_3, "Loading config '%s'\n", VAR_1);
    FUNC_1(VAR_0->mconfig, VAR_1, ((void*)0), VAR_2);
    return 1;
}
