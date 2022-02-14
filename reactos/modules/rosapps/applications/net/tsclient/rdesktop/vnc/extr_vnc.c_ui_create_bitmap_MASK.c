
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ vncBuffer ;
typedef int uint8 ;
typedef int HBITMAP ;


 int FUNC_0 (int ,int *,int) ;
 TYPE_1__* FUNC_1 (int,int,int) ;

HBITMAP
FUNC_2(int VAR_0, int VAR_1, uint8 * VAR_2)
{
 vncBuffer *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 8);
 FUNC_0(VAR_3->data, VAR_2, VAR_0 * VAR_1);

 return (HBITMAP) VAR_3;
}
