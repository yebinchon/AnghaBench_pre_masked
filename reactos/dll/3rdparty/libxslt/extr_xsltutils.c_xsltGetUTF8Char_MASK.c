
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const unsigned char *VAR_0, int *VAR_1) {
    unsigned int VAR_2;

    if (VAR_0 == ((void*)0))
 goto error;
    if (VAR_1 == ((void*)0))
 goto error;
    if (*VAR_1 < 1)
 goto error;

    VAR_2 = VAR_0[0];
    if (VAR_2 & 0x80) {
 if (*VAR_1 < 2)
     goto error;
 if ((VAR_0[1] & 0xc0) != 0x80)
     goto error;
 if ((VAR_2 & 0xe0) == 0xe0) {
     if (*VAR_1 < 3)
  goto error;
     if ((VAR_0[2] & 0xc0) != 0x80)
  goto error;
     if ((VAR_2 & 0xf0) == 0xf0) {
  if (*VAR_1 < 4)
      goto error;
  if ((VAR_2 & 0xf8) != 0xf0 || (VAR_0[3] & 0xc0) != 0x80)
      goto error;
  *VAR_1 = 4;

  VAR_2 = (VAR_0[0] & 0x7) << 18;
  VAR_2 |= (VAR_0[1] & 0x3f) << 12;
  VAR_2 |= (VAR_0[2] & 0x3f) << 6;
  VAR_2 |= VAR_0[3] & 0x3f;
     } else {

  *VAR_1 = 3;
  VAR_2 = (VAR_0[0] & 0xf) << 12;
  VAR_2 |= (VAR_0[1] & 0x3f) << 6;
  VAR_2 |= VAR_0[2] & 0x3f;
     }
 } else {

     *VAR_1 = 2;
     VAR_2 = (VAR_0[0] & 0x1f) << 6;
     VAR_2 |= VAR_0[1] & 0x3f;
 }
    } else {

 *VAR_1 = 1;
    }
    return(VAR_2);

error:
    if (VAR_1 != ((void*)0))
 *VAR_1 = 0;
    return(-1);
}
