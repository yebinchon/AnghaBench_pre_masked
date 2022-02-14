
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub {int valid; scalar_t__ id; scalar_t__ src_h; scalar_t__ src_w; scalar_t__ count; } ;
struct sd_lavc_priv {int new_id; struct sub* subs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sub*) ;

__attribute__((used)) static void FUNC_1(struct sd_lavc_priv *VAR_1)
{
    FUNC_0(&VAR_1->subs[VAR_0 - 1]);
    struct sub VAR_2 = VAR_1->subs[VAR_0 - 1];
    for (int VAR_3 = VAR_0 - 1; VAR_3 > 0; VAR_3--)
        VAR_1->subs[VAR_3] = VAR_1->subs[VAR_3 - 1];
    VAR_1->subs[0] = VAR_2;

    VAR_1->subs[0].valid = 0;
    VAR_1->subs[0].count = 0;
    VAR_1->subs[0].src_w = 0;
    VAR_1->subs[0].src_h = 0;
    VAR_1->subs[0].id = VAR_1->new_id++;
}
