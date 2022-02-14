
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_0(VAR_0, "\nThis is the opj_dump utility from the OpenJPEG project.\n"
            "It dumps JPEG 2000 codestream info to stdout or a given file.\n"
            "It has been compiled against openjp2 library v%s.\n\n", FUNC_1());

    FUNC_0(VAR_0, "Parameters:\n");
    FUNC_0(VAR_0, "-----------\n");
    FUNC_0(VAR_0, "\n");
    FUNC_0(VAR_0, "  -ImgDir <directory>\n");
    FUNC_0(VAR_0, "	Image file Directory path \n");
    FUNC_0(VAR_0, "  -i <compressed file>\n");
    FUNC_0(VAR_0,
            "    REQUIRED only if an Input image directory not specified\n");
    FUNC_0(VAR_0,
            "    Currently accepts J2K-files, JP2-files and JPT-files. The file type\n");
    FUNC_0(VAR_0, "    is identified based on its suffix.\n");
    FUNC_0(VAR_0, "  -o <output file>\n");
    FUNC_0(VAR_0, "    OPTIONAL\n");
    FUNC_0(VAR_0, "    Output file where file info will be dump.\n");
    FUNC_0(VAR_0, "    By default it will be in the stdout.\n");
    FUNC_0(VAR_0, "  -v ");
    FUNC_0(VAR_0, "    OPTIONAL\n");
    FUNC_0(VAR_0, "    Enable informative messages\n");
    FUNC_0(VAR_0, "    By default verbose mode is off.\n");
    FUNC_0(VAR_0, "\n");
}
