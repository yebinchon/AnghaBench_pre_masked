
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_rls {int status; int dlci; } ;


 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rfcomm_session*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rfcomm_session *VAR_0, int VAR_1, struct sk_buff *VAR_2)
{
 struct rfcomm_rls *VAR_3 = (void *) VAR_2->data;
 u8 VAR_4 = FUNC_1(VAR_3->dlci);

 FUNC_0("dlci %d cr %d status 0x%x", VAR_4, VAR_1, VAR_3->status);

 if (!VAR_1)
  return 0;





 FUNC_2(VAR_0, 0, VAR_4, VAR_3->status);

 return 0;
}
