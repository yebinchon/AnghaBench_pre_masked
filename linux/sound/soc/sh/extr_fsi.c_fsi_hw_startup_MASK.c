
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int sample_width; int bus_option; } ;
struct fsi_priv {scalar_t__ lr_clk_inv; scalar_t__ bit_clk_inv; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,struct fsi_priv*) ;
 int FUNC_2 (struct fsi_priv*,struct fsi_stream*,struct device*) ;
 int FUNC_3 (struct fsi_priv*,struct fsi_stream*,int,struct device*) ;
 int FUNC_4 (struct fsi_priv*) ;
 int FUNC_5 (struct fsi_priv*,struct fsi_stream*) ;
 scalar_t__ FUNC_6 (struct fsi_priv*) ;
 scalar_t__ FUNC_7 (struct fsi_priv*) ;
 int FUNC_8 (struct fsi_priv*,int ,int,int) ;
 int FUNC_9 (struct fsi_priv*,int ,int) ;
 int FUNC_10 (struct fsi_priv*,int) ;

__attribute__((used)) static int FUNC_11(struct fsi_priv *VAR_6,
     struct fsi_stream *VAR_7,
     struct device *VAR_8)
{
 u32 VAR_9 = 0;


 if (FUNC_6(VAR_6))
  VAR_9 = VAR_2 | VAR_4;

 FUNC_8(VAR_6, VAR_0, (VAR_2 | VAR_4), VAR_9);


 VAR_9 = 0;
 if (VAR_6->bit_clk_inv)
  VAR_9 |= (1 << 0);
 if (VAR_6->lr_clk_inv)
  VAR_9 |= (1 << 4);
 if (FUNC_6(VAR_6))
  VAR_9 <<= 8;
 FUNC_9(VAR_6, VAR_1, VAR_9);


 if (FUNC_7(VAR_6)) {
  FUNC_10(VAR_6, 1);
  FUNC_8(VAR_6, VAR_5, VAR_3, VAR_3);
 }




 VAR_9 = 0;
 switch (VAR_7->sample_width) {
 case 2:
  VAR_9 = FUNC_0(16, VAR_7->bus_option);
  break;
 case 4:
  VAR_9 = FUNC_0(24, VAR_7->bus_option);
  break;
 }
 FUNC_3(VAR_6, VAR_7, VAR_9, VAR_8);


 FUNC_5(VAR_6, VAR_7);
 FUNC_4(VAR_6);


 FUNC_2(VAR_6, VAR_7, VAR_8);


 if (FUNC_6(VAR_6))
  return FUNC_1(VAR_8, VAR_6);

 return 0;
}
