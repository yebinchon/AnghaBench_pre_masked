
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_hdr {int len; int ctrl; int addr; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rfcomm_session*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct rfcomm_session *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct rfcomm_hdr *VAR_4;
 u8 VAR_5[16], *VAR_6 = VAR_5;

 FUNC_0("%p addr %d credits %d", VAR_1, VAR_2, VAR_3);

 VAR_4 = (void *) VAR_6; VAR_6 += sizeof(*VAR_4);
 VAR_4->addr = VAR_2;
 VAR_4->ctrl = FUNC_1(VAR_0, 1);
 VAR_4->len = FUNC_3(0);

 *VAR_6 = VAR_3; VAR_6++;

 *VAR_6 = FUNC_2(VAR_5); VAR_6++;

 return FUNC_4(VAR_1, VAR_5, VAR_6 - VAR_5);
}
