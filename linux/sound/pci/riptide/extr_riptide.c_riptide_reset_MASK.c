
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {int * retlongs; } ;
typedef int u32 ;
struct snd_riptide {int dummy; } ;
struct cmdif {int cmdtimemin; int is_reset; int hwport; scalar_t__ errcnt; scalar_t__ cmdtimemax; scalar_t__ cmdtime; scalar_t__ cmdcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union cmdret VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct cmdif*,int ) ;
 int FUNC_1 (struct cmdif*,int ) ;
 int FUNC_2 (struct cmdif*) ;
 int FUNC_3 (struct cmdif*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct cmdif*,int ) ;
 int FUNC_5 (struct cmdif*,int ,union cmdret*) ;
 int FUNC_6 (struct cmdif*,int ,int ) ;
 int FUNC_7 (struct cmdif*,int) ;
 int FUNC_8 (struct cmdif*,int ) ;
 int FUNC_9 (struct cmdif*,int ,int,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct cmdif*,int ,int ,int *,int *) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_13 (struct cmdif*,int,int,int) ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 (struct cmdif*,struct snd_riptide*) ;
 int FUNC_16 (struct cmdif*,int,int,int) ;

__attribute__((used)) static int FUNC_17(struct cmdif *VAR_29, struct snd_riptide *VAR_30)
{
 union cmdret VAR_31 = VAR_3;
 int VAR_32, VAR_33;

 if (!VAR_29)
  return -VAR_5;

 VAR_29->cmdcnt = 0;
 VAR_29->cmdtime = 0;
 VAR_29->cmdtimemax = 0;
 VAR_29->cmdtimemin = 0xffffffff;
 VAR_29->errcnt = 0;
 VAR_29->is_reset = 0;

 VAR_33 = VAR_23;
 do {
  VAR_32 = FUNC_15(VAR_29, VAR_30);
  if (VAR_32 < 0)
   return VAR_32;
 } while (!VAR_32 && --VAR_33);

 FUNC_6(VAR_29, 0, VAR_0);
 FUNC_5(VAR_29, VAR_0, &VAR_31);
 FUNC_14("AC97: 0x%x 0x%x\n", VAR_31.retlongs[0], VAR_31.retlongs[1]);

 FUNC_4(VAR_29, 0);
 FUNC_8(VAR_29, 0);
 FUNC_1(VAR_29, 0);
 FUNC_0(VAR_29, 0);
 FUNC_2(VAR_29);

 FUNC_16(VAR_29, 0x301F8, 1, 1);
 FUNC_16(VAR_29, 0x301F4, 1, 1);

 FUNC_3(VAR_29, VAR_17, 0, 0, VAR_18, VAR_19,
    VAR_21, VAR_20);
 FUNC_13(VAR_29, VAR_20, 0x7fff, 0x7fff);
 FUNC_12(VAR_29, VAR_2, VAR_25, ((void*)0), ((void*)0));

 FUNC_3(VAR_29, VAR_6, 0, 0, VAR_7, VAR_8, VAR_10,
    VAR_9);
 FUNC_13(VAR_29, VAR_9, 0x7fff, 0x7fff);
 FUNC_16(VAR_29, 0x30648 + VAR_9 * 4, 0x01, 0x00000005);
 FUNC_16(VAR_29, 0x301A8, 0x02, 0x00000002);
 FUNC_16(VAR_29, 0x30264, 0x08, 0xffffffff);
 FUNC_12(VAR_29, VAR_22, VAR_26, ((void*)0), ((void*)0));

 FUNC_9(VAR_29, VAR_12, 48000,
    ((u32) VAR_15 * 65536) / 48000,
    ((u32) VAR_15 * 65536) % 48000);
 FUNC_3(VAR_29, VAR_11, 0, 0, VAR_12, VAR_13, VAR_16,
    VAR_14);
 FUNC_7(VAR_29, 1);
 FUNC_12(VAR_29, VAR_1, VAR_24, ((void*)0), ((void*)0));
 FUNC_12(VAR_29, VAR_4, VAR_27, ((void*)0), ((void*)0));
 FUNC_12(VAR_29, VAR_4, VAR_28, ((void*)0), ((void*)0));

 FUNC_10(VAR_29->hwport);
 FUNC_11(VAR_29->hwport);
 FUNC_10(VAR_29->hwport);
 VAR_29->is_reset = 1;

 return 0;
}
