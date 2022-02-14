
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {scalar_t__ method; } ;
struct TYPE_5__ {TYPE_1__ strf; } ;
typedef TYPE_2__ pdf_crypt ;
typedef int fz_context ;
typedef int fz_arc4 ;
typedef int fz_aes ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int * FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *,int) ;
 scalar_t__ FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;

__attribute__((used)) static void
FUNC_18(fz_context *VAR_5, pdf_crypt *VAR_6, pdf_obj *VAR_7, unsigned char *VAR_8, int VAR_9)
{
 unsigned char *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_13(VAR_5, VAR_7))
  return;

 if (FUNC_14(VAR_5, VAR_7))
 {
  VAR_10 = (unsigned char *)FUNC_16(VAR_5, VAR_7);
  VAR_12 = FUNC_17(VAR_5, VAR_7);

  if (VAR_6->strf.method == VAR_4)
  {
   fz_arc4 VAR_13;
   FUNC_3(&VAR_13, VAR_8, VAR_9);
   FUNC_2(&VAR_13, VAR_10, VAR_10, VAR_12);
  }

  if (VAR_6->strf.method == VAR_2 || VAR_6->strf.method == VAR_3)
  {
   if (VAR_12 == 0)
   {

   }
   else if (VAR_12 & 15 || VAR_12 < 32)
    FUNC_5(VAR_5, "invalid string length for aes encryption");
   else
   {
    unsigned char VAR_14[16];
    fz_aes VAR_15;
    FUNC_6(VAR_14, VAR_10, 16);
    if (FUNC_1(&VAR_15, VAR_8, VAR_9 * 8))
     FUNC_4(VAR_5, VAR_1, "AES key init failed (keylen=%d)", VAR_9 * 8);
    FUNC_0(&VAR_15, VAR_0, VAR_12 - 16, VAR_14, VAR_10 + 16, VAR_10);

    if (VAR_10[VAR_12 - 17] < 1 || VAR_10[VAR_12 - 17] > 16)
     FUNC_5(VAR_5, "aes padding out of range");
    else
     FUNC_15(VAR_5, VAR_7, VAR_12 - 16 - VAR_10[VAR_12 - 17]);
   }
  }
 }

 else if (FUNC_11(VAR_5, VAR_7))
 {
  VAR_12 = FUNC_8(VAR_5, VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  {
   FUNC_18(VAR_5, VAR_6, FUNC_7(VAR_5, VAR_7, VAR_11), VAR_8, VAR_9);
  }
 }

 else if (FUNC_12(VAR_5, VAR_7))
 {
  VAR_12 = FUNC_10(VAR_5, VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  {
   FUNC_18(VAR_5, VAR_6, FUNC_9(VAR_5, VAR_7, VAR_11), VAR_8, VAR_9);
  }
 }
}
