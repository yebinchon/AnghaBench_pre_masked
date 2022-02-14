
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ method; } ;
struct TYPE_5__ {TYPE_4__ strf; } ;
typedef TYPE_1__ pdf_crypt ;
typedef int fz_context ;
typedef int fz_arc4 ;
typedef int fz_aes ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,unsigned char const*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *,int ,char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;
 int FUNC_7 (unsigned char*,int,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_4__*,int,int,unsigned char*,int) ;

void FUNC_9(fz_context *VAR_5, pdf_crypt *VAR_6, int VAR_7, int VAR_8, void (*VAR_9)(fz_context *VAR_10, void *, const unsigned char *, int), void *VAR_11, const unsigned char *VAR_12, int VAR_13)
{
 unsigned char VAR_14[256];
 unsigned char VAR_15[32];
 int VAR_16;

 if (VAR_6 == ((void*)0))
 {
  VAR_9(VAR_5, VAR_11, VAR_12, VAR_13);
  return;
 }

 VAR_16 = FUNC_8(VAR_6, &VAR_6->strf, VAR_7, VAR_8, VAR_15, 32);

 if (VAR_6->strf.method == VAR_4)
 {
  fz_arc4 VAR_17;
  FUNC_3(&VAR_17, VAR_15, VAR_16);
  while (VAR_13 > 0)
  {
   int VAR_18 = VAR_13;
   if (VAR_18 > (int)sizeof(VAR_14))
    VAR_18 = sizeof(VAR_14);
   FUNC_2(&VAR_17, VAR_14, VAR_12, VAR_18);
   VAR_9(VAR_5, VAR_11, VAR_14, VAR_18);
   VAR_12 += VAR_18;
   VAR_13 -= VAR_18;
  }
  return;
 }

 if (VAR_6->strf.method == VAR_2 || VAR_6->strf.method == VAR_3)
 {
  fz_aes VAR_19;
  unsigned char VAR_20[16];


  if (VAR_13 == 0)
   return;

  if (FUNC_1(&VAR_19, VAR_15, VAR_16 * 8))
   FUNC_5(VAR_5, VAR_1, "AES key init failed (keylen=%d)", VAR_16 * 8);

  FUNC_4(VAR_5, VAR_20, 16);
  VAR_9(VAR_5, VAR_11, VAR_20, 16);

  while (VAR_13 > 0)
  {
   int VAR_21 = VAR_13;
   if (VAR_21 > 16)
    VAR_21 = 16;
   FUNC_6(VAR_14, VAR_12, VAR_21);
   if (VAR_21 != 16)
    FUNC_7(&VAR_14[VAR_21], 16-VAR_21, 16-VAR_21);
   FUNC_0(&VAR_19, VAR_0, 16, VAR_20, VAR_14, VAR_14+16);
   VAR_9(VAR_5, VAR_11, VAR_14+16, 16);
   VAR_12 += 16;
   VAR_13 -= 16;
  }
  if (VAR_13 == 0) {
   FUNC_7(VAR_14, 16, 16);
   FUNC_0(&VAR_19, VAR_0, 16, VAR_20, VAR_14, VAR_14+16);
   VAR_9(VAR_5, VAR_11, VAR_14+16, 16);
  }
  return;
 }


 VAR_9(VAR_5, VAR_11, VAR_12, VAR_13);
}
