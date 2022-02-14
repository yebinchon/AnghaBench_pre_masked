
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int gpointer ;
typedef char gchar ;
typedef scalar_t__ GLogLevelFlags ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 struct tm* FUNC_4 (int *) ;
 int * VAR_1 ;
 int FUNC_5 (char*,char*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,int,char*,struct tm*) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9 (const gchar *VAR_3, GLogLevelFlags VAR_4,
             const gchar *VAR_5, gpointer VAR_6)
{
    time_t VAR_7;
    struct tm *VAR_8;
    char VAR_9[1024];
    int VAR_10;

    if (VAR_4 > VAR_2)
        return;

    VAR_7 = FUNC_8(((void*)0));
    VAR_8 = FUNC_4(&VAR_7);
    VAR_10 = FUNC_6 (VAR_9, 1024, "[%x %X] ", VAR_8);
    FUNC_2 (VAR_10 < 1024);
    if (VAR_1 != ((void*)0)) {
        FUNC_1 (VAR_9, VAR_1);
        FUNC_1 (VAR_5, VAR_1);
        FUNC_0 (VAR_1);
    } else {
        FUNC_5("%s %s", VAR_9, VAR_5);
    }







}
