
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_key {int dummy; } ;
struct fl_flow_mask {struct fl_flow_key key; } ;


 void* FUNC_0 (struct fl_flow_key*,struct fl_flow_mask*) ;
 int FUNC_1 (struct fl_flow_mask*) ;

__attribute__((used)) static void FUNC_2(struct fl_flow_key *VAR_0, struct fl_flow_key *VAR_1,
         struct fl_flow_mask *VAR_2)
{
 const long *VAR_3 = FUNC_0(VAR_1, VAR_2);
 const long *VAR_4 = FUNC_0(&VAR_2->key, VAR_2);
 long *VAR_5 = FUNC_0(VAR_0, VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2); VAR_6 += sizeof(long))
  *VAR_5++ = *VAR_3++ & *VAR_4++;
}
