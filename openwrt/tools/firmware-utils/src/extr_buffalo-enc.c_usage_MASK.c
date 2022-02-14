
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

void FUNC_2(int VAR_4)
{
 FILE *VAR_5 = (VAR_4 != VAR_0) ? VAR_2 : VAR_3;

 FUNC_1(VAR_5, "Usage: %s [OPTIONS...]\n", VAR_1);
 FUNC_1(VAR_5,
"\n"
"Options:\n"
"  -d              decrypt instead of encrypt\n"
"  -i <file>       read input from the file <file>\n"
"  -o <file>       write output to the file <file>\n"
"  -l              use longstate {en,de}cryption method\n"
"  -k <key>        use <key> for encryption (default: Buffalo)\n"
"  -m <magic>      set magic to <magic>\n"
"  -p <product>    set product name to <product>\n"
"  -v <version>    set version to <version>\n"
"  -h              show this screen\n"
"  -O              Offset of encrypted data in file (decryption)\n"
"  -S              Size of unencrypted data in file (encryption)\n"
 );

 FUNC_0(VAR_4);
}
