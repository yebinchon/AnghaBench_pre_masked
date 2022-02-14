
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int old ;
typedef int mpg123_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(mpg123_handle *VAR_2, char *VAR_3)
{
 size_t VAR_4;
 char *VAR_5[] =
 {
  "COM", "TAL", "TBP", "TCM", "TCO", "TCR", "TDA", "TDY", "TEN", "TFT",
  "TIM", "TKE", "TLA", "TLE", "TMT", "TOA", "TOF", "TOL", "TOR", "TOT",
  "TP1", "TP2", "TP3", "TP4", "TPA", "TPB", "TRC", "TDA", "TRK", "TSI",
  "TSS", "TT1", "TT2", "TT3", "TXT", "TXX", "TYE"
 };
 char *VAR_6[] =
 {
  "COMM", "TALB", "TBPM", "TCOM", "TCON", "TCOP", "TDAT", "TDLY", "TENC", "TFLT",
  "TIME", "TKEY", "TLAN", "TLEN", "TMED", "TOPE", "TOFN", "TOLY", "TORY", "TOAL",
  "TPE1", "TPE2", "TPE3", "TPE4", "TPOS", "TPUB", "TSRC", "TRDA", "TRCK", "TSIZ",
  "TSSE", "TIT1", "TIT2", "TIT3", "TEXT", "TXXX", "TYER"
 };
 for(VAR_4=0; VAR_4<sizeof(VAR_5)/sizeof(char*); ++VAR_4)
 {
  if(!FUNC_2(VAR_3, VAR_5[VAR_4], 3))
  {
   FUNC_1(VAR_3, VAR_6[VAR_4], 4);
   if(VAR_0) FUNC_0(VAR_1, "Translated ID3v2.2 frame %s to %s\n", VAR_5[VAR_4], VAR_6[VAR_4]);
   return 0;
  }
 }
 if(VAR_0) FUNC_0(VAR_1, "Ignoring untranslated ID3v2.2 frame %c%c%c\n", VAR_3[0], VAR_3[1], VAR_3[2]);
 return -1;
}
