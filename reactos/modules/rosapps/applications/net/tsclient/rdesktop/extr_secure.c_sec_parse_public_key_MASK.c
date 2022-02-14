
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ server_public_key_len; } ;
struct TYPE_5__ {TYPE_1__ secure; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL
FUNC_5(RDPCLIENT * VAR_5, STREAM VAR_6, uint8 ** VAR_7, uint8 ** VAR_8)
{
 uint32 VAR_9, VAR_10;

 FUNC_1(VAR_6, VAR_9);
 if (VAR_9 != VAR_4)
 {
  FUNC_0("RSA magic 0x%x\n", VAR_9);
  return VAR_0;
 }

 FUNC_1(VAR_6, VAR_10);
 VAR_10 -= VAR_3;
 if ((VAR_10 < 64) || (VAR_10 > VAR_2))
 {
  FUNC_0("Bad server public key size (%u bits)\n", VAR_10 * 8);
  return VAR_0;
 }

 FUNC_3(VAR_6, 8);
 FUNC_2(VAR_6, *VAR_8, VAR_1);
 FUNC_2(VAR_6, *VAR_7, VAR_10);
 FUNC_3(VAR_6, VAR_3);
 VAR_5->secure.server_public_key_len = VAR_10;

 return FUNC_4(VAR_6);
}
