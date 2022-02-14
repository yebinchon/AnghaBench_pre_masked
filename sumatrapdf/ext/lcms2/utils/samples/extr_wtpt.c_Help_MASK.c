
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_2(void)
{
       FUNC_1(VAR_2, "little CMS ICC white point utility - v3 [LittleCMS %2.2f]\n", VAR_0 / 1000.0);

       FUNC_1(VAR_2, "usage: wtpt [flags] [<ICC profile>]\n\n");

       FUNC_1(VAR_2, "flags:\n\n");

       FUNC_1(VAR_2, "%cl - CIE Lab\n", VAR_1);
       FUNC_1(VAR_2, "%cc - CIE LCh\n", VAR_1);
       FUNC_1(VAR_2, "%cx - Don't show XYZ\n", VAR_1);

       FUNC_1(VAR_2, "\nIf no parameters are given, then this program will\n");
       FUNC_1(VAR_2, "ask for XYZ value of media white. If parameter given, it must be\n");
       FUNC_1(VAR_2, "the profile to inspect.\n\n");

       FUNC_1(VAR_2, "This program is intended to be a demo of the little cms\n"
              "engine. Both lcms and this program are freeware. You can\n"
              "obtain both in source code at http://www.littlecms.com\n"
              "For suggestions, comments, bug reports etc. send mail to\n"
              "info@littlecms.com\n\n");
       FUNC_0(0);
}
