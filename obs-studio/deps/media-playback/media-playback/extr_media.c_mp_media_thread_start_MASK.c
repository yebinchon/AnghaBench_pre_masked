
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opaque; int (* stop_cb ) (int ) ;} ;
typedef TYPE_1__ mp_media_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(void *VAR_0)
{
 mp_media_t *VAR_1 = VAR_0;

 if (!FUNC_0(VAR_1)) {
  if (VAR_1->stop_cb) {
   VAR_1->stop_cb(VAR_1->opaque);
  }
 }

 return ((void*)0);
}
