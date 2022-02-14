
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct query_node {int dummy; } ;
typedef scalar_t__ adns_status ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ adns_answer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const**,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 char* FUNC_6 (struct query_node*,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,struct query_node*,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(adns_status VAR_9, struct query_node *VAR_10, adns_answer *VAR_11) {
  int VAR_12;
  const char *VAR_13, *VAR_14;
  adns_status VAR_15;

  if (VAR_6 == VAR_4) {
    if (FUNC_4("; failed ",VAR_8) == VAR_0) FUNC_5();
    FUNC_7(VAR_9,VAR_10,VAR_11);
    return;
  }
  FUNC_2(VAR_6 == VAR_5);
  if (VAR_9 == VAR_2) {
    VAR_12= FUNC_3(VAR_7,"%s does not exist\n", FUNC_6(VAR_10,VAR_11));
  } else {
    VAR_15= FUNC_0(VAR_11->type, &VAR_13, 0,0,0,0);
    if (VAR_9 == VAR_1) {
      VAR_12= FUNC_3(VAR_7,"%s has no %s record\n", FUNC_6(VAR_10,VAR_11), VAR_13);
    } else {
      VAR_14= FUNC_1(VAR_9);
      VAR_12= FUNC_3(VAR_7,"Error during DNS %s lookup for %s: %s\n",
   VAR_13, FUNC_6(VAR_10,VAR_11), VAR_14);
    }
  }
  if (VAR_12 == VAR_0) FUNC_8("write error message to stderr",VAR_3);
}
