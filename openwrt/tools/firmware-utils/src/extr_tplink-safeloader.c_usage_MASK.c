
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1) {
 FUNC_0(VAR_0,
  "Usage: %s [OPTIONS...]\n"
  "\n"
  "Options:\n"
  "  -h              show this help\n"
  "\n"
  "Create a new image:\n"
  "  -B <board>      create image for the board specified with <board>\n"
  "  -k <file>       read kernel image from the file <file>\n"
  "  -r <file>       read rootfs image from the file <file>\n"
  "  -o <file>       write output to the file <file>\n"
  "  -V <rev>        sets the revision number to <rev>\n"
  "  -j              add jffs2 end-of-filesystem markers\n"
  "  -S              create sysupgrade instead of factory image\n"
  "Extract an old image:\n"
  "  -x <file>       extract all oem firmware partition\n"
  "  -d <dir>        destination to extract the firmware partition\n"
  "  -z <file>       convert an oem firmware into a sysupgade file. Use -o for output file\n",
  VAR_1
 );
}
