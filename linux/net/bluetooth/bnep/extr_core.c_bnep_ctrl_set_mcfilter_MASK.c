
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef scalar_t__ u8 ;
struct bnep_session {long long mc_filter; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__* broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct bnep_session*,int ,int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct bnep_session *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 < 2)
  return -VAR_3;

 VAR_8 = FUNC_3(VAR_6);
 VAR_6 += 2;
 VAR_7 -= 2;

 if (VAR_7 < VAR_8)
  return -VAR_3;

 FUNC_0("filter len %d", VAR_8);
 FUNC_2(VAR_5, VAR_0, VAR_1);

 return 0;
}
