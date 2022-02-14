
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {void* value; void* mask; } ;
struct nfacct_filter {void* value; void* mask; } ;
struct netlink_callback {struct nlattr* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct nlattr* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const* const,int ,int *) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct netlink_callback *VAR_7)
{
 const struct nlattr *const VAR_8 = VAR_7->data;
 struct nlattr *VAR_9[VAR_4 + 1];
 struct nfacct_filter *VAR_10;
 int VAR_11;

 if (!VAR_8)
  return 0;

 VAR_11 = FUNC_2(VAR_9, VAR_4, VAR_8,
       VAR_6, ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_9[VAR_3] || !VAR_9[VAR_5])
  return -VAR_0;

 VAR_10 = FUNC_0(sizeof(struct nfacct_filter), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->mask = FUNC_3(FUNC_1(VAR_9[VAR_3]));
 VAR_10->value = FUNC_3(FUNC_1(VAR_9[VAR_5]));
 VAR_7->data = VAR_10;

 return 0;
}
