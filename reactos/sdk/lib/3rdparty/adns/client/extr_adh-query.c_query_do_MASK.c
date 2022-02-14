
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_node {int qu; int owner; } ;


 int FUNC_0 (int ,struct query_node*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char const*,scalar_t__,int,struct query_node*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct query_node**,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char const*) ;

void FUNC_5(const char *VAR_5) {
  struct query_node *VAR_6;
  int VAR_7, VAR_8;

  FUNC_2(&VAR_6,&VAR_7);
  VAR_6->owner= FUNC_4(VAR_5);
  VAR_8= FUNC_1(VAR_2, VAR_5,
   VAR_4 == VAR_1 ? VAR_0 : VAR_4,
   VAR_7,
   VAR_6,
   &VAR_6->qu);
  if (VAR_8) FUNC_3("adns_submit",VAR_8);

  FUNC_0(VAR_3,VAR_6);
}
