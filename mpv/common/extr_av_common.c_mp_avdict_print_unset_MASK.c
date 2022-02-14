
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (struct mp_log*,int,char*,int ,int ) ;

void FUNC_2(struct mp_log *VAR_1, int VAR_2, AVDictionary *VAR_3)
{
    AVDictionaryEntry *VAR_4 = ((void*)0);
    while ((VAR_4 = FUNC_0(VAR_3, "", VAR_4, VAR_0)))
        FUNC_1(VAR_1, VAR_2, "Could not set AVOption %s='%s'\n", VAR_4->key, VAR_4->value);
}
