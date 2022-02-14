
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {struct key_state** key_scan; } ;
struct key_state {int session_id_remote; int key_id; int state; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 char const* FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,int,int ,int ,int ) ;
 int FUNC_3 (int *,struct gc_arena*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static const char *
FUNC_5(struct tls_multi *VAR_1, struct gc_arena *VAR_2)
{
    int VAR_3;
    struct buffer VAR_4 = FUNC_1(256, VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        struct key_state *VAR_5 = VAR_1->key_scan[VAR_3];
        FUNC_2(&VAR_4, " [key#%d state=%s id=%d sid=%s]", VAR_3,
                   FUNC_4(VAR_5->state), VAR_5->key_id,
                   FUNC_3(&VAR_5->session_id_remote, VAR_2));
    }

    return FUNC_0(&VAR_4);
}
