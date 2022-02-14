
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(char* VAR_0[]) {
 FUNC_0("Usage: %s [OPTIONS...]\n"
        "\n"
        "Options:\n"
        "  -f            add sercom footer (if absent, header)\n"
        "  -b <hwid>     use hardware id specified with <hwid> (ASCII)\n"
        "  -r <hwrev>    use hardware revision specified with <hwrev> (ASCII)\n"
        "  -v <version>  set image version to <version> (decimal, hex or octal notation)\n"
        "  -i <file>     input file\n"
        , VAR_0[0]);
}
