
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int adns_state ;
typedef int adns_query ;
struct TYPE_4__ {char** str; } ;
struct TYPE_5__ {scalar_t__ status; TYPE_1__ rrs; } ;
typedef TYPE_2__ adns_answer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,char*,int ,int,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *,TYPE_2__**,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 char* FUNC_8 (char*,char) ;

int FUNC_9(int VAR_8, char *VAR_9[]) {
  adns_state VAR_10;
  adns_query VAR_11;
  adns_answer *VAR_12;

  VAR_6= FUNC_8(*VAR_9, '/');
  if (VAR_6)
    VAR_6++;
  else
    VAR_6= *VAR_9;

  if (VAR_8 != 2) {
    FUNC_6(VAR_7, "usage: %s <domain>\n", VAR_6);
    FUNC_5(1);
  }

  VAR_5= FUNC_2(&VAR_10, VAR_0, 0);
  if (VAR_5) FUNC_0("adns_init");

  VAR_5= FUNC_3(VAR_10, VAR_9[1], VAR_3,
       VAR_2|VAR_1,
       ((void*)0), &VAR_11);
  if (VAR_5) FUNC_0("adns_submit");

  VAR_5= FUNC_4(VAR_10, &VAR_11, &VAR_12, ((void*)0));
  if (VAR_5) FUNC_0("adns_init");

  FUNC_7("%s\n", VAR_12->status == VAR_4 ? *VAR_12->rrs.str : "dunno");

  FUNC_1(VAR_10);

  return 0;
}
