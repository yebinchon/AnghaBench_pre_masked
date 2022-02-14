
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,char*,char*,char*) ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_3, int VAR_4)
{
 FUNC_3(VAR_3,
   FUNC_0("%s: usage is %s [ --version ] [ --help ] [ -v ] [ -P ] \\\n"
     "\t[ -b {slim|fat} ] [ -d directory ] [ -l localtime ]"
     " [ -L leapseconds ] \\\n"
     "\t[ -p posixrules ] [ -r '[@lo][/@hi]' ] [ -t localtime-link ] \\\n"
     "\t[ filename ... ]\n\n"
     "Report bugs to %s.\n"),
   VAR_2, VAR_2, VAR_1);
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_3, ((void*)0), ((void*)0));
 FUNC_2(VAR_4);
}
