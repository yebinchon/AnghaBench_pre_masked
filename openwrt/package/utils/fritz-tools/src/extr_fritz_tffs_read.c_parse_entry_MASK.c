
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct tffs_entry_header {int dummy; } ;
struct tffs_entry {int * val; struct tffs_entry_header* header; } ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, uint32_t VAR_1,
   struct tffs_entry *VAR_2)
{
 VAR_2->header = (struct tffs_entry_header *) &VAR_0[VAR_1];
 VAR_2->val = &VAR_0[VAR_1 + sizeof(struct tffs_entry_header)];
}
