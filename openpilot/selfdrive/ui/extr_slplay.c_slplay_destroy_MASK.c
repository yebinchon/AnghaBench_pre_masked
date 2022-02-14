
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__** player; int * uri; } ;
typedef TYPE_1__ uri_player ;
struct TYPE_11__ {int (* Destroy ) (TYPE_4__**) ;} ;
struct TYPE_10__ {int (* Destroy ) (TYPE_3__**) ;} ;
struct TYPE_9__ {int (* Destroy ) (TYPE_2__**) ;} ;


 TYPE_2__** VAR_0 ;
 TYPE_3__** VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (TYPE_2__**) ;

void FUNC_3() {
  for (uri_player *VAR_3 = VAR_2; VAR_3->uri != ((void*)0); VAR_3++) {
    if (VAR_3->player) {
      (*(VAR_3->player))->Destroy(VAR_3->player);
    }
  }

  (*VAR_1)->Destroy(VAR_1);
  (*VAR_0)->Destroy(VAR_0);
}
