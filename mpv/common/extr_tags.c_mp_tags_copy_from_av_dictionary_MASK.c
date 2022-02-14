
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_tags {int dummy; } ;
struct AVDictionary {int dummy; } ;
struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct AVDictionary*,char*,TYPE_1__*,int ) ;
 int FUNC_1 (struct mp_tags*,int ,int ) ;

void FUNC_2(struct mp_tags *VAR_1,
                                     struct AVDictionary *VAR_2)
{
    AVDictionaryEntry *VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_0(VAR_2, "", VAR_3, VAR_0)))
        FUNC_1(VAR_1, VAR_3->key, VAR_3->value);
}
