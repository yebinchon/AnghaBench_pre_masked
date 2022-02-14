
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int ** VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char) ;

__attribute__((used)) static void FUNC_5(void)
{
    unsigned int VAR_4, VAR_5, VAR_6;
    unsigned char VAR_7;


    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
     for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  if (FUNC_1(VAR_1[VAR_4][VAR_5], VAR_0[VAR_6]))
      break;
     if (VAR_6 == 16)
  FUNC_0("Image must use the 16 console colors only\n"
      "Use ppmquant(1) -map clut_vga16.ppm to reduce the number "
      "of colors\n");
 }


    FUNC_3();


    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
     for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  if (FUNC_1(VAR_1[VAR_4][VAR_5], VAR_0[VAR_6]))
      break;
     VAR_7 = VAR_6<<4;
     if (++VAR_5 < VAR_3) {
  for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
      if (FUNC_1(VAR_1[VAR_4][VAR_5], VAR_0[VAR_6]))
   break;
  VAR_7 |= VAR_6;
     }
     FUNC_4(VAR_7);
 }


    FUNC_2();
}
