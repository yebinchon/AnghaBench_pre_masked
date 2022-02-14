
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int count; } ;
struct TYPE_10__ {TYPE_1__ step; } ;
struct TYPE_11__ {TYPE_2__ run; } ;
struct TYPE_12__ {TYPE_3__ pkt; } ;
struct TYPE_13__ {TYPE_4__ tran; } ;
typedef TYPE_5__ libqnxr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int,int) ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;

int FUNC_2 (libqnxr_t *VAR_4, int VAR_5, int VAR_6) {
 if (!VAR_4) return -1;

 FUNC_1 (VAR_4, VAR_2, VAR_5 ? VAR_1 : VAR_0,
         VAR_3);
 VAR_4->tran.pkt.run.step.count = 1;
 FUNC_0 (VAR_4, sizeof (VAR_4->tran.pkt.run), 1);
 return 0;
}
