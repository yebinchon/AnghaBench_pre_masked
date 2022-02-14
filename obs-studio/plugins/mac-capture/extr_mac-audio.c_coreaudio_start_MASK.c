
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int unit; scalar_t__ active; } ;
typedef int OSStatus ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct coreaudio_data*,char*,char*) ;

__attribute__((used)) static bool FUNC_2(struct coreaudio_data *VAR_0)
{
 OSStatus VAR_1;

 if (VAR_0->active)
  return 1;

 VAR_1 = FUNC_0(VAR_0->unit);
 return FUNC_1(VAR_1, VAR_0, "coreaudio_start", "start audio");
}
