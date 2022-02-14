
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commandHelp {char* name; char* params; char* summary; char* since; size_t group; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct commandHelp *VAR_1, int VAR_2) {
    FUNC_0("\r\n  \x1b[1m%s\x1b[0m \x1b[90m%s\x1b[0m\r\n", VAR_1->name, VAR_1->params);
    FUNC_0("  \x1b[33msummary:\x1b[0m %s\r\n", VAR_1->summary);
    FUNC_0("  \x1b[33msince:\x1b[0m %s\r\n", VAR_1->since);
    if (VAR_2) {
        FUNC_0("  \x1b[33mgroup:\x1b[0m %s\r\n", VAR_0[VAR_1->group]);
    }
}
