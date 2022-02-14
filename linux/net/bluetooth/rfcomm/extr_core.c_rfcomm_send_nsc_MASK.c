
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rfcomm_session {int initiator; } ;
struct rfcomm_mcc {void* len; void* type; } ;
struct rfcomm_hdr {void* len; int ctrl; int addr; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int,void*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (void**) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int,void*) ;
 int FUNC_6 (struct rfcomm_session*,void**,int) ;

__attribute__((used)) static int FUNC_7(struct rfcomm_session *VAR_2, int VAR_3, u8 VAR_4)
{
 struct rfcomm_hdr *VAR_5;
 struct rfcomm_mcc *VAR_6;
 u8 VAR_7[16], *VAR_8 = VAR_7;

 FUNC_0("%p cr %d type %d", VAR_2, VAR_3, VAR_4);

 VAR_5 = (void *) VAR_8; VAR_8 += sizeof(*VAR_5);
 VAR_5->addr = FUNC_1(VAR_2->initiator, 0);
 VAR_5->ctrl = FUNC_2(VAR_1, 0);
 VAR_5->len = FUNC_4(sizeof(*VAR_6) + 1);

 VAR_6 = (void *) VAR_8; VAR_8 += sizeof(*VAR_6);
 VAR_6->type = FUNC_5(0, VAR_0);
 VAR_6->len = FUNC_4(1);


 *VAR_8 = FUNC_5(VAR_3, VAR_4); VAR_8++;

 *VAR_8 = FUNC_3(VAR_7); VAR_8++;

 return FUNC_6(VAR_2, VAR_7, VAR_8 - VAR_7);
}
