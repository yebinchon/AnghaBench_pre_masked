
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_priv {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct fsi_priv*,int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4,
         struct fsi_priv *VAR_5,
         int VAR_6, int VAR_7)
{
 u32 VAR_8 = 0;


 if (VAR_7 > VAR_6) {
  FUNC_1(VAR_4, "unsupported rate (%d/%d)\n", VAR_6, VAR_7);
  return -VAR_3;
 }


 switch (VAR_6) {
 case 512:
  VAR_8 |= (0x0 << 12);
  break;
 case 256:
  VAR_8 |= (0x1 << 12);
  break;
 case 128:
  VAR_8 |= (0x2 << 12);
  break;
 case 64:
  VAR_8 |= (0x3 << 12);
  break;
 case 32:
  VAR_8 |= (0x4 << 12);
  break;
 default:
  FUNC_1(VAR_4, "unsupported ackmd (%d)\n", VAR_6);
  return -VAR_3;
 }


 switch (VAR_7) {
 case 32:
  VAR_8 |= (0x0 << 8);
  break;
 case 64:
  VAR_8 |= (0x1 << 8);
  break;
 case 128:
  VAR_8 |= (0x2 << 8);
  break;
 case 256:
  VAR_8 |= (0x3 << 8);
  break;
 case 512:
  VAR_8 |= (0x4 << 8);
  break;
 case 16:
  VAR_8 |= (0x7 << 8);
  break;
 default:
  FUNC_1(VAR_4, "unsupported bpfmd (%d)\n", VAR_7);
  return -VAR_3;
 }

 FUNC_0(VAR_4, "ACKMD/BPFMD = %d/%d\n", VAR_6, VAR_7);

 FUNC_2(VAR_5, VAR_2, (VAR_0 | VAR_1) , VAR_8);
 FUNC_3(10);

 return 0;
}
