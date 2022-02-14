
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1()
{
    FUNC_0(VAR_0, "HELP\n----\n\n");
    FUNC_0(VAR_0, "- the -h option displays this help information on screen\n\n");

    FUNC_0(VAR_0, "List of parameters for the JPEG 2000 encoder:\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, " Required arguments \n");
    FUNC_0(VAR_0, " ---------------------------- \n");
    FUNC_0(VAR_0, "  -i <compressed file> ( *.jp3d, *.j3d )\n");
    FUNC_0(VAR_0,
            "    Currently accepts J3D-files. The file type is identified based on its suffix.\n");
    FUNC_0(VAR_0, "  -o <decompressed file> ( *.pgx, *.bin )\n");
    FUNC_0(VAR_0,
            "    Currently accepts PGX-files and BIN-files. Binary data is written to the file (not ascii). \n");
    FUNC_0(VAR_0,
            "    If a PGX filename is given, there will be as many output files as slices; \n");
    FUNC_0(VAR_0,
            "    an indice starting from 0 will then be appended to the output filename,\n");
    FUNC_0(VAR_0, "    just before the \"pgx\" extension.\n");
    FUNC_0(VAR_0, "  -m <characteristics file> ( *.img ) \n");
    FUNC_0(VAR_0,
            "    Required only for BIN-files. Ascii data of volume characteristics is written. \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, " Optional  \n");
    FUNC_0(VAR_0, " ---------------------------- \n");
    FUNC_0(VAR_0, "  -h \n ");
    FUNC_0(VAR_0, "    Display the help information\n");
    FUNC_0(VAR_0, "  -r <RFx,RFy,RFz>\n");
    FUNC_0(VAR_0,
            "    Set the number of highest resolution levels to be discarded on each dimension. \n");
    FUNC_0(VAR_0,
            "    The volume resolution is effectively divided by 2 to the power of the\n");
    FUNC_0(VAR_0,
            "    number of discarded levels. The reduce factor is limited by the\n");
    FUNC_0(VAR_0,
            "    smallest total number of decomposition levels among tiles.\n");
    FUNC_0(VAR_0, "  -l <number of quality layers to decode>\n");
    FUNC_0(VAR_0,
            "    Set the maximum number of quality layers to decode. If there are\n");
    FUNC_0(VAR_0,
            "    less quality layers than the specified number, all the quality layers\n");
    FUNC_0(VAR_0, "    are decoded. \n");
    FUNC_0(VAR_0, "  -O original-file \n");
    FUNC_0(VAR_0,
            "    This option offers the possibility to compute some quality results  \n");
    FUNC_0(VAR_0,
            "    for the decompressed volume, like the PSNR value achieved or the global SSIM value.  \n");
    FUNC_0(VAR_0,
            "    Needs the original file in order to compare with the new one.\n");
    FUNC_0(VAR_0,
            "    NOTE: Only valid when -r option is 0,0,0 (both original and decompressed volumes have same resolutions) \n");
    FUNC_0(VAR_0,
            "    NOTE: If original file is .BIN file, the volume characteristics file shall be defined with the -m option. \n");
    FUNC_0(VAR_0, "    (i.e. -O original-BIN-file -m original-IMG-file) \n");
    FUNC_0(VAR_0, "  -BE \n");
    FUNC_0(VAR_0,
            "    Define that the recovered volume data will be saved with big endian byte order.\n");
    FUNC_0(VAR_0, "    By default, little endian byte order is used.\n");
    FUNC_0(VAR_0, "\n");
}
