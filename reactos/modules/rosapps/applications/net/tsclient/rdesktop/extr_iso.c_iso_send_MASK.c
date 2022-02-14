
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_7__ {scalar_t__ p; scalar_t__ end; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

BOOL
FUNC_4(RDPCLIENT * VAR_2, STREAM VAR_3)
{
 uint16 VAR_4;

 FUNC_2(VAR_3, VAR_1);
 VAR_4 = (uint16)(VAR_3->end - VAR_3->p);

 FUNC_1(VAR_3, 3);
 FUNC_1(VAR_3, 0);
 FUNC_0(VAR_3, VAR_4);

 FUNC_1(VAR_3, 2);
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, 0x80);

 return FUNC_3(VAR_2, VAR_3);
}
