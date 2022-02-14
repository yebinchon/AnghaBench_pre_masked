
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_type; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2, const char *VAR_3)
{
 Elf *VAR_4;
 GElf_Ehdr VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_2, VAR_1, ((void*)0));
 if (VAR_4 == ((void*)0))
  return 0;
 if (FUNC_2(VAR_4, &VAR_5) == ((void*)0))
  goto out;

 VAR_6 = (VAR_5.e_type == VAR_0);

out:
 FUNC_1(VAR_4);
 FUNC_3("unwind: elf_is_exec(%s): %d\n", VAR_3, VAR_6);
 return VAR_6;
}
