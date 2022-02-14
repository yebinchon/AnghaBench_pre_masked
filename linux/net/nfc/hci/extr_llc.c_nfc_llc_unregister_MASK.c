
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llc_engine {struct nfc_llc_engine* name; int entry; } ;


 int FUNC_0 (struct nfc_llc_engine*) ;
 int FUNC_1 (int *) ;
 struct nfc_llc_engine* FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_0)
{
 struct nfc_llc_engine *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_1->entry);
 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1);
}
