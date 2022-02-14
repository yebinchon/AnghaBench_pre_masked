
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llc_ops {int dummy; } ;
struct nfc_llc_engine {int entry; struct nfc_llc_ops* ops; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfc_llc_engine*) ;
 int * FUNC_2 (char const*,int ) ;
 struct nfc_llc_engine* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;

int FUNC_5(const char *VAR_3, struct nfc_llc_ops *VAR_4)
{
 struct nfc_llc_engine *VAR_5;

 VAR_5 = FUNC_3(sizeof(struct nfc_llc_engine), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->name = FUNC_2(VAR_3, VAR_1);
 if (VAR_5->name == ((void*)0)) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }
 VAR_5->ops = VAR_4;

 FUNC_0(&VAR_5->entry);
 FUNC_4(&VAR_5->entry, &VAR_2);

 return 0;
}
