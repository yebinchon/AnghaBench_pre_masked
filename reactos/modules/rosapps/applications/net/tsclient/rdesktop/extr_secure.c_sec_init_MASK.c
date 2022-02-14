
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int licence_issued; } ;
typedef int * STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_1 ;

STREAM
FUNC_2(RDPCLIENT * VAR_2, uint32 VAR_3, int VAR_4)
{
 int VAR_5;
 STREAM VAR_6;

 if (!VAR_2->licence_issued)
  VAR_5 = (VAR_3 & VAR_0) ? 12 : 4;
 else
  VAR_5 = (VAR_3 & VAR_0) ? 12 : 0;
 VAR_6 = FUNC_0(VAR_2, VAR_4 + VAR_5);

 if(VAR_6 == ((void*)0))
  return VAR_6;

 FUNC_1(VAR_6, VAR_1, VAR_5);

 return VAR_6;
}
