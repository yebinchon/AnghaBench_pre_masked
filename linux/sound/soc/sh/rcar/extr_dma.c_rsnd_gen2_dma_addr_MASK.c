
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_16__ {int member_1; int member_0; } ;
struct TYPE_15__ {int member_1; int member_0; } ;
struct TYPE_14__ {int member_1; int member_0; } ;
struct TYPE_13__ {TYPE_8__ member_2; TYPE_7__ member_1; TYPE_6__ member_0; } ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_11__ {int member_1; int member_0; } ;
struct TYPE_10__ {int member_1; int member_0; } ;
struct TYPE_9__ {TYPE_4__ member_2; TYPE_3__ member_1; TYPE_2__ member_0; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (struct device*,char*,...) ;
 int FUNC_13 (struct rsnd_priv*,int ) ;
 int FUNC_14 (struct rsnd_dai_stream*) ;
 int FUNC_15 (struct rsnd_dai_stream*) ;
 int FUNC_16 (struct rsnd_dai_stream*) ;
 int FUNC_17 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_18 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_19 (struct rsnd_dai_stream*) ;
 struct rsnd_priv* FUNC_20 (struct rsnd_dai_stream*) ;
 int FUNC_21 (struct rsnd_mod*) ;
 int FUNC_22 (struct rsnd_mod*) ;
 struct device* FUNC_23 (struct rsnd_priv*) ;
 scalar_t__ FUNC_24 (struct rsnd_dai_stream*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static dma_addr_t
FUNC_25(struct rsnd_dai_stream *VAR_4,
     struct rsnd_mod *VAR_5,
     int VAR_6, int VAR_7)
{
 struct rsnd_priv *VAR_8 = FUNC_20(VAR_4);
 struct device *VAR_9 = FUNC_23(VAR_8);
 phys_addr_t VAR_10 = FUNC_13(VAR_8, VAR_1);
 phys_addr_t VAR_11 = FUNC_13(VAR_8, VAR_0);
 int VAR_12 = !!(FUNC_18(VAR_4) == VAR_5) ||
       !!(FUNC_19(VAR_4) == VAR_5);
 int VAR_13 = !!FUNC_17(VAR_4);
 int VAR_14 = !!FUNC_15(VAR_4) ||
        !!FUNC_16(VAR_4) ||
        !!FUNC_14(VAR_4);
 int VAR_15 = FUNC_21(VAR_5);
 int VAR_16 = FUNC_22(FUNC_19(VAR_4));
 struct dma_addr {
  dma_addr_t out_addr;
  dma_addr_t in_addr;
 } VAR_17[3][2][3] = {


  {{{ 0, 0 },
    { FUNC_4(VAR_2, VAR_15), FUNC_3(VAR_2, VAR_15) },
    { FUNC_0(VAR_2, VAR_15), FUNC_3(VAR_2, VAR_15) } },

   {{ 0, 0, },
    { FUNC_5(VAR_2, VAR_15), FUNC_2(VAR_2, VAR_15) },
    { FUNC_1(VAR_2, VAR_15), FUNC_2(VAR_2, VAR_15) } }
  },


  {{{ FUNC_11(VAR_3, VAR_15), 0 },
    { FUNC_9(VAR_3, VAR_15, VAR_16), 0 },
    { FUNC_9(VAR_3, VAR_15, VAR_16), 0 } },

   {{ 0, FUNC_10(VAR_3, VAR_15) },
    { 0, FUNC_7(VAR_3, VAR_15, VAR_16) },
    { 0, FUNC_7(VAR_3, VAR_15, VAR_16) } }
  },


  {{{ FUNC_8(VAR_3, VAR_15, VAR_16), 0 },
    { FUNC_9(VAR_3, VAR_15, VAR_16), 0 },
    { FUNC_9(VAR_3, VAR_15, VAR_16), 0 } },

   {{ 0, FUNC_6(VAR_3, VAR_15, VAR_16) },
    { 0, FUNC_7(VAR_3, VAR_15, VAR_16) },
    { 0, FUNC_7(VAR_3, VAR_15, VAR_16) } } },
 };







 if ((VAR_15 == 9) && (VAR_16 >= 4))
  FUNC_12(VAR_9, "This driver doesn't support SSI%d-%d, so far",
   VAR_15, VAR_16);


 if (VAR_14 && !VAR_13)
  FUNC_12(VAR_9, "DVC is selected without SRC\n");


 if (VAR_12 && FUNC_24(VAR_4))
  VAR_12++;

 return (VAR_7) ?
  VAR_17[VAR_12][VAR_6][VAR_13 + VAR_14].out_addr :
  VAR_17[VAR_12][VAR_6][VAR_13 + VAR_14].in_addr;
}
