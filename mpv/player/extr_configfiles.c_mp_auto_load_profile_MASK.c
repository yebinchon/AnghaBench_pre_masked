
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
struct MPContext {int mconfig; } ;
typedef int m_profile_t ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ bstr ;


 char* FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int FUNC_1 (struct MPContext*,char*,char*) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_1, char *VAR_2,
                                 bstr VAR_3)
{
    if (!VAR_3.len)
        return;

    char VAR_4[512];
    FUNC_4(VAR_4, sizeof(VAR_4), "%s.%.*s", VAR_2, FUNC_0(VAR_3));
    m_profile_t *VAR_5 = FUNC_2(VAR_1->mconfig, VAR_4);
    if (VAR_5) {
        FUNC_1(VAR_1, "Auto-loading profile '%s'\n", VAR_4);
        FUNC_3(VAR_1->mconfig, VAR_4, VAR_0);
    }
}
