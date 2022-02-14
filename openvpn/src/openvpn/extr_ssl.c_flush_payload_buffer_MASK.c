
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_state {int paybuf; int ks_ssl; } ;
struct buffer {int len; int data; } ;


 struct buffer* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct key_state *VAR_0)
{
    struct buffer *VAR_1;

    while ((VAR_1 = FUNC_0(VAR_0->paybuf)))
    {
        FUNC_2(&VAR_0->ks_ssl, VAR_1->data, VAR_1->len);
        FUNC_1(VAR_0->paybuf);
    }
}
