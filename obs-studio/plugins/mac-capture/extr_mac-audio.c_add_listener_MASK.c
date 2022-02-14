
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct coreaudio_data {int device_id; } ;
typedef int UInt32 ;
struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
typedef int OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;


 int FUNC_0 (int ,TYPE_1__*,int ,struct coreaudio_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static OSStatus FUNC_1(struct coreaudio_data *VAR_3, UInt32 VAR_4)
{
 AudioObjectPropertyAddress VAR_5 = {VAR_4,
        VAR_1,
        VAR_0};

 return FUNC_0(VAR_3->device_id, &VAR_5,
           VAR_2, VAR_3);
}
