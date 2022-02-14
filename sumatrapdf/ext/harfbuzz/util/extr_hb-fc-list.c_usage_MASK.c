
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_2, int VAR_3)
{
    FILE *VAR_4 = VAR_3 ? VAR_0 : VAR_1;




    FUNC_1 (VAR_4, "usage: %s [-vqVh] [-f FORMAT] text [pattern] {element ...} \n",
      VAR_2);

    FUNC_1 (VAR_4, "List fonts matching [pattern] that can render [text]\n");
    FUNC_1 (VAR_4, "\n");







    FUNC_1 (VAR_4, "  -v         (verbose) display entire font pattern verbosely\n");
    FUNC_1 (VAR_4, "  -f FORMAT  (format)  use the given output format\n");
    FUNC_1 (VAR_4, "  -q,        (quiet)   suppress all normal output, exit 1 if no fonts matched\n");
    FUNC_1 (VAR_4, "  -V         (version) display HarfBuzz version and exit\n");
    FUNC_1 (VAR_4, "  -h         (help)    display this help and exit\n");

    FUNC_0 (VAR_3);
}
