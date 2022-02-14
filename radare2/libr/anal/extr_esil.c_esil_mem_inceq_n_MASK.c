
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef void* ut64 ;
struct TYPE_9__ {int lastsz; void* cur; void* old; } ;
typedef TYPE_1__ RAnalEsil ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,void**) ;
 char* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,void*) ;

__attribute__((used)) static bool FUNC_8(RAnalEsil *VAR_0, int VAR_1) {
 bool VAR_2 = 0;
 ut64 VAR_3;
 char *VAR_4 = FUNC_5 (VAR_0);
 char *VAR_5 = ((void*)0);
 if (VAR_4) {
  FUNC_6 (VAR_0, VAR_4);
  VAR_2 = (!!FUNC_1 (VAR_0, VAR_1));
  VAR_5 = FUNC_5 (VAR_0);
  if (VAR_5 && FUNC_4 (VAR_0, VAR_5, &VAR_3)) {
   VAR_0->old = VAR_3;
   VAR_3++;
   VAR_0->cur = VAR_3;
   VAR_0->lastsz = VAR_1;
   FUNC_7 (VAR_0, VAR_3);
   FUNC_6 (VAR_0, VAR_4);
   VAR_2 &= (!!FUNC_2 (VAR_0, VAR_1));
  } else {
   VAR_2 = 0;
  }
 }
 if (!VAR_2) {
  FUNC_0 ("esil_mem_inceq_n: invalid parameters");
 }
 FUNC_3 (VAR_5);
 FUNC_3 (VAR_4);
 return VAR_2;
}
