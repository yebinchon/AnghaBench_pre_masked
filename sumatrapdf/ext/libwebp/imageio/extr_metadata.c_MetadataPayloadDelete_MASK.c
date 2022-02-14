
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; int * bytes; } ;
typedef TYPE_1__ MetadataPayload ;


 int FUNC_0 (int *) ;

void FUNC_1(MetadataPayload* const VAR_0) {
  if (VAR_0 == ((void*)0)) return;
  FUNC_0(VAR_0->bytes);
  VAR_0->bytes = ((void*)0);
  VAR_0->size = 0;
}
