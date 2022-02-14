
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ show_cname; } ;
struct query_node {TYPE_1__ pqfr; } ;
typedef int adns_status ;
struct TYPE_6__ {char* cname; } ;
typedef TYPE_2__ adns_answer ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct query_node*,TYPE_2__*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char const*,...) ;
 int FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(adns_status VAR_1, struct query_node *VAR_2, adns_answer *VAR_3) {
  const char *VAR_4, *VAR_5, *VAR_6;

  VAR_4= FUNC_1(VAR_1);
  VAR_5= FUNC_0(VAR_1);
  VAR_6= FUNC_2(VAR_1);
  FUNC_3(!FUNC_8(VAR_6,'"'));

  if (FUNC_7("%s %d %s ", VAR_4, VAR_1, VAR_5)
      == VAR_0) FUNC_4();
  FUNC_5(VAR_2,VAR_3);
  if (VAR_2->pqfr.show_cname)
    FUNC_6(VAR_3->cname ? VAR_3->cname : "$");
  if (FUNC_7("\"%s\"\n", VAR_6) == VAR_0) FUNC_4();
}
