
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {int * buf; } ;
struct TYPE_5__ {scalar_t__ payload_data; scalar_t__ payload_len; } ;
typedef int RList ;
typedef int RBuffer ;
typedef TYPE_1__ RBinWasmSection ;
typedef TYPE_2__ RBinWasmObj ;
typedef int RBinWasmCustomNameEntry ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;

__attribute__((used)) static RList *FUNC_7 (RBinWasmObj *VAR_1, RBinWasmSection *VAR_2) {
 RList *VAR_3 = FUNC_6 ();

 RBuffer *VAR_4 = VAR_1->buf;

 FUNC_1 (VAR_4, VAR_2->payload_data, VAR_0);
 ut64 VAR_5 = VAR_2->payload_data + VAR_2->payload_len - 1;

 if (VAR_5 > FUNC_2 (VAR_4)) {
  goto beach;
 }

 while (FUNC_3 (VAR_4) < VAR_5) {
  RBinWasmCustomNameEntry *VAR_6 = FUNC_0 (VAR_4, VAR_5);

  if (!VAR_6) {
   goto beach;
  }

  if (!FUNC_4 (VAR_3, VAR_6)) {
   goto beach;
  }
 }

 return VAR_3;
beach:
 FUNC_5 (VAR_3);
 return ((void*)0);
}
