
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo_x11_state {int parent; int window; } ;
struct vo {struct vo_x11_state* x11; } ;
struct TYPE_4__ {long* l; } ;
struct TYPE_5__ {scalar_t__ message_type; TYPE_1__ data; } ;
typedef TYPE_2__ XClientMessageEvent ;


 int FUNC_0 (struct vo_x11_state*,char*) ;
 scalar_t__ FUNC_1 (struct vo_x11_state*,int ) ;
 long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_2, XClientMessageEvent *VAR_3)
{
    struct vo_x11_state *VAR_4 = VAR_2->x11;
    if (!VAR_4->window || !VAR_4->parent || VAR_3->message_type != FUNC_1(VAR_4, VAR_1))
        return;

    long VAR_5 = VAR_3->data.l[1];
    if (VAR_5 == VAR_0)
        FUNC_0(VAR_4, "Parent windows supports XEmbed.\n");
}
