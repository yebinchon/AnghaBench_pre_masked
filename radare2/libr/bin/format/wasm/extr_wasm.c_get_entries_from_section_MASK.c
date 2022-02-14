
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_6__ {int * buf; } ;
struct TYPE_5__ {scalar_t__ payload_len; scalar_t__ count; int name; int payload_data; } ;
typedef int (* RListFree ) (void*) ;
typedef int RList ;
typedef int RBuffer ;
typedef TYPE_1__ RBinWasmSection ;
typedef TYPE_2__ RBinWasmObj ;
typedef void* (* ParseEntryFcn ) (int *,scalar_t__) ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int * FUNC_5 (int (*) (void*)) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static RList *FUNC_7 (RBinWasmObj *VAR_1, RBinWasmSection *VAR_2, ParseEntryFcn VAR_3, RListFree VAR_4) {
 FUNC_6 (VAR_2 && VAR_1, ((void*)0));

 RList *VAR_5 = FUNC_5 (VAR_4);
 if (!VAR_5) {
  return ((void*)0);
 }
 RBuffer *VAR_6 = VAR_1->buf;
 FUNC_1 (VAR_6, VAR_2->payload_data, VAR_0);
 ut32 VAR_7 = 0;
 ut64 VAR_8 = FUNC_3 (VAR_6) + VAR_2->payload_len - 1;
 if (!(VAR_8 < FUNC_2 (VAR_6))) {
  goto beach;
 }
 while (FUNC_3 (VAR_6) <= VAR_8 && VAR_7 < VAR_2->count) {
  void *VAR_9 = VAR_3 (VAR_6, VAR_8);
  if (!VAR_9) {
   goto beach;
  }

  if (!FUNC_4 (VAR_5, VAR_9)) {
   VAR_4 (VAR_9);

  }
  VAR_7++;
 }
 return VAR_5;
beach:
 FUNC_0 ("[wasm] error: beach reading entries for section %s\n", VAR_2->name);
 return VAR_5;
}
