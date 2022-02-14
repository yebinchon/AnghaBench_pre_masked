
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct int_node {int * priv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct int_node* FUNC_0 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(u8 VAR_3, u64 *VAR_4)
{
 struct int_node *VAR_5;
 u64 *VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = VAR_5->priv;
 *VAR_4 = VAR_6[VAR_0];
 return 0;
}
