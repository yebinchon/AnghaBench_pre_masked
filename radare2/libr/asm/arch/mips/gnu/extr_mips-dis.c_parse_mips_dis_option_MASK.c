
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_arch_choice {int hwr_names; int cp0sel_names_len; int cp0sel_names; int cp0_names; } ;
struct mips_abi_choice {int fpr_names; int gpr_names; } ;


 struct mips_abi_choice* FUNC_0 (char const*,unsigned int) ;
 struct mips_arch_choice* FUNC_1 (char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_6, unsigned int VAR_7)
{
  unsigned int VAR_8, VAR_9, VAR_10;
  const char *VAR_11;
  const struct mips_abi_choice *VAR_12;
  const struct mips_arch_choice *VAR_13;
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   if (VAR_6[VAR_8] == '=') {
    break;
   }
  }

  if (VAR_8 == 0) {
   return;
  }
  if (VAR_8 == VAR_7) {
   return;
  }
  if (VAR_8 == (VAR_7 - 1)) {
   return;
  }

  VAR_9 = VAR_8;
  VAR_11 = VAR_6 + (VAR_9 + 1);
  VAR_10 = VAR_7 - (VAR_9 + 1);

  if (FUNC_3 ("gpr-names", VAR_6, VAR_9) == 0
      && FUNC_2 ("gpr-names") == VAR_9)
    {
      VAR_12 = FUNC_0 (VAR_11, VAR_10);
      if (VAR_12 != ((void*)0)) {
       VAR_4 = VAR_12->gpr_names;
      }
      return;
    }

  if (FUNC_3 ("fpr-names", VAR_6, VAR_9) == 0
      && FUNC_2 ("fpr-names") == VAR_9)
    {
      VAR_12 = FUNC_0 (VAR_11, VAR_10);
      if (VAR_12 != ((void*)0)) {
       VAR_3 = VAR_12->fpr_names;
      }
      return;
    }

  if (FUNC_3 ("cp0-names", VAR_6, VAR_9) == 0
      && FUNC_2 ("cp0-names") == VAR_9)
    {
      VAR_13 = FUNC_1 (VAR_11, VAR_10);
      if (VAR_13 != ((void*)0))
 {
   VAR_0 = VAR_13->cp0_names;
   VAR_1 = VAR_13->cp0sel_names;
   VAR_2 = VAR_13->cp0sel_names_len;
 }
      return;
    }

  if (FUNC_3 ("hwr-names", VAR_6, VAR_9) == 0
      && FUNC_2 ("hwr-names") == VAR_9)
    {
      VAR_13 = FUNC_1 (VAR_11, VAR_10);
      if (VAR_13 != ((void*)0)) {
       VAR_5 = VAR_13->hwr_names;
      }
      return;
    }

  if (FUNC_3 ("reg-names", VAR_6, VAR_9) == 0
      && FUNC_2 ("reg-names") == VAR_9)
    {




      VAR_12 = FUNC_0 (VAR_11, VAR_10);
      if (VAR_12 != ((void*)0))
 {
   VAR_4 = VAR_12->gpr_names;
   VAR_3 = VAR_12->fpr_names;
 }
      VAR_13 = FUNC_1 (VAR_11, VAR_10);
      if (VAR_13 != ((void*)0))
 {
   VAR_0 = VAR_13->cp0_names;
   VAR_1 = VAR_13->cp0sel_names;
   VAR_2 = VAR_13->cp0sel_names_len;
   VAR_5 = VAR_13->hwr_names;
 }
      return;
    }


}
