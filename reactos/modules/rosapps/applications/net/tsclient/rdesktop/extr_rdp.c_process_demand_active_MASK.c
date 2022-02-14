
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_12__ {scalar_t__ use_rdp5; int rdp_shareid; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static BOOL
FUNC_13(RDPCLIENT * VAR_5, STREAM VAR_6)
{
 uint8 VAR_7;
 uint16 VAR_8, VAR_9;

 FUNC_2(VAR_6, VAR_5->rdp_shareid);
 FUNC_1(VAR_6, VAR_8);
 FUNC_1(VAR_6, VAR_9);
 FUNC_3(VAR_6, VAR_8);

 FUNC_0(("DEMAND_ACTIVE(id=0x%x)\n", VAR_5->rdp_shareid));
 FUNC_5(VAR_5, VAR_6, VAR_9);

 if
 (
  !FUNC_7(VAR_5) ||
  !FUNC_11(VAR_5) ||
  !FUNC_8(VAR_5, VAR_1) ||
  !FUNC_8(VAR_5, VAR_2) ||
  !FUNC_6(VAR_5, &VAR_7) ||
  !FUNC_6(VAR_5, &VAR_7) ||
  !FUNC_6(VAR_5, &VAR_7) ||
  !FUNC_10(VAR_5, 0, VAR_3, 0,
                                                                                        0, 0)
 )
  return VAR_0;

 if (VAR_5->use_rdp5)
 {
  if(!FUNC_4(VAR_5) || !FUNC_9(VAR_5, 3))
   return VAR_0;
 }
 else
 {
  if(!FUNC_9(VAR_5, 1) || !FUNC_9(VAR_5, 2))
   return VAR_0;
 }

 if(!FUNC_6(VAR_5, &VAR_7))
  return VAR_0;

 FUNC_12(VAR_5);
 return VAR_4;
}
