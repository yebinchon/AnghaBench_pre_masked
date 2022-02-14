
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {scalar_t__ reserved; } ;


 int FUNC_0 (struct playlist_entry*) ;

void FUNC_1(struct playlist_entry *VAR_0)
{
    VAR_0->reserved--;
    if (VAR_0->reserved < 0)
        FUNC_0(VAR_0);
}
