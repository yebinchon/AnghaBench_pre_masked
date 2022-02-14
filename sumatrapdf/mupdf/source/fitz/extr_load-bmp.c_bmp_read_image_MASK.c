
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int rbits; int gbits; int bbits; int abits; scalar_t__ width; scalar_t__ height; int compression; int bitcount; int offset; int ashift; int amask; int bshift; int bmask; int gshift; int gmask; int rshift; int rmask; scalar_t__ extramasks; int filesize; } ;
typedef int fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_0 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char* FUNC_1 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char* FUNC_2 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char* FUNC_3 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char* FUNC_4 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char* FUNC_5 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char* FUNC_6 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 int * FUNC_7 (int *,unsigned char const*,int) ;
 int * FUNC_8 (int *,unsigned char const*,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,int ,char*,...) ;
 int FUNC_11 (int ,int *,int*) ;
 int FUNC_12 (struct info*,int,int) ;
 int FUNC_13 (unsigned char const*) ;

__attribute__((used)) static fz_pixmap *
FUNC_14(fz_context *VAR_10, struct info *VAR_11, const unsigned char *VAR_12, size_t VAR_13, int VAR_14)
{
 const unsigned char *VAR_15 = VAR_12;
 const unsigned char *VAR_16 = VAR_12 + VAR_13;
 int VAR_17;

 FUNC_12(VAR_11, 0x00, sizeof (*VAR_11));

 VAR_12 = FUNC_6(VAR_10, VAR_11, VAR_12, VAR_16);

 VAR_11->filesize = FUNC_9(VAR_11->filesize, (int)VAR_13);

 if (VAR_16 - VAR_12 < 4)
  FUNC_10(VAR_10, VAR_8, "premature end in bitmap core header in bmp image");
 VAR_17 = FUNC_13(VAR_12 + 0);

 if (VAR_17 == 12)
  VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_12, VAR_16);
 else if (VAR_17 == 40 || VAR_17 == 52 || VAR_17 == 56 || VAR_17 == 108 || VAR_17 == 124)
 {
  VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_16);
  if (VAR_11->extramasks)
   VAR_12 = FUNC_5(VAR_10, VAR_11, VAR_12, VAR_16);
 }
 else if (VAR_17 == 16 || VAR_17 == 64)
  VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_12, VAR_16);
 else
  FUNC_10(VAR_10, VAR_8, "invalid header size (%d) in bmp image", VAR_17);

 FUNC_11(VAR_11->rmask, &VAR_11->rshift, &VAR_11->rbits);
 FUNC_11(VAR_11->gmask, &VAR_11->gshift, &VAR_11->gbits);
 FUNC_11(VAR_11->bmask, &VAR_11->bshift, &VAR_11->bbits);
 FUNC_11(VAR_11->amask, &VAR_11->ashift, &VAR_11->abits);

 if (VAR_11->width <= 0 || VAR_11->width > VAR_9 || VAR_11->height <= 0 || VAR_11->height > VAR_9)
  FUNC_10(VAR_10, VAR_8, "dimensions (%d x %d) out of range in bmp image",
    VAR_11->width, VAR_11->height);
 if (VAR_11->compression != VAR_4 && VAR_11->compression != VAR_7 &&
   VAR_11->compression != VAR_6 && VAR_11->compression != VAR_1 &&
   VAR_11->compression != VAR_2 && VAR_11->compression != VAR_3 &&
   VAR_11->compression != VAR_0 && VAR_11->compression != VAR_5)
  FUNC_10(VAR_10, VAR_8, "unsupported compression method (%d) in bmp image", VAR_11->compression);
 if ((VAR_11->compression == VAR_4 && VAR_11->bitcount != 1 &&
   VAR_11->bitcount != 2 && VAR_11->bitcount != 4 &&
   VAR_11->bitcount != 8 && VAR_11->bitcount != 16 &&
   VAR_11->bitcount != 24 && VAR_11->bitcount != 32) ||
   (VAR_11->compression == VAR_7 && VAR_11->bitcount != 8) ||
   (VAR_11->compression == VAR_6 && VAR_11->bitcount != 4) ||
   (VAR_11->compression == VAR_1 && VAR_11->bitcount != 16 && VAR_11->bitcount != 32) ||
   (VAR_11->compression == VAR_2 && VAR_11->bitcount != 0) ||
   (VAR_11->compression == VAR_3 && VAR_11->bitcount != 0) ||
   (VAR_11->compression == VAR_0 && VAR_11->bitcount != 16 && VAR_11->bitcount != 32) ||
   (VAR_11->compression == VAR_5 && VAR_11->bitcount != 24))
  FUNC_10(VAR_10, VAR_8, "invalid bits per pixel (%d) for compression (%d) in bmp image",
    VAR_11->bitcount, VAR_11->compression);
 if (VAR_11->rbits < 0 || VAR_11->rbits > VAR_11->bitcount)
  FUNC_10(VAR_10, VAR_8, "unsupported %d bit red mask in bmp image", VAR_11->rbits);
 if (VAR_11->gbits < 0 || VAR_11->gbits > VAR_11->bitcount)
  FUNC_10(VAR_10, VAR_8, "unsupported %d bit green mask in bmp image", VAR_11->gbits);
 if (VAR_11->bbits < 0 || VAR_11->bbits > VAR_11->bitcount)
  FUNC_10(VAR_10, VAR_8, "unsupported %d bit blue mask in bmp image", VAR_11->bbits);
 if (VAR_11->abits < 0 || VAR_11->abits > VAR_11->bitcount)
  FUNC_10(VAR_10, VAR_8, "unsupported %d bit alpha mask in bmp image", VAR_11->abits);

 if (VAR_14)
  return ((void*)0);

 if (VAR_11->compression == VAR_2)
 {
  if (VAR_12 - VAR_15 < VAR_11->offset)
   VAR_12 = VAR_15 + VAR_11->offset;
  return FUNC_7(VAR_10, VAR_12, VAR_16 - VAR_12);
 }
 else if (VAR_11->compression == VAR_3)
 {
  if (VAR_12 - VAR_15 < VAR_11->offset)
   VAR_12 = VAR_15 + VAR_11->offset;
  return FUNC_8(VAR_10, VAR_12, VAR_16 - VAR_12);
 }
 else
 {
  const unsigned char *VAR_18 = VAR_15 + VAR_11->offset;
  if (VAR_16 - VAR_15 < VAR_11->offset)
   VAR_18 = VAR_16;
  VAR_12 = FUNC_4(VAR_10, VAR_11, VAR_12, VAR_18);

  if (VAR_12 - VAR_15 < VAR_11->offset)
   VAR_12 = VAR_15 + VAR_11->offset;
  return FUNC_0(VAR_10, VAR_11, VAR_12, VAR_16);
 }
}
