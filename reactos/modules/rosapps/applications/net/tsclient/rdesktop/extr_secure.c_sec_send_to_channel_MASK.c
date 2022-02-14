
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_11__ {int rc4_key_len; int sign_key; } ;
struct TYPE_13__ {TYPE_1__ secure; int licence_issued; } ;
struct TYPE_12__ {int end; int p; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int VAR_1 ;
 int FUNC_6 (int,int,int ,int ,int,int) ;

BOOL
FUNC_7(RDPCLIENT * VAR_2, STREAM VAR_3, uint32 VAR_4, uint16 VAR_5)
{
 int VAR_6;

 FUNC_4(VAR_3, VAR_1);
 if (!VAR_2->licence_issued || (VAR_4 & VAR_0))
  FUNC_3(VAR_3, VAR_4);

 if (VAR_4 & VAR_0)
 {
  VAR_4 &= ~VAR_0;
  VAR_6 = (int)(VAR_3->end - VAR_3->p - 8);






  FUNC_6(VAR_3->p, 8, VAR_2->secure.sign_key, VAR_2->secure.rc4_key_len, VAR_3->p + 8, VAR_6);
  FUNC_5(VAR_2, VAR_3->p + 8, VAR_6);
 }

 return FUNC_2(VAR_2, VAR_3, VAR_5);
}
