
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rblist {scalar_t__ nr_entries; } ;



__attribute__((used)) static inline bool FUNC_0(const struct rblist *VAR_0)
{
 return VAR_0->nr_entries == 0;
}
