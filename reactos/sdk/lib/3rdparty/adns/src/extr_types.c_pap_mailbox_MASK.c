
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* qu; } ;
typedef TYPE_3__ parseinfo ;
typedef int adns_status ;
struct TYPE_8__ {TYPE_1__* typei; } ;
struct TYPE_7__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*,int*,int,char**,int ) ;
 int FUNC_1 (TYPE_3__ const*,int*,int,char**) ;
 int VAR_1 ;

__attribute__((used)) static adns_status FUNC_2(const parseinfo *VAR_2, int *VAR_3, int VAR_4,
          char **VAR_5) {
  if (VAR_2->qu->typei->type & VAR_0) {
    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  } else {
    return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1);
  }
}
