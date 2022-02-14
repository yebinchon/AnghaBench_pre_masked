
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hm_header_st {int frag_len; int frag_off; int seq; int msg_len; int type; } ;


 int FUNC_0 (struct hm_header_st*,int ,int) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,int ) ;

void FUNC_3(unsigned char *VAR_0, struct hm_header_st *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->type = *(VAR_0++);
    FUNC_1(VAR_0, VAR_1->msg_len);

    FUNC_2(VAR_0, VAR_1->seq);
    FUNC_1(VAR_0, VAR_1->frag_off);
    FUNC_1(VAR_0, VAR_1->frag_len);
}
