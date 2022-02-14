
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int au_initialized; int device_name; int unit; int device_id; } ;
typedef int OSStatus ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,struct coreaudio_data*,char*,char*) ;
 int FUNC_3 (struct coreaudio_data*) ;
 int FUNC_4 (struct coreaudio_data*) ;
 int FUNC_5 (struct coreaudio_data*) ;
 int FUNC_6 (struct coreaudio_data*) ;
 int FUNC_7 (struct coreaudio_data*) ;
 int FUNC_8 (struct coreaudio_data*) ;
 int FUNC_9 (struct coreaudio_data*) ;
 int FUNC_10 (struct coreaudio_data*,int ,int) ;
 int FUNC_11 (struct coreaudio_data*) ;
 int VAR_4 ;
 int FUNC_12 (int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static bool FUNC_13(struct coreaudio_data *VAR_5)
{
 OSStatus VAR_6;

 if (VAR_5->au_initialized)
  return 1;

 if (!FUNC_11(VAR_5))
  return 0;
 if (!FUNC_3(VAR_5))
  return 0;
 if (!FUNC_7(VAR_5))
  return 0;

 VAR_6 = FUNC_10(VAR_5, VAR_0, 1);
 if (!FUNC_2(VAR_6, VAR_5, "coreaudio_init", "enable input io"))
  goto fail;

 VAR_6 = FUNC_10(VAR_5, VAR_1, 0);
 if (!FUNC_2(VAR_6, VAR_5, "coreaudio_init", "disable output io"))
  goto fail;

 VAR_6 = FUNC_12(VAR_5->unit, VAR_4,
       VAR_3, 0, &VAR_5->device_id,
       sizeof(VAR_5->device_id));
 if (!FUNC_2(VAR_6, VAR_5, "coreaudio_init", "set current device"))
  goto fail;

 if (!FUNC_5(VAR_5))
  goto fail;
 if (!FUNC_4(VAR_5))
  goto fail;
 if (!FUNC_6(VAR_5))
  goto fail;

 VAR_6 = FUNC_0(VAR_5->unit);
 if (!FUNC_2(VAR_6, VAR_5, "coreaudio_initialize", "initialize"))
  goto fail;

 if (!FUNC_8(VAR_5))
  goto fail;

 FUNC_1(VAR_2, "coreaudio: device '%s' initialized", VAR_5->device_name);
 return VAR_5->au_initialized;

fail:
 FUNC_9(VAR_5);
 return 0;
}
