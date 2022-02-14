
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* query_data; } ;
typedef TYPE_1__ plperl_query_entry ;
struct TYPE_6__ {int plan_cxt; int plan; } ;
typedef TYPE_2__ plperl_query_desc ;
struct TYPE_7__ {int query_hash; } ;
typedef int SPIPlanPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,char*,int ,int *) ;
 TYPE_3__* VAR_3 ;

void
FUNC_5(char *VAR_4)
{
 SPIPlanPtr VAR_5;
 plperl_query_desc *VAR_6;
 plperl_query_entry *VAR_7;

 FUNC_2();

 VAR_7 = FUNC_4(VAR_3->query_hash, VAR_4,
        VAR_1, ((void*)0));
 if (VAR_7 == ((void*)0))
  FUNC_3(VAR_0, "spi_freeplan: Invalid prepared query passed");

 VAR_6 = VAR_7->query_data;
 if (VAR_6 == ((void*)0))
  FUNC_3(VAR_0, "spi_freeplan: plperl query_hash value vanished");
 VAR_5 = VAR_6->plan;





 FUNC_4(VAR_3->query_hash, VAR_4,
    VAR_2, ((void*)0));

 FUNC_0(VAR_6->plan_cxt);

 FUNC_1(VAR_5);
}
