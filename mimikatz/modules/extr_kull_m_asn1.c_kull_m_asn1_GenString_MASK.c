
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; int Buffer; } ;
typedef int PCUNICODE_STRING ;
typedef int BerElement ;
typedef TYPE_1__ ANSI_STRING ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int ,int ,int ) ;

void FUNC_4(BerElement * VAR_2, PCUNICODE_STRING VAR_3)
{
 ANSI_STRING VAR_4;
 if(FUNC_0(FUNC_2(&VAR_4, VAR_3, VAR_1)))
 {
  FUNC_3(VAR_2, "to", VAR_0, VAR_4.Buffer, VAR_4.Length);
  FUNC_1(&VAR_4);
 }
}
