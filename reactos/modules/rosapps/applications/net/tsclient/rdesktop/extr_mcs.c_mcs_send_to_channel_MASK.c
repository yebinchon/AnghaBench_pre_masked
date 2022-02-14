
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_11__ {int mcs_userid; } ;
struct TYPE_10__ {int end; int p; } ;
typedef TYPE_1__* STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

BOOL
FUNC_4(RDPCLIENT * VAR_2, STREAM VAR_3, uint16 VAR_4)
{
 uint16 VAR_5;

 FUNC_3(VAR_3, VAR_1);
 VAR_5 = (uint16)(VAR_3->end - VAR_3->p - 8);
 VAR_5 |= 0x8000;

 FUNC_2(VAR_3, (VAR_0 << 2));
 FUNC_1(VAR_3, VAR_2->mcs_userid);
 FUNC_1(VAR_3, VAR_4);
 FUNC_2(VAR_3, 0x70);
 FUNC_1(VAR_3, VAR_5);

 return FUNC_0(VAR_2, VAR_3);
}
