
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int sealed_buffer ;
struct TYPE_6__ {int key; int sign_key; } ;
struct TYPE_7__ {TYPE_1__ licence; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int RC4_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ,int **,int **) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int,int ,int,int *,int) ;

__attribute__((used)) static void
FUNC_7(RDPCLIENT * VAR_3, STREAM VAR_4)
{
 uint8 *VAR_5, *VAR_6;
 uint8 VAR_7[VAR_2], VAR_8[VAR_2];
 uint8 VAR_9[VAR_0], VAR_10[VAR_0];
 uint8 VAR_11[VAR_2 + VAR_0];
 uint8 VAR_12[VAR_1];
 RC4_KEY VAR_13;


 FUNC_3(VAR_4, &VAR_5, &VAR_6);
 FUNC_5(VAR_7, VAR_5, VAR_2);


 FUNC_1(&VAR_13, 16, VAR_3->licence.key);
 FUNC_0(&VAR_13, VAR_2, VAR_5, VAR_8);


 FUNC_2(VAR_3, VAR_9);
 FUNC_5(VAR_11, VAR_8, VAR_2);
 FUNC_5(VAR_11 + VAR_2, VAR_9, VAR_0);
 FUNC_6(VAR_12, 16, VAR_3->licence.sign_key, 16, VAR_11, sizeof(VAR_11));


 FUNC_1(&VAR_13, 16, VAR_3->licence.key);
 FUNC_0(&VAR_13, VAR_0, VAR_9, VAR_10);

 FUNC_4(VAR_3, VAR_7, VAR_10, VAR_12);
}
