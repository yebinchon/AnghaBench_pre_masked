
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char identsize; unsigned char colormaptype; unsigned char imagetype; unsigned char colormapstart; unsigned char colormaplength; unsigned char colormapbits; unsigned char xstart; unsigned char ystart; unsigned char width; unsigned char height; unsigned char bits; unsigned char alphabits; int fliph; int flipv; char* ident; } ;
typedef TYPE_1__ oTga ;
typedef int header ;
typedef int gdIOCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (char*,int,...) ;

int FUNC_5(gdIOCtx *VAR_3, oTga *VAR_4)
{

 unsigned char VAR_5[18];

 if (FUNC_0(VAR_5, sizeof(VAR_5), VAR_3) < 18) {
  FUNC_2("fail to read header");
  return -1;
 }

 VAR_4->identsize = VAR_5[0];
 VAR_4->colormaptype = VAR_5[1];
 VAR_4->imagetype = VAR_5[2];
 VAR_4->colormapstart = VAR_5[3] + (VAR_5[4] << 8);
 VAR_4->colormaplength = VAR_5[5] + (VAR_5[6] << 8);
 VAR_4->colormapbits = VAR_5[7];
 VAR_4->xstart = VAR_5[8] + (VAR_5[9] << 8);
 VAR_4->ystart = VAR_5[10] + (VAR_5[11] << 8);
 VAR_4->width = VAR_5[12] + (VAR_5[13] << 8);
 VAR_4->height = VAR_5[14] + (VAR_5[15] << 8);
 VAR_4->bits = VAR_5[16];
 VAR_4->alphabits = VAR_5[17] & 0x0f;
 VAR_4->fliph = (VAR_5[17] & 0x10) ? 1 : 0;
 VAR_4->flipv = (VAR_5[17] & 0x20) ? 0 : 1;
 if (!((VAR_4->bits == VAR_1 && VAR_4->alphabits == 0)
  || (VAR_4->bits == VAR_2 && VAR_4->alphabits == 8)))
 {
  FUNC_3(VAR_0, "gd-tga: %u bits per pixel with %u alpha bits not supported\n",
   VAR_4->bits, VAR_4->alphabits);
  return -1;
 }

 VAR_4->ident = ((void*)0);

 if (VAR_4->identsize > 0) {
  VAR_4->ident = (char *) FUNC_1(VAR_4->identsize * sizeof(char));
  if(VAR_4->ident == ((void*)0)) {
   return -1;
  }

  FUNC_0(VAR_4->ident, VAR_4->identsize, VAR_3);
 }

 return 1;
}
