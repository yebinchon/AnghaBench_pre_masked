
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rc; char* zErr; } ;
typedef TYPE_1__ Error ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2(Error *VAR_0, int VAR_1){
  VAR_0->rc = VAR_1;
  VAR_0->zErr = (char *)FUNC_0(512);
  FUNC_1(VAR_1, VAR_0->zErr, 512);
  VAR_0->zErr[511] = '\0';
}
