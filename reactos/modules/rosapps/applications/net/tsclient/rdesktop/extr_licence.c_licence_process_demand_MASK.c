
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int null_data ;
typedef int hwid ;
struct TYPE_9__ {int key; int sign_key; } ;
struct TYPE_10__ {int licence_hostname; int licence_username; TYPE_1__ licence; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int RC4_KEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int *,int,int *,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int **) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int,int ,int,int *,int) ;

__attribute__((used)) static BOOL
FUNC_11(RDPCLIENT * VAR_6, STREAM VAR_7)
{
 uint8 VAR_8[VAR_3];
 uint8 *VAR_9;
 uint8 VAR_10[VAR_2];
 uint8 VAR_11[VAR_1];
 uint8 *VAR_12;
 int VAR_13;
 RC4_KEY VAR_14;


 FUNC_3(VAR_7, VAR_9, VAR_4);



 FUNC_9(VAR_8, 0, sizeof(VAR_8));
 FUNC_5(VAR_6, VAR_8, VAR_9, VAR_8);

 VAR_13 = FUNC_8(VAR_6, &VAR_12);
 if (VAR_13 > 0)
 {

  FUNC_4(VAR_6, VAR_11);
  FUNC_10(VAR_10, 16, VAR_6->licence.sign_key, 16, VAR_11, sizeof(VAR_11));


  FUNC_1(&VAR_14, 16, VAR_6->licence.key);
  FUNC_0(&VAR_14, sizeof(VAR_11), VAR_11, VAR_11);

  if(!FUNC_6(VAR_6, VAR_8, VAR_8, VAR_12, VAR_13, VAR_11, VAR_10))
   return VAR_0;

  FUNC_2(VAR_12);
  return VAR_5;
 }

 return FUNC_7(VAR_6, VAR_8, VAR_8, VAR_6->licence_username, VAR_6->licence_hostname);
}
