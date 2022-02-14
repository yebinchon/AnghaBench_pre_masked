
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct coreaudio_data {int unit; scalar_t__ default_device; } ;
typedef int callback_info ;
struct TYPE_6__ {struct coreaudio_data* inputProcRefCon; int inputProc; } ;
struct TYPE_5__ {int member_2; int member_1; int member_0; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef TYPE_2__ AURenderCallbackStruct ;


 int FUNC_0 (int ,TYPE_1__*,int ,struct coreaudio_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct coreaudio_data*,int ) ;
 int FUNC_2 (int ,struct coreaudio_data*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_2__*,int) ;

__attribute__((used)) static bool FUNC_4(struct coreaudio_data *VAR_10)
{
 OSStatus VAR_11;
 AURenderCallbackStruct VAR_12 = {.inputProc = VAR_3,
      .inputProcRefCon = VAR_10};

 VAR_11 = FUNC_1(VAR_10, VAR_4);
 if (!FUNC_2(VAR_11, VAR_10, "coreaudio_init_hooks",
   "set disconnect callback"))
  return 0;

 VAR_11 = FUNC_1(VAR_10, VAR_1);
 if (!FUNC_2(VAR_11, VAR_10, "coreaudio_init_hooks",
   "set format change callback"))
  return 0;

 if (VAR_10->default_device) {
  AudioObjectPropertyAddress VAR_13 = {
   VAR_0,
   VAR_6,
   VAR_5};

  VAR_11 = FUNC_0(VAR_7,
            &VAR_13,
            VAR_9,
            VAR_10);
  if (!FUNC_2(VAR_11, VAR_10, "coreaudio_init_hooks",
    "set device change callback"))
   return 0;
 }

 VAR_11 = FUNC_3(VAR_10->unit, VAR_8,
       VAR_2, 0, &VAR_12,
       sizeof(VAR_12));
 if (!FUNC_2(VAR_11, VAR_10, "coreaudio_init_hooks", "set input callback"))
  return 0;

 return 1;
}
