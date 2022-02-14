
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_10__ {scalar_t__ data; scalar_t__ end; } ;
typedef TYPE_1__* STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static BOOL
FUNC_7(RDPCLIENT * VAR_4, STREAM VAR_5)
{
 int VAR_6 = (uint16)(VAR_5->end - VAR_5->data);
 int VAR_7 = 9 + 3 * 34 + 4 + VAR_6;
 STREAM VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_7 + 5);

 if(VAR_8 == ((void*)0))
  return VAR_2;

 FUNC_0(VAR_8, VAR_3, VAR_7);
 FUNC_0(VAR_8, VAR_1, 1);
 FUNC_4(VAR_8, 1);
 FUNC_0(VAR_8, VAR_1, 1);
 FUNC_4(VAR_8, 1);

 FUNC_0(VAR_8, VAR_0, 1);
 FUNC_4(VAR_8, 0xff);

 FUNC_3(VAR_8, 34, 2, 0, 0xffff);
 FUNC_3(VAR_8, 1, 1, 1, 0x420);
 FUNC_3(VAR_8, 0xffff, 0xfc17, 0xffff, 0xffff);

 FUNC_0(VAR_8, VAR_1, VAR_6);
 FUNC_5(VAR_8, VAR_5->data, VAR_6);

 FUNC_6(VAR_8);
 return FUNC_2(VAR_4, VAR_8);
}
