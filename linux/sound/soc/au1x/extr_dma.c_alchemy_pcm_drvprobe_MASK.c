
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct alchemy_pcm_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alchemy_pcm_ctx* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (struct platform_device*,struct alchemy_pcm_ctx*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct alchemy_pcm_ctx *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4);

 return FUNC_1(&VAR_3->dev,
     &VAR_2, ((void*)0), 0);
}
