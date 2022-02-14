
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum recorder_format { ____Placeholder_recorder_format } recorder_format ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static enum recorder_format
FUNC_2(const char *VAR_2) {
    size_t VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 < 4) {
        return 0;
    }
    const char *VAR_4 = &VAR_2[VAR_3 - 4];
    if (!FUNC_0(VAR_4, ".mp4")) {
        return VAR_1;
    }
    if (!FUNC_0(VAR_4, ".mkv")) {
        return VAR_0;
    }
    return 0;
}
