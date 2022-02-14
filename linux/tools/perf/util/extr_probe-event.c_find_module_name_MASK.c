
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ d_buf; } ;
struct TYPE_6__ {scalar_t__* e_ident; } ;
typedef int GElf_Shdr ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef int Elf ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,TYPE_1__*,int *,char*,int *) ;
 int * FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (char const*,int ) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_4)
{
 int VAR_5;
 Elf *VAR_6;
 GElf_Ehdr VAR_7;
 GElf_Shdr VAR_8;
 Elf_Data *VAR_9;
 Elf_Scn *VAR_10;
 char *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_5 = FUNC_6(VAR_4, VAR_2);
 if (VAR_5 < 0)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_5, VAR_3, ((void*)0));
 if (VAR_6 == ((void*)0))
  goto elf_err;

 if (FUNC_5(VAR_6, &VAR_7) == ((void*)0))
  goto ret_err;

 VAR_10 = FUNC_4(VAR_6, &VAR_7, &VAR_8,
   ".gnu.linkonce.this_module", ((void*)0));
 if (!VAR_10)
  goto ret_err;

 VAR_9 = FUNC_3(VAR_10, ((void*)0));
 if (!VAR_9 || !VAR_9->d_buf)
  goto ret_err;
 if (VAR_7.e_ident[VAR_0] == VAR_1)
  VAR_12 = 12;
 else
  VAR_12 = 24;

 VAR_11 = FUNC_7((char *)VAR_9->d_buf + VAR_12);

ret_err:
 FUNC_2(VAR_6);
elf_err:
 FUNC_0(VAR_5);
 return VAR_11;
}
