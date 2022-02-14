
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_user_filter {char* name; int f; int wrapper; } ;
struct chain {int num_post_filters; int post_filters; int frame_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct chain*,int ,int ,struct mp_user_filter*) ;
 int FUNC_1 () ;
 struct mp_user_filter* FUNC_2 (struct chain*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct chain *VAR_1)
{
    VAR_1->frame_type = VAR_0;

    struct mp_user_filter *VAR_2 = FUNC_2(VAR_1);
    VAR_2->name = "userspeed";
    VAR_2->f = FUNC_3(VAR_2->wrapper);
    if (!VAR_2->f)
        FUNC_1();
    FUNC_0(VAR_1, VAR_1->post_filters, VAR_1->num_post_filters, VAR_2);
}
