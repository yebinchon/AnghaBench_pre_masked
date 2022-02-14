
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char** argv; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (struct nn_parse_context *VAR_1) {
    FUNC_1 (VAR_0, "%s: Memory error while parsing command-line",
        VAR_1->argv[0]);
    FUNC_0 ();
}
