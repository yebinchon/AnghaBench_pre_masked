
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_6__ {int server_public_key_len; int * crypted_random; int * server_public_key; } ;
struct TYPE_7__ {TYPE_1__ secure; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int) ;
 int FUNC_8 (TYPE_2__*,int ,int*,int **,int **,int **) ;
 int FUNC_9 (int *,int *,int,int,int *,int *) ;

__attribute__((used)) static void
FUNC_10(RDPCLIENT * VAR_3, STREAM VAR_4)
{
 uint8 *VAR_5, *VAR_6, *VAR_7;
 uint8 VAR_8[VAR_2];
 uint32 VAR_9;

 if (!FUNC_8(VAR_3, VAR_4, &VAR_9, &VAR_5, &VAR_6, &VAR_7))
 {
  FUNC_0(("Failed to parse crypt info\n"));
  return;
 }

 FUNC_0(("Generating client random\n"));
 FUNC_3(VAR_8);

 if (((void*)0) != VAR_3->secure.server_public_key)
 {

  uint8 VAR_10[VAR_1];
  uint32 VAR_11 = VAR_3->secure.server_public_key_len - VAR_2;


  FUNC_5(VAR_10, 0, VAR_11);







  FUNC_4(VAR_10 + VAR_11, VAR_8, VAR_2);
  FUNC_6(VAR_10 + VAR_11, VAR_2);

  FUNC_2(VAR_3->secure.server_public_key_len,
       VAR_10, VAR_3->secure.crypted_random, VAR_3->secure.server_public_key, VAR_0);

  FUNC_6(VAR_3->secure.crypted_random, VAR_3->secure.server_public_key_len);

  FUNC_1(VAR_3->secure.server_public_key);
  VAR_3->secure.server_public_key = ((void*)0);
 }
 else
 {
  FUNC_9(VAR_3->secure.crypted_random,
    VAR_8, VAR_2, VAR_3->secure.server_public_key_len, VAR_6,
    VAR_7);
 }
 FUNC_7(VAR_3, VAR_8, VAR_5, VAR_9);
}
