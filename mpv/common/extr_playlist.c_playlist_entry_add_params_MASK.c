
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_param {int value; int name; } ;
struct playlist_entry {int dummy; } ;


 int FUNC_0 (struct playlist_entry*,int ,int ) ;

void FUNC_1(struct playlist_entry *VAR_0,
                               struct playlist_param *VAR_1,
                               int VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        FUNC_0(VAR_0, VAR_1[VAR_3].name, VAR_1[VAR_3].value);
}
