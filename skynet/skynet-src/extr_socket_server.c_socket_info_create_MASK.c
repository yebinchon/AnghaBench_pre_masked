
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {struct socket_info* next; } ;


 int FUNC_0 (struct socket_info*,int ,int) ;
 struct socket_info* FUNC_1 (int) ;

struct socket_info *
FUNC_2(struct socket_info *VAR_0) {
 struct socket_info *VAR_1 = FUNC_1(sizeof(*VAR_1));
 FUNC_0(VAR_1, 0 , sizeof(*VAR_1));
 VAR_1->next = VAR_0;
 return VAR_1;
}
