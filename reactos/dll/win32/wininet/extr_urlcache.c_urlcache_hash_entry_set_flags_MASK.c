
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int key; } ;
typedef int DWORD ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hash_entry *VAR_1, DWORD VAR_2)
{
    VAR_1->key = (VAR_1->key >> VAR_0 << VAR_0) | VAR_2;
}
