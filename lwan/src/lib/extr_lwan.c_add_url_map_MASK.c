
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_url_map {char const* prefix; int prefix_len; } ;
struct lwan_trie {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct lwan_trie*,char const*,struct lwan_url_map*) ;
 struct lwan_url_map* FUNC_2 (int) ;
 int FUNC_3 (struct lwan_url_map*,struct lwan_url_map const*,int) ;
 char const* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static struct lwan_url_map *FUNC_6(struct lwan_trie *VAR_0, const char *VAR_1,
                                        const struct lwan_url_map *VAR_2)
{
    struct lwan_url_map *VAR_3 = FUNC_2(sizeof(*VAR_3));

    if (!VAR_3)
        FUNC_0("Could not copy URL map");

    FUNC_3(VAR_3, VAR_2, sizeof(*VAR_3));

    VAR_3->prefix = FUNC_4(VAR_1 ? VAR_1 : VAR_3->prefix);
    if (!VAR_3->prefix)
        FUNC_0("Could not copy URL prefix");

    VAR_3->prefix_len = FUNC_5(VAR_3->prefix);
    FUNC_1(VAR_0, VAR_3->prefix, VAR_3);

    return VAR_3;
}
