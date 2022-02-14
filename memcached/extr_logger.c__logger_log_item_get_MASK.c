
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct logentry_item_get {int was_found; int nkey; int sfd; int key; int clsid; } ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ logentry ;


 int FUNC_0 (int ,char const*,int const) ;

__attribute__((used)) static void FUNC_1(logentry *VAR_0, const int VAR_1, const char *VAR_2,
        const int VAR_3, const uint8_t VAR_4, const int VAR_5) {
    struct logentry_item_get *VAR_6 = (struct logentry_item_get *) VAR_0->data;
    VAR_6->was_found = VAR_1;
    VAR_6->nkey = VAR_3;
    VAR_6->clsid = VAR_4;
    FUNC_0(VAR_6->key, VAR_2, VAR_3);
    VAR_6->sfd = VAR_5;
    VAR_0->size = sizeof(struct logentry_item_get) + VAR_3;
}
