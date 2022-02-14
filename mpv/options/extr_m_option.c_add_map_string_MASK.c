
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; int string; } ;
struct mpv_node {TYPE_1__ u; int format; } ;


 int VAR_0 ;
 struct mpv_node* FUNC_0 (struct mpv_node*,char const*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct mpv_node *VAR_1, const char *VAR_2, const char *VAR_3)
{
    struct mpv_node *VAR_4 = FUNC_0(VAR_1, VAR_2);
    VAR_4->format = VAR_0;
    VAR_4->u.string = FUNC_1(VAR_1->u.list, VAR_3);
}
