
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; int string; } ;
struct mpv_node {TYPE_1__ u; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 struct mpv_node* FUNC_1 (struct mpv_node*,char const*,int ) ;
 int FUNC_2 (int ,char const*) ;

void FUNC_3(struct mpv_node *VAR_2, const char *VAR_3, const char *VAR_4)
{
    FUNC_0(VAR_4);

    struct mpv_node *VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_0);
    VAR_5->format = VAR_1;
    VAR_5->u.string = FUNC_2(VAR_2->u.list, VAR_4);
}
