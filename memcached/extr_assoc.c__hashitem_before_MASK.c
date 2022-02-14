
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t const nkey; struct TYPE_6__* h_next; } ;
typedef TYPE_1__ item ;


 int ITEM_key (TYPE_1__*) ;
 unsigned int expand_bucket ;
 scalar_t__ expanding ;
 size_t const hashmask (scalar_t__) ;
 scalar_t__ hashpower ;
 scalar_t__ memcmp (char const*,int ,size_t const) ;
 TYPE_1__** old_hashtable ;
 TYPE_1__** primary_hashtable ;

__attribute__((used)) static item** _hashitem_before (const char *key, const size_t nkey, const uint32_t hv) {
    item **pos;
    unsigned int oldbucket;

    if (expanding &&
        (oldbucket = (hv & hashmask(hashpower - 1))) >= expand_bucket)
    {
        pos = &old_hashtable[oldbucket];
    } else {
        pos = &primary_hashtable[hv & hashmask(hashpower)];
    }

    while (*pos && ((nkey != (*pos)->nkey) || memcmp(key, ITEM_key(*pos), nkey))) {
        pos = &(*pos)->h_next;
    }
    return pos;
}
