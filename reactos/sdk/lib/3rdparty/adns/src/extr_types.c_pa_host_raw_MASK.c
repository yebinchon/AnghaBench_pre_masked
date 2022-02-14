
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* qu; } ;
typedef TYPE_2__ parseinfo ;
typedef scalar_t__ adns_status ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,int*,int,char**,int ) ;
 int VAR_3 ;

__attribute__((used)) static adns_status FUNC_1(const parseinfo *VAR_4, int VAR_5, int VAR_6, void *VAR_7) {
  char **VAR_8= VAR_7;
  adns_status VAR_9;

  VAR_9= FUNC_0(VAR_4, &VAR_5, VAR_6, VAR_8,
   VAR_4->qu->flags & VAR_0 ? VAR_3 : 0);
  if (VAR_9) return VAR_9;

  if (VAR_5 != VAR_6) return VAR_1;
  return VAR_2;
}
