
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0)
{

    if (VAR_0 && FUNC_0(VAR_0, "webvtt-webm") == 0)
        VAR_0 = "webvtt";

    if (VAR_0 && FUNC_0(VAR_0, "text") == 0)
        VAR_0 = "subrip";
    return VAR_0;
}
