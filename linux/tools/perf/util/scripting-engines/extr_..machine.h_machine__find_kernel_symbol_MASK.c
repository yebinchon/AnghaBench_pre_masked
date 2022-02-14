
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct map {int dummy; } ;
struct machine {int kmaps; } ;


 struct symbol* FUNC_0 (int *,int ,struct map**) ;

__attribute__((used)) static inline
struct symbol *FUNC_1(struct machine *VAR_0, u64 VAR_1,
        struct map **VAR_2)
{
 return FUNC_0(&VAR_0->kmaps, VAR_1, VAR_2);
}
