
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ SDL_LogPriority ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, int VAR_2, const char *VAR_3, va_list VAR_4) {
    SDL_LogPriority VAR_5 = FUNC_4(VAR_2);
    if (VAR_5 == 0) {
        return;
    }
    char *VAR_6 = FUNC_3(FUNC_6(VAR_3) + 10);
    if (!VAR_6) {
        FUNC_0("Could not allocate string");
        return;
    }

    FUNC_5(VAR_6, "[FFmpeg] ");
    FUNC_5(VAR_6 + 9, VAR_3);
    FUNC_1(VAR_0, VAR_5, VAR_6, VAR_4);
    FUNC_2(VAR_6);
}
