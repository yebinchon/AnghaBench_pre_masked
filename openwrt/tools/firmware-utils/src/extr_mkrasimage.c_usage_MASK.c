
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
            "  -k <kernel>     path for kernel image\n"
            "  -r <rootfs>     path for rootfs image\n"
            "  -s <rfssize>    size of output rootfs\n"
            "  -v <version>    version string\n"
            "  -b <boardname>  name of board to generate image for\n"
            "  -o <out_name>   name of output image\n"
            "  -l <hdr_length> length of header, default 65536\n"
            "  -h              show this screen\n"
    );

    FUNC_0(VAR_4);
}
