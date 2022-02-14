
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int trgm ;
struct TYPE_5__ {int flag; } ;
typedef TYPE_1__ TRGM ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,char*,int,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*,int,int,int ) ;
 int FUNC_7 (scalar_t__,int,int,int ) ;

TRGM *
FUNC_8(char *VAR_3, int VAR_4)
{
 TRGM *VAR_5;
 int VAR_6;

 FUNC_5(VAR_4);

 VAR_5 = (TRGM *) FUNC_4(VAR_1 + sizeof(trgm) * (VAR_4 / 2 + 1) * 3);
 VAR_5->flag = VAR_0;

 VAR_6 = FUNC_3(FUNC_1(VAR_5), VAR_3, VAR_4, ((void*)0));
 FUNC_2(VAR_5, FUNC_0(VAR_0, VAR_6));

 if (VAR_6 == 0)
  return VAR_5;




 if (VAR_6 > 1)
 {
  FUNC_6((void *) FUNC_1(VAR_5), VAR_6, sizeof(trgm), VAR_2);
  VAR_6 = FUNC_7(FUNC_1(VAR_5), VAR_6, sizeof(trgm), VAR_2);
 }

 FUNC_2(VAR_5, FUNC_0(VAR_0, VAR_6));

 return VAR_5;
}
