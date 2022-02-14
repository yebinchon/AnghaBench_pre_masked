
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ invert; } ;
typedef TYPE_1__ pdfapp_t ;
struct TYPE_10__ {int panx; int pany; int winh; int winw; int selr; scalar_t__ iscopying; scalar_t__ image; int ctx; } ;
struct TYPE_9__ {int pixel; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 unsigned char* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int ,int ,int,int,unsigned char*,int ,int ,int,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_14(pdfapp_t *VAR_6)
{
 if (VAR_0.image)
 {
  int VAR_7 = FUNC_8(VAR_0.ctx, VAR_0.image);
  int VAR_8 = FUNC_6(VAR_0.ctx, VAR_0.image);
  int VAR_9 = FUNC_5(VAR_0.ctx, VAR_0.image);
  unsigned char *VAR_10 = FUNC_7(VAR_0.ctx, VAR_0.image);
  int VAR_11 = VAR_0.panx;
  int VAR_12 = VAR_0.pany;
  int VAR_13 = VAR_0.panx + VAR_7;
  int VAR_14 = VAR_0.pany + VAR_8;

  if (VAR_6->invert)
   FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_3, FUNC_1(VAR_3)));
  else
   FUNC_2(VAR_3, VAR_4, VAR_2.pixel);
  FUNC_3(0, 0, VAR_11, VAR_0.winh);
  FUNC_3(VAR_13, 0, VAR_0.winw - VAR_13, VAR_0.winh);
  FUNC_3(0, 0, VAR_0.winw, VAR_12);
  FUNC_3(0, VAR_14, VAR_0.winw, VAR_0.winh - VAR_14);

  if (VAR_0.iscopying || VAR_1)
  {
   FUNC_10(&VAR_0, VAR_0.selr);
   VAR_1 = 1;
  }

  FUNC_11(&VAR_0);

  if (VAR_9 == 4)
   FUNC_13(VAR_5, VAR_4,
    VAR_11, VAR_12,
    VAR_10,
    0, 0,
    VAR_7,
    VAR_8,
    VAR_7 * VAR_9);
  else if (VAR_9 == 2)
  {
   int VAR_15 = VAR_7*VAR_8;
   unsigned char *VAR_16 = FUNC_9(VAR_15*4);
   if (VAR_16)
   {
    unsigned char *VAR_17 = VAR_10;
    unsigned char *VAR_18 = VAR_16;
    for (; VAR_15 > 0 ; VAR_15--)
    {
     VAR_18[2] = VAR_18[1] = VAR_18[0] = *VAR_17++;
     VAR_18[3] = *VAR_17++;
     VAR_18 += 4;
    }
    FUNC_13(VAR_5, VAR_4,
     VAR_11, VAR_12,
     VAR_16,
     0, 0,
     VAR_7,
     VAR_8,
     VAR_7 * 4);
    FUNC_4(VAR_16);
   }
  }

  FUNC_11(&VAR_0);

  if (VAR_0.iscopying || VAR_1)
  {
   FUNC_10(&VAR_0, VAR_0.selr);
   VAR_1 = 1;
  }
 }
 else
 {
  FUNC_2(VAR_3, VAR_4, VAR_2.pixel);
  FUNC_3(0, 0, VAR_0.winw, VAR_0.winh);
 }

 FUNC_12(VAR_6);
}
