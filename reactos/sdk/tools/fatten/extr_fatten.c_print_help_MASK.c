
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(const char* VAR_0)
{
    FUNC_0("\n");
    FUNC_0("Syntax: %s image_file [list of commands]\n\n", VAR_0);



    FUNC_0("Commands:\n");


    FUNC_0("    -format <sectors> [<custom header label>]\n"
           "            Formats the disk image.\n");
    FUNC_0("    -boot <sector file>\n"
           "            Writes a new boot sector.\n");
    FUNC_0("    -add <src path> <dst path>\n"
           "            Copies an external file or directory into the image.\n");
    FUNC_0("    -extract <src path> <dst path>\n"
           "            Copies a file or directory from the image into an external file\n"
           "            or directory.\n");
    FUNC_0("    -move <src path> <new path>\n"
           "            Moves/renames a file or directory.\n");
    FUNC_0("    -copy <src path> <new path>\n"
           "            Copies a file or directory.\n");
    FUNC_0("    -mkdir <src path> <new path>\n"
           "            Creates a directory.\n");
    FUNC_0("    -rmdir <src path> <new path>\n"
           "            Creates a directory.\n");
    FUNC_0("    -list [<pattern>]\n"
           "            Lists files a directory (defaults to root).\n");
}
