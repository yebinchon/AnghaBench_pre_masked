
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
    FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_2 : VAR_3;

    FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_1);
    FUNC_1(VAR_5,
     "\n"
     "Options:\n"
     "  -s <sig>        set image signature to <sig>\n"
     "  -m <model>      set model to <model>\n"
     "  -i <file>       read input from file <file>\n"
     "  -o <file>       write output to file <file>\n"
     "  -f <flash>      set flash address to <flash>\n"
     "  -S <start>      set start address to <start>\n"
     "  -b              big-endianness mode\n");

    FUNC_0(VAR_4);
}
