
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * memory; } ;
typedef TYPE_1__ WebPDecParams ;
struct TYPE_5__ {scalar_t__ opaque; } ;
typedef TYPE_2__ VP8Io ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const VP8Io* VAR_0) {
  WebPDecParams* const VAR_1 = (WebPDecParams*)VAR_0->opaque;
  FUNC_0(VAR_1->memory);
  VAR_1->memory = ((void*)0);
}
