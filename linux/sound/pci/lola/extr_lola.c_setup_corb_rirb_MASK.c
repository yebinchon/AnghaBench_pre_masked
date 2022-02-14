
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ cmds; scalar_t__ rp; scalar_t__ addr; int * buf; } ;
struct TYPE_4__ {scalar_t__ wp; scalar_t__ addr; int * buf; } ;
struct TYPE_6__ {scalar_t__ area; scalar_t__ addr; } ;
struct lola {TYPE_2__ rirb; TYPE_1__ corb; TYPE_3__ rb; int pci; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long VAR_22 ;
 unsigned char FUNC_0 (struct lola*,int ,int ) ;
 int FUNC_1 (struct lola*,int ,int ,unsigned char) ;
 int FUNC_2 (struct lola*,int ,int ,int ) ;
 int FUNC_3 (struct lola*,int ,int ,int) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct lola *VAR_23)
{
 int VAR_24;
 unsigned char VAR_25;
 unsigned long VAR_26;

 VAR_24 = FUNC_6(VAR_21,
      FUNC_7(VAR_23->pci),
      VAR_13, &VAR_23->rb);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_23->corb.addr = VAR_23->rb.addr;
 VAR_23->corb.buf = (__le32 *)VAR_23->rb.area;
 VAR_23->rirb.addr = VAR_23->rb.addr + 2048;
 VAR_23->rirb.buf = (__le32 *)(VAR_23->rb.area + 2048);


 FUNC_1(VAR_23, VAR_0, VAR_15, 0);
 FUNC_1(VAR_23, VAR_0, VAR_1, 0);

 VAR_26 = VAR_22 + FUNC_4(200);
 do {
  if (!FUNC_0(VAR_23, VAR_0, VAR_15) &&
      !FUNC_0(VAR_23, VAR_0, VAR_1))
   break;
  FUNC_5(1);
 } while (FUNC_8(VAR_22, VAR_26));


 FUNC_2(VAR_23, VAR_0, VAR_2, (u32)VAR_23->corb.addr);
 FUNC_2(VAR_23, VAR_0, VAR_6, FUNC_9(VAR_23->corb.addr));

 FUNC_1(VAR_23, VAR_0, VAR_4, 0x02);

 FUNC_3(VAR_23, VAR_0, VAR_7, 0);

 FUNC_3(VAR_23, VAR_0, VAR_3, VAR_11);

 FUNC_1(VAR_23, VAR_0, VAR_1, VAR_9);

 VAR_25 = FUNC_0(VAR_23, VAR_0, VAR_5) & VAR_8;
 if (VAR_25)
  FUNC_1(VAR_23, VAR_0, VAR_5, VAR_25);
 VAR_23->corb.wp = 0;


 FUNC_2(VAR_23, VAR_0, VAR_16, (u32)VAR_23->rirb.addr);
 FUNC_2(VAR_23, VAR_0, VAR_19, FUNC_9(VAR_23->rirb.addr));

 FUNC_1(VAR_23, VAR_0, VAR_17, 0x02);

 FUNC_3(VAR_23, VAR_0, VAR_20, VAR_11);

 FUNC_3(VAR_23, VAR_0, VAR_14, 1);

 FUNC_1(VAR_23, VAR_0, VAR_15, VAR_9 | VAR_10);

 VAR_25 = FUNC_0(VAR_23, VAR_0, VAR_18) & VAR_12;
 if (VAR_25)
  FUNC_1(VAR_23, VAR_0, VAR_18, VAR_25);
 VAR_23->rirb.rp = VAR_23->rirb.cmds = 0;

 return 0;
}
