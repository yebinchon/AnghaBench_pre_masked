
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_1(VAR_1,
  "usage: mutool create [-o output.pdf] [-O options] page.txt [page2.txt ...]\n"
  "\t-o -\tname of PDF file to create\n"
  "\t-O -\tcomma separated list of output options\n"
  "\tpage.txt\tcontent stream with annotations for creating resources\n\n"
  "Content stream special commands:\n"
  "\t%%%%MediaBox LLX LLY URX URY\n"
  "\t%%%%Rotate Angle\n"
  "\t%%%%Font Name Filename (or base 14 font name)\n"
  "\t%%%%CJKFont Name Language WMode Style (Language=zh-Hant|zh-Hans|ja|ko, WMode=H|V, Style=serif|sans)\n"
  "\t%%%%Image Name Filename\n\n"
  );
 FUNC_2(VAR_0, VAR_1);
 FUNC_0(1);
}
