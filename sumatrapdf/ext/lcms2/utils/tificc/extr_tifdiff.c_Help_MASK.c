
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_3()
{
    FUNC_2(VAR_1, "Little cms TIFF compare utility. v1.0\n\n");

    FUNC_2(VAR_1, "usage: tiffdiff [flags] input.tif output.tif\n");

    FUNC_2(VAR_1, "\nflags:\n\n");


    FUNC_2(VAR_1, "%co<tiff>   - Output TIFF file\n", VAR_0);
    FUNC_2(VAR_1, "%cg<CGATS>  - Output results in CGATS file\n", VAR_0);

    FUNC_2(VAR_1, "\n");

    FUNC_2(VAR_1, "%cv - Verbose (show warnings)\n", VAR_0);
    FUNC_2(VAR_1, "%ch - This help\n", VAR_0);


    FUNC_1(VAR_1);
    FUNC_0(0);
}
