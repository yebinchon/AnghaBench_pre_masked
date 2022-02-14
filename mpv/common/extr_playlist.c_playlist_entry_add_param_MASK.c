
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_param {int member_1; int member_0; } ;
struct playlist_entry {int num_params; int params; } ;
typedef int bstr ;


 int FUNC_0 (struct playlist_entry*,int ,int ,struct playlist_param) ;
 int FUNC_1 (struct playlist_entry*,int ) ;

void FUNC_2(struct playlist_entry *VAR_0, bstr VAR_1, bstr VAR_2)
{
    struct playlist_param VAR_3 = {FUNC_1(VAR_0, VAR_1), FUNC_1(VAR_0, VAR_2)};
    FUNC_0(VAR_0, VAR_0->params, VAR_0->num_params, VAR_3);
}
