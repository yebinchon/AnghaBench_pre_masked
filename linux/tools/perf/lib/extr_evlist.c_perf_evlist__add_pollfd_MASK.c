
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* priv; } ;
struct perf_evlist {TYPE_2__ pollfd; } ;
struct TYPE_3__ {void* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,short) ;

int FUNC_2(struct perf_evlist *VAR_4, int VAR_5,
       void *VAR_6, short VAR_7)
{
 int VAR_8 = FUNC_1(&VAR_4->pollfd, VAR_5, VAR_7 | VAR_2 | VAR_3);

 if (VAR_8 >= 0) {
  VAR_4->pollfd.priv[VAR_8].ptr = VAR_6;
  FUNC_0(VAR_5, VAR_0, VAR_1);
 }

 return VAR_8;
}
