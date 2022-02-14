
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* release_cb ) (void*,int) ;void* cb_cookie; } ;
typedef TYPE_1__ TBuffer ;


 int FUNC_0 (TYPE_1__*,int,char const*) ;

void FUNC_1(TBuffer *VAR_0, int VAR_1, const char* VAR_2,
                   void (*VAR_3)(void* VAR_4, int VAR_5),
                   void* VAR_6) {

  FUNC_0(VAR_0, VAR_1, VAR_2);

  VAR_0->release_cb = VAR_3;
  VAR_0->cb_cookie = VAR_6;
}
