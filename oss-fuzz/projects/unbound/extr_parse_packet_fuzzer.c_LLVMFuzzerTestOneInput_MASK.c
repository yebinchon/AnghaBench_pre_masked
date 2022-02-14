
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct msg_parse {int dummy; } ;
typedef int sldns_buffer ;
typedef int prs ;


 int FUNC_0 () ;
 int FUNC_1 (struct msg_parse*,int ,int) ;
 int FUNC_2 (int *,struct msg_parse*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,void*,size_t) ;

int FUNC_5(const uint8_t *VAR_1, size_t VAR_2)
{
 if (!VAR_0) {
  VAR_0 = FUNC_3();
  if (!VAR_0) {
   FUNC_0();
  }
}
 sldns_buffer VAR_3;
 FUNC_4(&VAR_3, (void*)VAR_1, VAR_2);

 struct msg_parse VAR_4;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(&VAR_3, &VAR_4, VAR_0);
 return 0;
}
