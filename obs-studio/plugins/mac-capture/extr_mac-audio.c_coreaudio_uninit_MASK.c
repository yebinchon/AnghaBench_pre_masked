
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int au_initialized; int * buf_list; int * unit; } ;
typedef int OSStatus ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct coreaudio_data*,char*,char*) ;
 int FUNC_4 (struct coreaudio_data*) ;
 int FUNC_5 (struct coreaudio_data*) ;

__attribute__((used)) static void FUNC_6(struct coreaudio_data *VAR_0)
{
 if (!VAR_0->au_initialized)
  return;

 if (VAR_0->unit) {
  FUNC_5(VAR_0);

  OSStatus VAR_1 = FUNC_1(VAR_0->unit);
  FUNC_3(VAR_1, VAR_0, "coreaudio_uninit", "uninitialize");

  FUNC_4(VAR_0);

  VAR_1 = FUNC_0(VAR_0->unit);
  FUNC_3(VAR_1, VAR_0, "coreaudio_uninit", "dispose");

  VAR_0->unit = ((void*)0);
 }

 VAR_0->au_initialized = 0;

 FUNC_2(VAR_0->buf_list);
 VAR_0->buf_list = ((void*)0);
}
