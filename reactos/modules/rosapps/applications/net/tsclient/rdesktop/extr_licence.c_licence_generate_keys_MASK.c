
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int key; int sign_key; } ;
struct TYPE_5__ {TYPE_1__ licence; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,char) ;

__attribute__((used)) static void
FUNC_3(RDPCLIENT * VAR_0, uint8 * VAR_1, uint8 * VAR_2, uint8 * VAR_3)
{
 uint8 VAR_4[48];
 uint8 VAR_5[48];


 FUNC_2(VAR_4, VAR_3, VAR_1, VAR_2, 'A');
 FUNC_2(VAR_5, VAR_4, VAR_2, VAR_1, 'A');


 FUNC_0(VAR_0->licence.sign_key, VAR_5, 16);


 FUNC_1(VAR_0->licence.key, &VAR_5[16], VAR_1, VAR_2);
}
