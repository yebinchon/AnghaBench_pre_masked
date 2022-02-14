
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
"  -k <file>       read kernel image from the file <file>\n"
"  -c              use the kernel image as a combined image\n"
"  -M <model>      set model to <model>\n"
"  -o <file>       write output to the file <file>\n"
"  -r <file>       read rootfs image from the file <file>\n"
"  -S <signature>  set image signature to <signature>\n"
"  -R <region>     set image region to <region>\n"
"  -V <version>    set image version to <version>\n"
"  -I <size>       set image size to <size>\n"
"  -K <size>       set kernel size to <size>\n"
"  -h              show this screen\n"
 );

 FUNC_0(VAR_4);
}
