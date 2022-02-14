
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_6__ {scalar_t__ server_public_key_len; int crypted_random; } ;
struct TYPE_7__ {TYPE_1__ secure; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_2)
{
 uint32 VAR_3 = VAR_2->secure.server_public_key_len + VAR_1;
 uint32 VAR_4 = VAR_0;
 STREAM VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_3 + 4);

 FUNC_0(VAR_5, VAR_3);
 FUNC_1(VAR_5, VAR_2->secure.crypted_random, VAR_2->secure.server_public_key_len);
 FUNC_2(VAR_5, VAR_1);

 FUNC_3(VAR_5);
 FUNC_5(VAR_2, VAR_5, VAR_4);
}
