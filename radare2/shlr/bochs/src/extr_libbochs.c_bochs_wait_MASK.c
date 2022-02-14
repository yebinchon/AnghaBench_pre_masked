
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t punteroBuffer; int hReadPipeIn; int * data; } ;
typedef TYPE_1__ libbochs_t ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,int *,int,scalar_t__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int,...) ;
 scalar_t__* VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,scalar_t__*,int) ;
 int FUNC_7 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (int *,char*) ;

bool FUNC_9(libbochs_t *VAR_4) {
 int VAR_5,VAR_6;
 FUNC_3 (VAR_4);
 VAR_5 = FUNC_4 (VAR_4->hReadPipeIn, VAR_0, 0);
 (void) FUNC_4 (VAR_4->hReadPipeIn, (VAR_5 | VAR_1));
 for (;;) {
  VAR_6 = FUNC_7 (VAR_4->hReadPipeIn, VAR_3, VAR_2 - 1);
  if (VAR_6 > 0) {
   VAR_3[VAR_6] = 0;
   if (VAR_4->punteroBuffer + VAR_6 >= VAR_2 - 1) {
    FUNC_3(VAR_4);
   }

   FUNC_6 (VAR_4->data + VAR_4->punteroBuffer, VAR_3, VAR_6 + 1);
   VAR_4->punteroBuffer += VAR_6;
   if (FUNC_8 (&VAR_4->data[0], "<bochs:")) {
    break;
   }
  }
 }
 (void) FUNC_4 (VAR_4->hReadPipeIn, (VAR_5 | ~VAR_1));
 return 1;

}
