
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fsi_stream {int chan; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct fsi_master* FUNC_1 (struct fsi_priv*) ;
 scalar_t__ FUNC_2 (struct fsi_priv*) ;
 scalar_t__ FUNC_3 (struct fsi_priv*) ;
 int FUNC_4 (struct fsi_master*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct fsi_priv*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct fsi_priv *VAR_5, struct fsi_stream *VAR_6,
     int VAR_7)
{
 struct fsi_master *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9 = FUNC_3(VAR_5) ? VAR_1 : VAR_2;
 u32 VAR_10 = VAR_7 ? VAR_3 : 0;

 FUNC_5(VAR_5, VAR_4, VAR_3, VAR_10);

 FUNC_0(VAR_6->chan);

 if (FUNC_2(VAR_5))
  FUNC_4(VAR_8, VAR_0, VAR_9, (VAR_10) ? VAR_9 : 0);

 return 0;
}
