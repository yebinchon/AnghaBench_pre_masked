
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_node {int dummy; } ;
struct mempolicy {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mempolicy*) ;
 int VAR_1 ;
 struct sp_node* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct sp_node*) ;
 struct mempolicy* FUNC_3 (struct mempolicy*) ;
 int VAR_2 ;
 int FUNC_4 (struct sp_node*,unsigned long,unsigned long,struct mempolicy*) ;

__attribute__((used)) static struct sp_node *FUNC_5(unsigned long VAR_3, unsigned long VAR_4,
    struct mempolicy *VAR_5)
{
 struct sp_node *VAR_6;
 struct mempolicy *VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_7)) {
  FUNC_2(VAR_2, VAR_6);
  return ((void*)0);
 }
 VAR_7->flags |= VAR_1;
 FUNC_4(VAR_6, VAR_3, VAR_4, VAR_7);

 return VAR_6;
}
