
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
struct TYPE_4__ {TYPE_2__ member_0; } ;
struct TYPE_6__ {TYPE_1__ member_1; int member_0; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int CreateDisk ;
typedef TYPE_3__ CREATE_DISK ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int *,int,int *,int ,int*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

BOOL FUNC_5(HANDLE VAR_6)
{
 BOOL VAR_7;
 DWORD VAR_8;
 CREATE_DISK VAR_9 = {VAR_4, {{0}}};

 FUNC_1(0, VAR_3);

 VAR_8 = sizeof(VAR_9);
 VAR_7 = FUNC_0(VAR_6, VAR_1,
   (BYTE*)&VAR_9, VAR_8, ((void*)0), 0, &VAR_8, ((void*)0) );
 if (!VAR_7) {
  FUNC_4("Could not delete drive layout: %s", FUNC_2());
  FUNC_3(VAR_6);
  return VAR_0;
 }

 VAR_7 = FUNC_0(VAR_6, VAR_2, ((void*)0), 0, ((void*)0), 0, &VAR_8, ((void*)0) );
 if (!VAR_7) {
  FUNC_4("Could not refresh drive layout: %s", FUNC_2());
  FUNC_3(VAR_6);
  return VAR_0;
 }

 return VAR_5;
}
