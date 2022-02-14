
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {long pad; int crc; int magic; } ;
typedef TYPE_1__ signature_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(void* VAR_2, u_int32_t VAR_3)
{

 signature_t* VAR_4 = (signature_t*)(VAR_2 + VAR_3);
 FUNC_3(VAR_4, 0, sizeof(signature_t));

 FUNC_2(VAR_4->magic, VAR_0, VAR_1);
 VAR_4->crc = FUNC_1(FUNC_0(0L,(unsigned char *)VAR_2, VAR_3));
 VAR_4->pad = 0L;
}
