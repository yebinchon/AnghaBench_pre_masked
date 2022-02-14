
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_mode; int ce_flags; int name; int sha1; } ;


 int FUNC_0 (int) ;
 struct cache_entry* FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,unsigned char const*) ;
 int FUNC_5 (int ,char const*,int) ;
 struct cache_entry* FUNC_6 (struct cache_entry*,char const*) ;
 int FUNC_7 (char const*) ;

struct cache_entry *FUNC_8(unsigned int VAR_0,
                                     const unsigned char *VAR_1,
                                     const char *VAR_2, const char *VAR_3,
                                     int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    struct cache_entry *VAR_8;






    VAR_7 = FUNC_7(VAR_2);
    VAR_6 = FUNC_0(VAR_7);
    VAR_8 = FUNC_1(1, VAR_6);

    FUNC_4(VAR_8->sha1, VAR_1);
    FUNC_5(VAR_8->name, VAR_2, VAR_7);
    VAR_8->ce_flags = FUNC_2(VAR_7, VAR_4);
    VAR_8->ce_mode = FUNC_3(VAR_0);

    if (VAR_5)
        return FUNC_6(VAR_8, VAR_3);

    return VAR_8;
}
