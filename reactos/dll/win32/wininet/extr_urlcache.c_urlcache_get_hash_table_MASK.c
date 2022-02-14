
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int urlcache_header ;
typedef int entry_hash_table ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ DWORD ;



__attribute__((used)) static inline entry_hash_table* FUNC_0(const urlcache_header *VAR_0, DWORD VAR_1)
{
    if(!VAR_1)
        return ((void*)0);
    return (entry_hash_table*)((LPBYTE)VAR_0 + VAR_1);
}
