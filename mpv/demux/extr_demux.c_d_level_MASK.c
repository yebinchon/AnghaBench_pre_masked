
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum demux_check { ____Placeholder_demux_check } demux_check ;






 int FUNC_0 () ;

__attribute__((used)) static const char *FUNC_1(enum demux_check VAR_0)
{
    switch (VAR_0) {
    case 131: return "force";
    case 128: return "unsafe";
    case 129:return "request";
    case 130: return "normal";
    }
    FUNC_0();
}
