
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {int initiator; } ;
struct rfcomm_rls {int status; void* dlci; } ;
struct rfcomm_mcc {void* len; int type; } ;
struct rfcomm_hdr {void* len; int ctrl; void* addr; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct rfcomm_session*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct rfcomm_session *VAR_2, int VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct rfcomm_hdr *VAR_6;
 struct rfcomm_mcc *VAR_7;
 struct rfcomm_rls *VAR_8;
 u8 VAR_9[16], *VAR_10 = VAR_9;

 FUNC_0("%p cr %d status 0x%x", VAR_2, VAR_3, VAR_5);

 VAR_6 = (void *) VAR_10; VAR_10 += sizeof(*VAR_6);
 VAR_6->addr = FUNC_1(VAR_2->initiator, 0);
 VAR_6->ctrl = FUNC_2(VAR_1, 0);
 VAR_6->len = FUNC_4(sizeof(*VAR_7) + sizeof(*VAR_8));

 VAR_7 = (void *) VAR_10; VAR_10 += sizeof(*VAR_7);
 VAR_7->type = FUNC_5(VAR_3, VAR_0);
 VAR_7->len = FUNC_4(sizeof(*VAR_8));

 VAR_8 = (void *) VAR_10; VAR_10 += sizeof(*VAR_8);
 VAR_8->dlci = FUNC_1(1, VAR_4);
 VAR_8->status = VAR_5;

 *VAR_10 = FUNC_3(VAR_9); VAR_10++;

 return FUNC_6(VAR_2, VAR_9, VAR_10 - VAR_9);
}
