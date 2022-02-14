
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct coreaudio_data {int unit; scalar_t__ default_device; int device_id; } ;
typedef int callback_info ;
struct TYPE_6__ {int * inputProcRefCon; int * inputProc; } ;
struct TYPE_5__ {int mSelector; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef TYPE_2__ AURenderCallbackStruct ;


 int FUNC_0 (int ,TYPE_1__*,int ,struct coreaudio_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(struct coreaudio_data *VAR_9)
{
 AURenderCallbackStruct VAR_10 = {.inputProc = ((void*)0),
      .inputProcRefCon = ((void*)0)};

 AudioObjectPropertyAddress VAR_11 = {VAR_3,
        VAR_5,
        VAR_4};

 FUNC_0(VAR_9->device_id, &VAR_11,
       VAR_8, VAR_9);

 VAR_11.mSelector = VAR_1;
 FUNC_0(VAR_9->device_id, &VAR_11,
       VAR_8, VAR_9);

 if (VAR_9->default_device) {
  VAR_11.mSelector = VAR_0;
  FUNC_0(VAR_6,
        &VAR_11, VAR_8,
        VAR_9);
 }

 FUNC_1(VAR_9->unit, VAR_7,
       VAR_2, 0, &VAR_10, sizeof(VAR_10));
}
