
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int SeafRepo ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_1 ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static gboolean
FUNC_4 (SeafRepo *VAR_2)
{
    char *VAR_3 = FUNC_2(VAR_1, "notify_sync");
    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_1, "notify_sync", "on");
        return VAR_0;
    }

    gboolean VAR_4 = (FUNC_1(VAR_3, "on") == 0);
    FUNC_0 (VAR_3);
    return VAR_4;
}
