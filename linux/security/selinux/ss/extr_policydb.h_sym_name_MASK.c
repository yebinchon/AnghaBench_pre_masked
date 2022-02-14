
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb {char*** sym_val_to_name; } ;



__attribute__((used)) static inline char *FUNC_0(struct policydb *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 return VAR_0->sym_val_to_name[VAR_1][VAR_2];
}
