
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_13__ {int mcs_userid; scalar_t__ encryption; int rdp_shareid; } ;
struct TYPE_12__ {scalar_t__ p; scalar_t__ end; } ;
typedef TYPE_1__* STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static BOOL
FUNC_6(RDPCLIENT * VAR_3, STREAM VAR_4, uint8 VAR_5)
{
 uint16 VAR_6;

 FUNC_4(VAR_4, VAR_2);
 VAR_6 = (uint16)(VAR_4->end - VAR_4->p);

 FUNC_1(VAR_4, VAR_6);
 FUNC_1(VAR_4, (VAR_0 | 0x10));
 FUNC_1(VAR_4, (VAR_3->mcs_userid + 1001));

 FUNC_2(VAR_4, VAR_3->rdp_shareid);
 FUNC_3(VAR_4, 0);
 FUNC_3(VAR_4, 1);
 FUNC_1(VAR_4, (VAR_6 - 14));
 FUNC_3(VAR_4, VAR_5);
 FUNC_3(VAR_4, 0);
 FUNC_0(VAR_4, 0);

 return FUNC_5(VAR_3, VAR_4, VAR_3->encryption ? VAR_1 : 0);
}
