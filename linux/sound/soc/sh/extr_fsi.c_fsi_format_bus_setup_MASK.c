
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {int fmt; } ;
struct fsi_master {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*) ;
 struct fsi_master* FUNC_1 (struct fsi_priv*) ;
 int FUNC_2 (struct fsi_priv*,int ,int) ;
 int FUNC_3 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_4 (struct fsi_master*) ;

__attribute__((used)) static void FUNC_5(struct fsi_priv *VAR_9, struct fsi_stream *VAR_10,
     u32 VAR_11, struct device *VAR_12)
{
 struct fsi_master *VAR_13 = FUNC_1(VAR_9);
 int VAR_14 = FUNC_3(VAR_9, VAR_10);
 u32 VAR_15 = VAR_9->fmt;

 if (FUNC_4(VAR_13) >= 2) {
  u32 VAR_16 = 0;




  switch (VAR_11) {
  case 128:
   VAR_15 |= VAR_1;
   VAR_16 |= VAR_7;
   FUNC_0(VAR_12, "24bit bus / package in front\n");
   break;
  case 130:
   VAR_15 |= VAR_0;
   VAR_16 |= VAR_8;
   FUNC_0(VAR_12, "16bit bus / stream mode\n");
   break;
  case 129:
  default:
   VAR_15 |= VAR_1;
   VAR_16 |= VAR_6;
   FUNC_0(VAR_12, "24bit bus / package in back\n");
   break;
  }

  if (VAR_14)
   FUNC_2(VAR_9, VAR_5, VAR_16);
  else
   FUNC_2(VAR_9, VAR_4, VAR_16);
 }

 if (VAR_14)
  FUNC_2(VAR_9, VAR_3, VAR_15);
 else
  FUNC_2(VAR_9, VAR_2, VAR_15);
}
