
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* qu; int dglen; int dgram; int serv; } ;
typedef TYPE_1__ parseinfo ;
typedef int parsedomain_flags ;
typedef scalar_t__ adns_status ;
struct TYPE_8__ {size_t used; int buf; } ;
struct TYPE_7__ {TYPE_4__ vb; int ads; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*,TYPE_4__*,int ,int ,int ,int*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static adns_status FUNC_3(const parseinfo *VAR_3, int *VAR_4, int VAR_5,
         char **VAR_6, parsedomain_flags VAR_7) {
  adns_status VAR_8;
  char *VAR_9;

  VAR_8= FUNC_1(VAR_3->qu->ads, VAR_3->serv, VAR_3->qu, &VAR_3->qu->vb, VAR_7,
    VAR_3->dgram,VAR_3->dglen, VAR_4, VAR_5);
  if (VAR_8) return VAR_8;
  if (!VAR_3->qu->vb.used) return VAR_1;

  VAR_9= FUNC_0(VAR_3->qu, (size_t) VAR_3->qu->vb.used+1);
  if (!VAR_9) VAR_0;

  VAR_9[VAR_3->qu->vb.used]= 0;
  FUNC_2(VAR_9,VAR_3->qu->vb.buf, (size_t) VAR_3->qu->vb.used);

  *VAR_6= VAR_9;
  return VAR_2;
}
