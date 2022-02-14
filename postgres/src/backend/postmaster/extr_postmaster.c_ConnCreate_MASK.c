
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pg_gssinfo ;
struct TYPE_5__ {scalar_t__ sock; int * gss; } ;
typedef TYPE_1__ Port ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static Port *
FUNC_8(int VAR_4)
{
 Port *VAR_5;

 if (!(VAR_5 = (Port *) FUNC_4(1, sizeof(Port))))
 {
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("out of memory")));
  FUNC_1(1);
 }

 if (FUNC_3(VAR_4, VAR_5) != VAR_3)
 {
  if (VAR_5->sock != VAR_2)
   FUNC_2(VAR_5->sock);
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 return VAR_5;
}
