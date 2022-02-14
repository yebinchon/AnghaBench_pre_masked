
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uac3_cluster_header_descriptor {int bNrChannels; } ;
struct mixer_build {TYPE_1__* chip; } ;
typedef int c_header ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int,unsigned int,int ,struct uac3_cluster_header_descriptor*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,unsigned int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mixer_build *VAR_5, unsigned int VAR_6)
{
 struct uac3_cluster_header_descriptor VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5->chip->dev,
   FUNC_3(VAR_5->chip->dev, 0),
   VAR_1,
   VAR_3 | VAR_4 | VAR_2,
   VAR_6,
   FUNC_1(VAR_5->chip),
   &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  goto error;
 if (VAR_8 != sizeof(VAR_7)) {
  VAR_8 = -VAR_0;
  goto error;
 }

 return VAR_7.bNrChannels;

error:
 FUNC_2(VAR_5->chip, "cannot request logical cluster ID: %d (err: %d)\n", VAR_6, VAR_8);
 return VAR_8;
}
