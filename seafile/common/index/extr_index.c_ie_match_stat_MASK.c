
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_flags; } ;
typedef int SeafStat ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct cache_entry*,int *) ;
 scalar_t__ FUNC_1 (struct cache_entry*) ;
 scalar_t__ FUNC_2 (int ,struct cache_entry*) ;
 int VAR_4 ;

int FUNC_3(struct cache_entry *VAR_5, SeafStat *VAR_6,
                  unsigned int VAR_7)
{
    unsigned int VAR_8;
    int VAR_9 = VAR_7 & VAR_1;
    int VAR_10 = VAR_7 & VAR_0;
    if (!VAR_10 && FUNC_1(VAR_5))
        return 0;
    if (!VAR_9 && (VAR_5->ce_flags & VAR_2))
        return 0;
    VAR_8 = FUNC_0(VAR_5, VAR_6);
    return VAR_8;
}
