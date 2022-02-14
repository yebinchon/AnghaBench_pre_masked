
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_dlc {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 struct rfcomm_dlc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rfcomm_session*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct rfcomm_dlc* FUNC_4 (struct rfcomm_session*,int ) ;
 int FUNC_5 () ;
 struct rfcomm_session* FUNC_6 (int *,int *) ;
 int FUNC_7 () ;

struct rfcomm_dlc *FUNC_8(bdaddr_t *VAR_1, bdaddr_t *VAR_2, u8 VAR_3)
{
 struct rfcomm_session *VAR_4;
 struct rfcomm_dlc *VAR_5 = ((void*)0);
 u8 VAR_6;

 if (FUNC_3(VAR_3))
  return FUNC_0(-VAR_0);

 FUNC_5();
 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (VAR_4) {
  VAR_6 = FUNC_1(FUNC_2(VAR_4), VAR_3);
  VAR_5 = FUNC_4(VAR_4, VAR_6);
 }
 FUNC_7();
 return VAR_5;
}
