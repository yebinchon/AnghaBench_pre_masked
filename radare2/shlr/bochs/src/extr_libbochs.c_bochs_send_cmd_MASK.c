
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hWritePipeOut; } ;
typedef TYPE_1__ libbochs_t ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,size_t,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*) ;
 size_t FUNC_6 (char*) ;
 size_t FUNC_7 (int ,char*,size_t) ;

void FUNC_8(libbochs_t* VAR_0, const char *VAR_1, bool VAR_2) {
 char *VAR_3 = FUNC_5 ("%s\n", VAR_1);
 FUNC_1 (VAR_0);






 size_t VAR_4 = FUNC_6 (VAR_3);
 if (FUNC_7 (VAR_0->hWritePipeOut, VAR_3, VAR_4) != VAR_4) {
  FUNC_3 ("boch_send_cmd failed\n");
  goto beach;
 }

 if (VAR_2)
  FUNC_2 (VAR_0);
beach:
 FUNC_4 (VAR_3);
}
