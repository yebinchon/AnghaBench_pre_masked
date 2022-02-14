
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum recorder_format { ____Placeholder_recorder_format } recorder_format ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_2, enum recorder_format *VAR_3) {
    if (!FUNC_1(VAR_2, "mp4")) {
        *VAR_3 = VAR_1;
        return 1;
    }
    if (!FUNC_1(VAR_2, "mkv")) {
        *VAR_3 = VAR_0;
        return 1;
    }
    FUNC_0("Unsupported format: %s (expected mp4 or mkv)", VAR_2);
    return 0;
}
