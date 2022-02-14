
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (int VAR_2, unsigned int VAR_3)
{
  switch( VAR_1 ) {
    case 12:
      VAR_3 &= 0x0fff;
      if (((VAR_2 * 3) & 0x1) == 0)
 {
   VAR_0[3 * VAR_2 / 2] = (unsigned char) (VAR_3 & 0x00ff);
   VAR_0[(3 * VAR_2 / 2) + 1] = (unsigned char) ((VAR_0[(3 * VAR_2 / 2) + 1] & 0x00f0)
       | ((VAR_3 & 0x0f00) >> 8));
 }
      else
 {
   VAR_0[3 * VAR_2 / 2] = (unsigned char) ((VAR_0[3 * VAR_2 / 2] & 0x000f) | ((VAR_3 & 0x000f) << 4));
   VAR_0[(3 * VAR_2 / 2) + 1] = (unsigned char) ((VAR_3 & 0x0ff0) >> 4);
 }
      break;

    case 16:
      VAR_3 &= 0xffff;
      VAR_0[2 * VAR_2] = (unsigned char) (VAR_3 & 0x00ff);
      VAR_0[(2 * VAR_2) + 1] = (unsigned char) (VAR_3 >> 8);
      break;

    case 32:
      VAR_3 &= 0xfffffff;
      VAR_0[4 * VAR_2] = (unsigned char) (VAR_3 & 0x000000ff);
      VAR_0[(4 * VAR_2) + 1] = (unsigned char) ((VAR_3 & 0x0000ff00) >> 8);
      VAR_0[(4 * VAR_2) + 2] = (unsigned char) ((VAR_3 & 0x00ff0000) >> 16);
      VAR_0[(4 * VAR_2) + 3] = (unsigned char) ((VAR_3 & 0xff000000) >> 24);
      break;

    default:
      FUNC_0("Bad FAT size (not 12, 16, or 32)");
  }
}
