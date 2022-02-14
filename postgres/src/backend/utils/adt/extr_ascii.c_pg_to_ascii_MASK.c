
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(unsigned char *VAR_8, unsigned char *VAR_9, unsigned char *VAR_10, int VAR_11)
{
 unsigned char *VAR_12;
 const unsigned char *VAR_13;
 int VAR_14;







 if (VAR_11 == VAR_2)
 {



  VAR_13 = (const unsigned char *) "  cL Y  \"Ca  -R     'u .,      ?AAAAAAACEEEEIIII NOOOOOxOUUUUYTBaaaaaaaceeeeiiii nooooo/ouuuuyty";
  VAR_14 = 160;
 }
 else if (VAR_11 == VAR_3)
 {



  VAR_13 = (const unsigned char *) " A L LS \"SSTZ-ZZ a,l'ls ,sstz\"zzRAAAALCCCEEEEIIDDNNOOOOxRUUUUYTBraaaalccceeeeiiddnnoooo/ruuuuyt.";
  VAR_14 = 160;
 }
 else if (VAR_11 == VAR_4)
 {



  VAR_13 = (const unsigned char *) "  cL YS sCa  -R     Zu .z   EeY?AAAAAAACEEEEIIII NOOOOOxOUUUUYTBaaaaaaaceeeeiiii nooooo/ouuuuyty";
  VAR_14 = 160;
 }
 else if (VAR_11 == VAR_5)
 {



  VAR_13 = (const unsigned char *) "  ' \"    %S<STZZ `'\"\".--  s>stzz   L A  \"CS  -RZ  ,l'u .,as L\"lzRAAAALCCCEEEEIIDDNNOOOOxRUUUUYTBraaaalccceeeeiiddnnoooo/ruuuuyt ";
  VAR_14 = 128;
 }
 else
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("encoding conversion from %s to ASCII not supported",
      FUNC_3(VAR_11))));
  return;
 }




 for (VAR_12 = VAR_8; VAR_12 < VAR_9; VAR_12++)
 {
  if (*VAR_12 < 128)
   *VAR_10++ = *VAR_12;
  else if (*VAR_12 < VAR_14)
   *VAR_10++ = ' ';
  else
   *VAR_10++ = VAR_13[*VAR_12 - VAR_14];
 }
}
