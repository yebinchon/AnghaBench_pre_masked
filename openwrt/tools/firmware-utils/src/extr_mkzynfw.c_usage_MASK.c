
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {char* name; char* desc; } ;
typedef int FILE ;


 int VAR_0 ;
 struct board_info* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 char* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

void
FUNC_2(int VAR_5)
{
 FILE *VAR_6 = (VAR_5 != VAR_0) ? VAR_3 : VAR_4;
 struct board_info *VAR_7;

 FUNC_1(VAR_6, "Usage: %s [OPTIONS...]\n", VAR_2);
 FUNC_1(VAR_6,
"\n"
"Options:\n"
"  -B <board>      create image for the board specified with <board>.\n"
"                  valid <board> values:\n"
 );
 for (VAR_7 = VAR_1; VAR_7->name != ((void*)0); VAR_7++){
  FUNC_1(VAR_6,
"                    %-12s= %s\n",
   VAR_7->name, VAR_7->desc);
 };
 FUNC_1(VAR_6,
"  -b <file>[:<align>]\n"
"                  add boot extension block to the image\n"
"  -r <file>[:<align>]\n"
"                  add raw block to the image\n"
"  -o <file>       write output to the file <file>\n"
"  -h              show this screen\n"
 );

 FUNC_0(VAR_5);
}
