
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mmd_read ) (struct gsw_mt753x*,int,int,int) ;int (* mii_write ) (struct gsw_mt753x*,int,int,int) ;int (* mmd_write ) (struct gsw_mt753x*,int,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_1 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_2 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_3 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_4 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_5 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_6 (struct gsw_mt753x*,int,int,int,int) ;
 int FUNC_7 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_8 (struct gsw_mt753x*,int,int,int,int) ;
 int FUNC_9 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_10 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_11 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_12 (struct gsw_mt753x*,int,int,int) ;
 int FUNC_13 (struct gsw_mt753x*,int,int,int) ;

__attribute__((used)) static void FUNC_14(struct gsw_mt753x *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;


 VAR_8 = VAR_5->mmd_read(VAR_5, VAR_6, VAR_3, VAR_4);
 VAR_8 &= ~VAR_0;
 VAR_5->mmd_write(VAR_5, VAR_6, VAR_3, VAR_4, VAR_8);


 VAR_5->mii_write(VAR_5, VAR_6, 0x1f, 0x52b5);
 VAR_5->mmd_write(VAR_5, VAR_6, 0x1e, 0x2d1, 0);
 VAR_7 = (1 << 15) | (0 << 13) | (VAR_1 << 11) |
    (VAR_2 << 7) | (0x8 << 1);
 VAR_5->mii_write(VAR_5, VAR_6, 17, 0x1b);
 VAR_5->mii_write(VAR_5, VAR_6, 18, 0);
 VAR_5->mii_write(VAR_5, VAR_6, 16, VAR_7);
 VAR_7 = (1 << 15) | (0 << 13) | (VAR_1 << 11) |
    (VAR_2 << 7) | (0xf << 1);
 VAR_5->mii_write(VAR_5, VAR_6, 17, 0);
 VAR_5->mii_write(VAR_5, VAR_6, 18, 0);
 VAR_5->mii_write(VAR_5, VAR_6, 16, VAR_7);

 VAR_7 = (1 << 15) | (0 << 13) | (VAR_1 << 11) |
    (VAR_2 << 7) | (0x10 << 1);
 VAR_5->mii_write(VAR_5, VAR_6, 17, 0x500);
 VAR_5->mii_write(VAR_5, VAR_6, 18, 0);
 VAR_5->mii_write(VAR_5, VAR_6, 16, VAR_7);
 VAR_5->mii_write(VAR_5, VAR_6, 0x1f, 0);
}
