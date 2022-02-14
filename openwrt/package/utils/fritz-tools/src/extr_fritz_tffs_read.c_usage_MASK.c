
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
 "  -a              list all key value pairs found in the TFFS file/device\n"
 "  -b              swap bytes while parsing the TFFS file/device\n"
 "  -h              show this screen\n"
 "  -i <file>       inspect the given TFFS file/device <file>\n"
 "  -l              list all supported keys\n"
 "  -n <key name>   display the value of the given key\n"
 "  -s <size>       the (max) size of the TFFS file/device <size>\n"
 );

 FUNC_0(VAR_4);
}
