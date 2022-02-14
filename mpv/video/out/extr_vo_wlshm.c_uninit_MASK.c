
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {struct buffer* free_buffers; } ;
struct buffer {struct buffer* next; } ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct vo*) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct buffer *VAR_2;

    while (VAR_1->free_buffers) {
        VAR_2 = VAR_1->free_buffers;
        VAR_1->free_buffers = VAR_2->next;
        FUNC_0(VAR_2);
    }
    FUNC_1(VAR_0);
}
