
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct query_node {int qu; int owner; } ;
struct optioninfo {int dummy; } ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 (int ,struct query_node*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct sockaddr*,char const*,scalar_t__,int,struct query_node*,int *) ;
 int VAR_3 ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct query_node**,int*) ;
 int FUNC_5 (int ,char*,char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (scalar_t__) ;

void FUNC_10(const struct optioninfo *VAR_6, const char *VAR_7, const char *VAR_8) {
  struct query_node *VAR_9;
  int VAR_10, VAR_11;
  struct sockaddr_in VAR_12;

  FUNC_3(&VAR_12,0,sizeof(VAR_12));
  VAR_12.sin_family= VAR_0;
  if (!FUNC_2(VAR_7,&VAR_12.sin_addr)) FUNC_8("invalid IP address %s",VAR_7);

  FUNC_4(&VAR_9,&VAR_10);
  VAR_9->owner= FUNC_9(FUNC_6(VAR_7) + FUNC_6(VAR_8) + 2);
  FUNC_5(VAR_9->owner, "%s %s", VAR_7,VAR_8);
  VAR_11= FUNC_1(VAR_3,
        (struct sockaddr*)&VAR_12, VAR_8,
        VAR_5 == VAR_1 ? VAR_2 : VAR_5,
        VAR_10,
        VAR_9,
        &VAR_9->qu);
  if (VAR_11) FUNC_7("adns_submit_reverse",VAR_11);

  FUNC_0(VAR_4,VAR_9);
}
