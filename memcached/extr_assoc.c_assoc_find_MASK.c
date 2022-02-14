
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t const nkey; struct TYPE_6__* h_next; } ;
typedef TYPE_1__ item ;


 int ITEM_key (TYPE_1__*) ;
 int MEMCACHED_ASSOC_FIND (char const*,size_t const,int) ;
 unsigned int expand_bucket ;
 scalar_t__ expanding ;
 size_t const hashmask (scalar_t__) ;
 scalar_t__ hashpower ;
 scalar_t__ memcmp (char const*,int ,size_t const) ;
 TYPE_1__** old_hashtable ;
 TYPE_1__** primary_hashtable ;

item *assoc_find(const char *key, const size_t nkey, const uint32_t hv) {
    item *it;
    unsigned int oldbucket;

    if (expanding &&
        (oldbucket = (hv & hashmask(hashpower - 1))) >= expand_bucket)
    {
        it = old_hashtable[oldbucket];
    } else {
        it = primary_hashtable[hv & hashmask(hashpower)];
    }

    item *ret = ((void*)0);
    int depth = 0;
    while (it) {
        if ((nkey == it->nkey) && (memcmp(key, ITEM_key(it), nkey) == 0)) {
            ret = it;
            break;
        }
        it = it->h_next;
        ++depth;
    }
    MEMCACHED_ASSOC_FIND(key, nkey, depth);
    return ret;
}
