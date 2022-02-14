
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_stream {int fifo_sample_capa; } ;
struct fsi_priv {int chan_num; } ;
struct fsi_master {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct fsi_priv*,int) ;
 struct fsi_master* FUNC_2 (struct fsi_priv*) ;
 int FUNC_3 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_4 (struct fsi_master*,int ) ;
 int FUNC_5 (struct fsi_priv*,int ,int ,int ) ;
 int FUNC_6 (struct fsi_priv*,int ,int ) ;
 int FUNC_7 (struct fsi_priv*,struct fsi_stream*) ;

__attribute__((used)) static void FUNC_8(struct fsi_priv *VAR_6,
     struct fsi_stream *VAR_7,
     struct device *VAR_8)
{
 struct fsi_master *VAR_9 = FUNC_2(VAR_6);
 int VAR_10 = FUNC_7(VAR_6, VAR_7);
 u32 VAR_11, VAR_12;
 int VAR_13;


 VAR_11 = FUNC_4(VAR_9, VAR_3);
 VAR_11 >>= FUNC_3(VAR_6, VAR_7);
 VAR_11 &= VAR_4;
 VAR_13 = 256 << VAR_11;
 FUNC_0(VAR_8, "fifo = %d words\n", VAR_13);
 for (VAR_12 = 1; VAR_12 < VAR_6->chan_num; VAR_12 <<= 1)
  VAR_13 >>= 1;
 FUNC_0(VAR_8, "%d channel %d store\n",
  VAR_6->chan_num, VAR_13);

 VAR_7->fifo_sample_capa = FUNC_1(VAR_6, VAR_13);





 if (VAR_10) {
  FUNC_6(VAR_6, VAR_1, VAR_5);
  FUNC_5(VAR_6, VAR_1, VAR_2, VAR_2);
 } else {
  FUNC_6(VAR_6, VAR_0, VAR_5);
  FUNC_5(VAR_6, VAR_0, VAR_2, VAR_2);
 }
}
