
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_afe_private {int * base_ck; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_7)
{
 struct mt2701_afe_private *VAR_8 = VAR_7->platform_priv;
 int VAR_9;


 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_4]);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_5]);
 if (VAR_9)
  goto err_a1sys;


 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_6]);
 if (VAR_9)
  goto err_a2sys;


 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_2]);
 if (VAR_9)
  goto err_afe;

 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_0]);
 if (VAR_9)
  goto err_audio_a1sys;

 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_1]);
 if (VAR_9)
  goto err_audio_a2sys;

 VAR_9 = FUNC_1(VAR_8->base_ck[VAR_3]);
 if (VAR_9)
  goto err_afe_conn;

 return 0;

err_afe_conn:
 FUNC_0(VAR_8->base_ck[VAR_1]);
err_audio_a2sys:
 FUNC_0(VAR_8->base_ck[VAR_0]);
err_audio_a1sys:
 FUNC_0(VAR_8->base_ck[VAR_2]);
err_afe:
 FUNC_0(VAR_8->base_ck[VAR_6]);
err_a2sys:
 FUNC_0(VAR_8->base_ck[VAR_5]);
err_a1sys:
 FUNC_0(VAR_8->base_ck[VAR_4]);

 return VAR_9;
}
