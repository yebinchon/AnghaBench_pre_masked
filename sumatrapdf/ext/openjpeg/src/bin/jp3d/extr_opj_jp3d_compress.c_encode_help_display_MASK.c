
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1()
{
    FUNC_0(VAR_0, "List of parameters for the JPEG2000 Part 10 encoder:\n");
    FUNC_0(VAR_0, "------------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "Required Parameters (except with -h):\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-i           : source file  (-i source.bin or source*.pgx) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-m           : source characteristics file (-m imgfile.img) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-o           : destination file (-o dest.jp3d) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "Optional Parameters:\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-h           : display the help information \n ");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-n           : number of resolutions (-n 3,3,3) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-I           : use the irreversible transforms: ICT + DWT 9-7 (-I) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-C           : coding algorithm (-C 2EB) [2EB, 3EB] \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-r           : different compression ratios for successive layers (-r 20,10,5)\n ");
    FUNC_0(VAR_0,
            "	         - The rate specified for each quality level is the desired compression factor.\n");
    FUNC_0(VAR_0, "	         - Rate 1 means lossless compression\n");
    FUNC_0(VAR_0,
            "               (options -r and -q cannot be used together)\n ");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-q           : different psnr for successive layers (-q 30,40,50) \n ");
    FUNC_0(VAR_0,
            "               (options -r and -q cannot be used together)\n ");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-b           : size of code block (-b 32,32,32) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-c           : size of precinct (-c 128,128,128) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-t           : size of tile (-t 512,512,512) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-p           : progression order (-p LRCP) [LRCP, RLCP, RPCL, PCRL, CPRL] \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-s           : subsampling factor (-s 2,2,2) [-s X,Y,Z] \n");
    FUNC_0(VAR_0, "			  - Remark: subsampling bigger than 2 can produce error\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-SOP         : write SOP marker before each packet \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-EPH         : write EPH marker after each header packet \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-M           : code-block style (-M 0) [1=BYPASS(LAZY) 2=RESET 4=RESTART(TERMALL)\n");
    FUNC_0(VAR_0, "                 8=VSC 16=PTERM 32=SEGSYM 64=3DCTXT] \n");
    FUNC_0(VAR_0,
            "                 Indicate multiple modes by adding their values. \n");
    FUNC_0(VAR_0,
            "                 ex: RESTART(4) + RESET(2) + SEGMARK(32) = -M 38\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "-D           : define DC offset (-D 12) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-x           : create an index file *.Idx (-x index_name.Idx) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-ROI         : c=%%d,U=%%d : quantization indices upshifted \n");
    FUNC_0(VAR_0, "               for component c=%%d [%%d = 0,1,2]\n");
    FUNC_0(VAR_0,
            "               with a value of U=%%d [0 <= %%d <= 37] (i.e. -ROI:c=0,U=25) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-d           : offset of the origin of the volume (-d 150,300,100) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "-l           : offset of the origin of the tiles (-l 100,75,25) \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "DEFAULT CODING:\n");
    FUNC_0(VAR_0, "------------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, " * Lossless\n");
    FUNC_0(VAR_0, " * 1 tile\n");
    FUNC_0(VAR_0,
            " * Size of precinct : 2^15 x 2^15 x 2^15 (means 1 precinct)\n");
    FUNC_0(VAR_0, " * Size of code-block : 64 x 64 x 64\n");
    FUNC_0(VAR_0, " * Number of resolutions in x, y and z axis: 3\n");
    FUNC_0(VAR_0, " * No SOP marker in the codestream\n");
    FUNC_0(VAR_0, " * No EPH marker in the codestream\n");
    FUNC_0(VAR_0, " * No sub-sampling in x, y or z direction\n");
    FUNC_0(VAR_0, " * No mode switch activated\n");
    FUNC_0(VAR_0, " * Progression order: LRCP\n");
    FUNC_0(VAR_0, " * No index file\n");
    FUNC_0(VAR_0, " * No ROI upshifted\n");
    FUNC_0(VAR_0, " * No offset of the origin of the volume\n");
    FUNC_0(VAR_0, " * No offset of the origin of the tiles\n");
    FUNC_0(VAR_0, " * Reversible DWT 5-3 on each 2D slice\n");
    FUNC_0(VAR_0, " * Coding algorithm: 2D-EBCOT \n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "REMARKS:\n");
    FUNC_0(VAR_0, "---------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "- The markers written to the main_header are : SOC SIZ COD QCD COM.\n");
    FUNC_0(VAR_0,
            "- COD and QCD markers will never appear in the tile_header.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "- You need enough disk space memory (twice the original) to encode \n");
    FUNC_0(VAR_0,
            "the volume,i.e. for a 1.5 GB volume you need a minimum of 3GB of disk memory)\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0,
            "- When loading *.pgx files, a relative path to directory is needed for input argument \n");
    FUNC_0(VAR_0,
            " followed by the common prefix of the slices and a '*' character representing sequential numeration.\n");
    FUNC_0(VAR_0, "( -i relativepath/slices*.pgx )\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, " - The index file has the structure below:\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "\t	Image_height Image_width Image_depth\n");
    FUNC_0(VAR_0, "\t	Progression order: 0 (LRCP)\n");
    FUNC_0(VAR_0, "\t	Tiles_size_X Tiles_size_Y Tiles_size_Z\n");
    FUNC_0(VAR_0, "\t	Components_nb\n");
    FUNC_0(VAR_0, "\t	Layers_nb\n");
    FUNC_0(VAR_0, "\t	Decomposition_levels\n");
    FUNC_0(VAR_0,
            "\t	[Precincts_size_X_res_Nr Precincts_size_Y_res_Nr Precincts_size_Z_res_Nr]\n\t  ...\n");
    FUNC_0(VAR_0,
            "\t	[Precincts_size_X_res_0 Precincts_size_Y_res_0 Precincts_size_Z_res_0]\n");
    FUNC_0(VAR_0, "\t	Main_header_end_position\n");
    FUNC_0(VAR_0, "\t	Codestream_size\n");
    FUNC_0(VAR_0,
            "\t	Tile_0 [start_pos end_header end_pos TotalDisto NumPix MaxMSE]\n");
    FUNC_0(VAR_0, "\t	...\n");
    FUNC_0(VAR_0,
            "\t	Tile_Nt [  ''         ''        ''        ''       ''    ''  ]\n");
    FUNC_0(VAR_0,
            "\t  Tpacket_0 [Tile layer res. comp. prec. start_pos end_pos disto]\n");
    FUNC_0(VAR_0, "\t  ...\n");
    FUNC_0(VAR_0,
            "\t  Tpacket_Np [''   ''    ''   ''    ''       ''       ''     '' ]\n");
    FUNC_0(VAR_0, "\t  MaxDisto\n");
    FUNC_0(VAR_0, "\t  TotalDisto\n\n");
    FUNC_0(VAR_0, "\n");

}
