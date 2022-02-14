
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_1(void)
{
    FUNC_0(VAR_1, "HELP for j2k_to_image\n----\n\n");
    FUNC_0(VAR_1, "- the -h option displays this help information on screen\n\n");


    FUNC_0(VAR_1, "List of parameters for the JPEG 2000 "



            "decoder:\n");

    FUNC_0(VAR_1, "\n");
    FUNC_0(VAR_1, "\n");
    FUNC_0(VAR_1, "  -ImgDir \n");
    FUNC_0(VAR_1, "	Image file Directory path \n");
    FUNC_0(VAR_1, "  -OutFor \n");
    FUNC_0(VAR_1, "    REQUIRED only if -ImgDir is used\n");
    FUNC_0(VAR_1, "	  Need to specify only format without filename <BMP>  \n");
    FUNC_0(VAR_1,
            "    Currently accepts PGM, PPM, PNM, PGX, PNG, BMP, TIF, RAW and TGA formats\n");
    FUNC_0(VAR_1, "  -i <compressed file>\n");
    FUNC_0(VAR_1,
            "    REQUIRED only if an Input image directory not specified\n");
    FUNC_0(VAR_1,
            "    Currently accepts J2K-files, JP2-files and JPT-files. The file type\n");
    FUNC_0(VAR_1, "    is identified based on its suffix.\n");
    FUNC_0(VAR_1, "  -o <decompressed file>\n");
    FUNC_0(VAR_1, "    REQUIRED\n");
    FUNC_0(VAR_1,
            "    Currently accepts PGM, PPM, PNM, PGX, PNG, BMP, TIF, RAW and TGA files\n");
    FUNC_0(VAR_1,
            "    Binary data is written to the file (not ascii). If a PGX\n");
    FUNC_0(VAR_1,
            "    filename is given, there will be as many output files as there are\n");
    FUNC_0(VAR_1,
            "    components: an indice starting from 0 will then be appended to the\n");
    FUNC_0(VAR_1,
            "    output filename, just before the \"pgx\" extension. If a PGM filename\n");
    FUNC_0(VAR_1,
            "    is given and there are more than one component, only the first component\n");
    FUNC_0(VAR_1, "    will be written to the file.\n");
    FUNC_0(VAR_1, "  -r <reduce factor>\n");
    FUNC_0(VAR_1,
            "    Set the number of highest resolution levels to be discarded. The\n");
    FUNC_0(VAR_1,
            "    image resolution is effectively divided by 2 to the power of the\n");
    FUNC_0(VAR_1,
            "    number of discarded levels. The reduce factor is limited by the\n");
    FUNC_0(VAR_1,
            "    smallest total number of decomposition levels among tiles.\n");
    FUNC_0(VAR_1, "  -l <number of quality layers to decode>\n");
    FUNC_0(VAR_1,
            "    Set the maximum number of quality layers to decode. If there are\n");
    FUNC_0(VAR_1,
            "    less quality layers than the specified number, all the quality layers\n");
    FUNC_0(VAR_1, "    are decoded.\n");
    FUNC_0(VAR_1, "  -x  \n");
    FUNC_0(VAR_1, "    Create an index file *.Idx (-x index_name.Idx) \n");
    FUNC_0(VAR_1, "\n");
    FUNC_0(VAR_1, "\n");
}
