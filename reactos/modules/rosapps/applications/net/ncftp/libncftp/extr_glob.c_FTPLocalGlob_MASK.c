
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int string ;
typedef int pattern2 ;
struct TYPE_5__ {int magic; } ;
typedef int * LineListPtr ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ,int ) ;

int
FUNC_8(FTPCIPtr VAR_4, LineListPtr VAR_5, const char *VAR_6, int VAR_7)
{
 string VAR_8;
 int VAR_9;

 if (VAR_4 == ((void*)0))
  return (VAR_1);
 if (FUNC_7(VAR_4->magic, VAR_2))
  return (VAR_0);

 if (VAR_5 == ((void*)0))
  return (VAR_1);
 FUNC_3(VAR_5);

 if ((VAR_6 == ((void*)0)) || (VAR_6[0] == '\0'))
  return (VAR_1);

 (void) FUNC_5(VAR_8, VAR_6);


 FUNC_1(VAR_8, sizeof(VAR_8));
 FUNC_3(VAR_5);
 VAR_9 = VAR_3;

 if ((VAR_7 == 1) && (FUNC_2(VAR_8))) {



  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_8);

 } else {



  (void) FUNC_0(VAR_5, VAR_8);
 }

 return (VAR_9);
}
