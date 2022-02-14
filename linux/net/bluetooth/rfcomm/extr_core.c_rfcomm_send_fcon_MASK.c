
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {int initiator; } ;
struct rfcomm_mcc {void* len; int type; } ;
struct rfcomm_hdr {void* len; int ctrl; int addr; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct rfcomm_session*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct rfcomm_session *VAR_2, int VAR_3)
{
 struct rfcomm_hdr *VAR_4;
 struct rfcomm_mcc *VAR_5;
 u8 VAR_6[16], *VAR_7 = VAR_6;

 FUNC_0("%p cr %d", VAR_2, VAR_3);

 VAR_4 = (void *) VAR_7; VAR_7 += sizeof(*VAR_4);
 VAR_4->addr = FUNC_1(VAR_2->initiator, 0);
 VAR_4->ctrl = FUNC_2(VAR_1, 0);
 VAR_4->len = FUNC_4(sizeof(*VAR_5));

 VAR_5 = (void *) VAR_7; VAR_7 += sizeof(*VAR_5);
 VAR_5->type = FUNC_5(VAR_3, VAR_0);
 VAR_5->len = FUNC_4(0);

 *VAR_7 = FUNC_3(VAR_6); VAR_7++;

 return FUNC_6(VAR_2, VAR_6, VAR_7 - VAR_6);
}
