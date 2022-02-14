
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rd_refcnt; TYPE_1__* rd_rel; scalar_t__ rd_isnailed; } ;
struct TYPE_6__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int ) ;

void
FUNC_6(Relation VAR_4, const char *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_4->rd_isnailed ? 2 : 1;
 if (VAR_4->rd_refcnt != VAR_6)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),

     FUNC_5("cannot %s \"%s\" because it is being used by active queries in this session",
      VAR_5, FUNC_1(VAR_4))));

 if (VAR_4->rd_rel->relkind != VAR_2 &&
  VAR_4->rd_rel->relkind != VAR_3 &&
  FUNC_0(FUNC_2(VAR_4)))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),

     FUNC_5("cannot %s \"%s\" because it has pending trigger events",
      VAR_5, FUNC_1(VAR_4))));
}
