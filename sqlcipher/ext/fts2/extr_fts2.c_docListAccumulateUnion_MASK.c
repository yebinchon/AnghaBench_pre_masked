
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nData; int pData; } ;
typedef TYPE_1__ DataBuffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,char const*,int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(DataBuffer *VAR_0,
                                   const char *VAR_1, int VAR_2) {
  DataBuffer VAR_3 = *VAR_0;
  FUNC_1(VAR_0, VAR_3.nData+VAR_2);
  FUNC_2(VAR_3.pData, VAR_3.nData, VAR_1, VAR_2, VAR_0);
  FUNC_0(&VAR_3);
}
