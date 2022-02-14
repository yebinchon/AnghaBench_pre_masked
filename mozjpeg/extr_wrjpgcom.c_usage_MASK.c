
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)

{
  FUNC_1(VAR_3, "wrjpgcom inserts a textual comment in a JPEG file.\n");
  FUNC_1(VAR_3, "You can add to or replace any existing comment(s).\n");

  FUNC_1(VAR_3, "Usage: %s [switches] ", VAR_2);



  FUNC_1(VAR_3, "[inputfile]\n");


  FUNC_1(VAR_3, "Switches (names may be abbreviated):\n");
  FUNC_1(VAR_3, "  -replace         Delete any existing comments\n");
  FUNC_1(VAR_3, "  -comment \"text\"  Insert comment with given text\n");
  FUNC_1(VAR_3, "  -cfile name      Read comment from named file\n");
  FUNC_1(VAR_3, "Notice that you must put quotes around the comment text\n");
  FUNC_1(VAR_3, "when you use -comment.\n");
  FUNC_1(VAR_3, "If you do not give either -comment or -cfile on the command line,\n");
  FUNC_1(VAR_3, "then the comment text is read from standard input.\n");
  FUNC_1(VAR_3, "It can be multiple lines, up to %u characters total.\n",
          (unsigned int)VAR_1);

  FUNC_1(VAR_3, "You must specify an input JPEG file name when supplying\n");
  FUNC_1(VAR_3, "comment text from standard input.\n");


  FUNC_0(VAR_0);
}
