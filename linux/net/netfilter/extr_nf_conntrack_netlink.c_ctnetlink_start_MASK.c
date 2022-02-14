
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;
struct nfgenmsg {scalar_t__ nfgen_family; } ;
struct netlink_callback {struct nlattr** data; int nlh; } ;
typedef struct nlattr* ctnetlink_filter ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct nlattr**) ;
 int FUNC_1 (struct nlattr**) ;
 struct nlattr** FUNC_2 (struct nlattr const* const*,scalar_t__) ;
 struct nfgenmsg* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct netlink_callback *VAR_2)
{
 const struct nlattr * const *VAR_3 = VAR_2->data;
 struct ctnetlink_filter *VAR_4 = ((void*)0);
 struct nfgenmsg *VAR_5 = FUNC_3(VAR_2->nlh);
 u8 VAR_6 = VAR_5->nfgen_family;

 if (VAR_6 || (VAR_3[VAR_0] && VAR_3[VAR_1])) {
  VAR_4 = FUNC_2(VAR_3, VAR_6);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);
 }

 VAR_2->data = VAR_4;
 return 0;
}
