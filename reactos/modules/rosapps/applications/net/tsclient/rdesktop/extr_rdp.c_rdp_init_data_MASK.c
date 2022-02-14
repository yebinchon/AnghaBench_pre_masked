
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ encryption; } ;
typedef int * STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static STREAM
FUNC_2(RDPCLIENT * VAR_2, int VAR_3)
{
 STREAM VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_2->encryption ? VAR_0 : 0, VAR_3 + 18);

 if(VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_4, VAR_1, 18);

 return VAR_4;
}
