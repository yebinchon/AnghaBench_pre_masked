
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mmd_read ) (struct gsw_mt753x*,int ,int ,int ) ;int (* mmd_write ) (struct gsw_mt753x*,int ,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;


 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct gsw_mt753x*,int ) ;
 int FUNC_2 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_3 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_4 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_5 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_6 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_7 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_8 (struct gsw_mt753x*,int ,int ,int ) ;
 int FUNC_9 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_10 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_11 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_12 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_13 (struct gsw_mt753x*,int ,int ,int ,int) ;
 int FUNC_14 (struct gsw_mt753x*,int ,int ,int ) ;
 int FUNC_15 (struct gsw_mt753x*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_16(struct gsw_mt753x *VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_1(VAR_11, VAR_0);

 switch ((VAR_12 & VAR_9) >> VAR_10) {
 case 129:

  VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_2, 0x608);


  VAR_13 = VAR_11->mmd_read(VAR_11, 0, VAR_1,
         VAR_7);
  VAR_13 &= ~(VAR_8);
  VAR_13 |= FUNC_0(3);
  VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_7, VAR_13);


  VAR_11->mmd_write(VAR_11, 0, VAR_1,
          VAR_3, 0x1009);


  VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_4, 0x7c6);


  VAR_11->mmd_write(VAR_11, 0, VAR_1,
          VAR_5, 0xa8be);

  break;
 case 128:

  VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_2, 0x608);


  VAR_13 = VAR_11->mmd_read(VAR_11, 0, VAR_1,
         VAR_7);
  VAR_13 &= ~(VAR_8);
  VAR_13 |= FUNC_0(3);
  VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_7, VAR_13);


  VAR_11->mmd_write(VAR_11, 0, VAR_1,
          VAR_3, 0x1018);


  VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_4, 0xc676);


  VAR_11->mmd_write(VAR_11, 0, VAR_1,
          VAR_5, 0xd8be);
  break;
 }


 VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_6, 0x10);


 VAR_11->mmd_write(VAR_11, 0, VAR_1, VAR_6, 0x14);
}
