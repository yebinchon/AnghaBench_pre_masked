
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int write_flag; scalar_t__ cntr; TYPE_2__* ptrbuf; } ;
struct TYPE_10__ {TYPE_1__ pcommon; int ssl; struct TYPE_10__* pssl; } ;
typedef TYPE_2__ uint8 ;
typedef int uint32 ;
typedef scalar_t__ uint16 ;
typedef TYPE_2__* pmbedtls_msg ;
typedef TYPE_2__ espconn_msg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,TYPE_2__*,scalar_t__) ;

void FUNC_4(void *VAR_5, uint8 *VAR_6, uint16 VAR_7)
{
 espconn_msg *VAR_8 = VAR_5;
 uint16 VAR_9 = VAR_7;
 int VAR_10 = VAR_0;
 FUNC_1(VAR_8);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 pmbedtls_msg VAR_11 = VAR_8->pssl;
 FUNC_1(VAR_11);

 if (VAR_7 > VAR_2){
  VAR_9 = VAR_2;
 }

 VAR_8->pcommon.write_flag = 1;
 VAR_10 = FUNC_3(&VAR_11->ssl, VAR_6, VAR_9);
 if (VAR_10 > 0){
  VAR_8->pcommon.ptrbuf = VAR_6 + VAR_10;
  VAR_8->pcommon.cntr = VAR_7 - VAR_10;
 } else{
  if (VAR_10 == VAR_1 || VAR_10 == 0) {

  } else{
   FUNC_2(VAR_8, VAR_10);
   FUNC_0(VAR_4, VAR_3,(uint32)VAR_8);
  }
 }

}
