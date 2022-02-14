
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1()
{
    FUNC_0(VAR_0, "HELP for frames_to_mj2\n----\n\n");
    FUNC_0(VAR_0, "- the -h option displays this help information on screen\n\n");


    FUNC_0(VAR_0, "List of parameters for the MJ2 encoder:\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "REMARKS:\n");
    FUNC_0(VAR_0, "---------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0
    (VAR_0, "The markers written to the main_header are : SOC SIZ COD QCD COM.\n");
    FUNC_0
    (VAR_0, "COD and QCD never appear in the tile_header.\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "By default:\n");
    FUNC_0(VAR_0, "------------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, " * Lossless\n");
    FUNC_0(VAR_0, " * 1 tile\n");
    FUNC_0(VAR_0, " * Size of precinct : 2^15 x 2^15 (means 1 precinct)\n");
    FUNC_0(VAR_0, " * Size of code-block : 64 x 64\n");
    FUNC_0(VAR_0, " * Number of resolutions: 6\n");
    FUNC_0(VAR_0, " * No SOP marker in the codestream\n");
    FUNC_0(VAR_0, " * No EPH marker in the codestream\n");
    FUNC_0(VAR_0, " * No sub-sampling in x or y direction\n");
    FUNC_0(VAR_0, " * No mode switch activated\n");
    FUNC_0(VAR_0, " * Progression order: LRCP\n");
    FUNC_0(VAR_0, " * No index file\n");
    FUNC_0(VAR_0, " * No ROI upshifted\n");
    FUNC_0(VAR_0, " * No offset of the origin of the image\n");
    FUNC_0(VAR_0, " * No offset of the origin of the tiles\n");
    FUNC_0(VAR_0, " * Reversible DWT 5-3\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "Parameters:\n");
    FUNC_0(VAR_0, "------------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0
    (VAR_0, "Required Parameters (except with -h):\n");
    FUNC_0
    (VAR_0, "-i : source file      (-i source.yuv) \n");
    FUNC_0
    (VAR_0, "-o : destination file (-o dest.mj2) \n");
    FUNC_0
    (VAR_0, "Optional Parameters:\n");
    FUNC_0(VAR_0, "-h : display the help information \n");
    FUNC_0(VAR_0,
            "-r : different compression ratios for successive layers (-r 20,10,5)\n");
    FUNC_0(VAR_0,
            "     - The rate specified for each quality level is the desired \n");
    FUNC_0(VAR_0, "       compression factor.\n");
    FUNC_0(VAR_0, "       Example: -r 20,10,1 means quality 1: compress 20x, \n");
    FUNC_0(VAR_0,
            "       quality 2: compress 10x and quality 3: compress lossless\n");
    FUNC_0(VAR_0, "       (options -r and -q cannot be used together)\n");

    FUNC_0(VAR_0, "-q : different psnr for successive layers (-q 30,40,50) \n");
    FUNC_0(VAR_0, "        (options -r and -q cannot be used together)\n");

    FUNC_0(VAR_0, "-n : number of resolutions (-n 3) \n");
    FUNC_0(VAR_0, "-b : size of code block (-b 32,32) \n");
    FUNC_0(VAR_0, "-c : size of precinct (-c 128,128) \n");
    FUNC_0(VAR_0, "-t : size of tile (-t 512,512) \n");
    FUNC_0
    (VAR_0, "-p : progression order (-p LRCP) [LRCP, RLCP, RPCL, PCRL, CPRL] \n");
    FUNC_0
    (VAR_0, "-s : subsampling factor (-s 2,2) [-s X,Y] \n");
    FUNC_0(VAR_0, "     Remark: subsampling bigger than 2 can produce error\n");
    FUNC_0
    (VAR_0, "-S : write SOP marker before each packet \n");
    FUNC_0
    (VAR_0, "-E : write EPH marker after each header packet \n");
    FUNC_0
    (VAR_0, "-M : mode switch (-M 3) [1=BYPASS(LAZY) 2=RESET 4=RESTART(TERMALL)\n");
    FUNC_0
    (VAR_0, "             8=VSC 16=ERTERM(SEGTERM) 32=SEGMARK(SEGSYM)] \n");
    FUNC_0
    (VAR_0, "             Indicate multiple modes by adding their values. \n");
    FUNC_0
    (VAR_0, "             Example: RESTART(4) + RESET(2) + SEGMARK(32) = -M 38\n");
    FUNC_0
    (VAR_0, "-R : c=%%d,U=%%d : quantization indices upshifted \n");
    FUNC_0
    (VAR_0, "             for component c=%%d [%%d = 0,1,2]\n");
    FUNC_0
    (VAR_0, "             with a value of U=%%d [0 <= %%d <= 37] (i.e. -ROI:c=0,U=25) \n");
    FUNC_0
    (VAR_0, "-d : offset of the origin of the image (-d 150,300) \n");
    FUNC_0
    (VAR_0, "-T : offset of the origin of the tiles (-T 100,75) \n");
    FUNC_0(VAR_0, "-I : use the irreversible DWT 9-7 (-I) \n");
    FUNC_0(VAR_0, "-W : image width, height and the dx and dy subsampling \n");
    FUNC_0(VAR_0, "        of the Cb and Cr components for YUV files \n");
    FUNC_0(VAR_0,
            "        (default is '352,288,2,2' for CIF format's 352x288 and 4:2:0)\n");
    FUNC_0(VAR_0, "-F : video frame rate (set to 25 by default)\n");
    FUNC_0(VAR_0, "-D : depth, precision in bits [8 .. 16]; default:8\n");
    FUNC_0(VAR_0, "-C : comment\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "IMPORTANT:\n");
    FUNC_0(VAR_0, "-----------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "The index file has the structure below:\n");
    FUNC_0(VAR_0, "---------------------------------------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "Image_height Image_width\n");
    FUNC_0(VAR_0, "progression order\n");
    FUNC_0(VAR_0, "Tiles_size_X Tiles_size_Y\n");
    FUNC_0(VAR_0, "Components_nb\n");
    FUNC_0(VAR_0, "Layers_nb\n");
    FUNC_0(VAR_0, "decomposition_levels\n");
    FUNC_0(VAR_0, "[Precincts_size_X_res_Nr Precincts_size_Y_res_Nr]...\n");
    FUNC_0(VAR_0, "   [Precincts_size_X_res_0 Precincts_size_Y_res_0]\n");
    FUNC_0(VAR_0, "Main_header_end_position\n");
    FUNC_0(VAR_0, "Codestream_size\n");
    FUNC_0(VAR_0,
            "Tile_0 start_pos end_Theader end_pos TotalDisto NumPix MaxMSE\n");
    FUNC_0(VAR_0,
            "Tile_1   ''           ''        ''        ''       ''    ''\n");
    FUNC_0(VAR_0, "...\n");
    FUNC_0(VAR_0,
            "Tile_Nt   ''           ''        ''        ''       ''    ''\n");
    FUNC_0(VAR_0,
            "Tpacket_0 Tile layer res. comp. prec. start_pos end_pos disto\n");
    FUNC_0(VAR_0, "...\n");
    FUNC_0(VAR_0,
            "Tpacket_Np ''   ''    ''   ''    ''       ''       ''     ''\n");

    FUNC_0(VAR_0, "MaxDisto\n");

    FUNC_0(VAR_0, "TotalDisto\n\n");
}
