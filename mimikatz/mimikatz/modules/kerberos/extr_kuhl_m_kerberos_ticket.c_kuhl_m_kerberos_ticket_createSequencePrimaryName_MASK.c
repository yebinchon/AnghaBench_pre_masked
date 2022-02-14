
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ber_int_t ;
typedef size_t USHORT ;
struct TYPE_3__ {size_t NameCount; int * Names; int NameType; } ;
typedef TYPE_1__* PKERB_EXTERNAL_NAME ;
typedef int BerElement ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(BerElement * VAR_2, PKERB_EXTERNAL_NAME VAR_3)
{
 ber_int_t VAR_4 = VAR_3->NameType;
 USHORT VAR_5;
 FUNC_1(VAR_2, "{t{i}t{{", FUNC_0(VAR_1), VAR_4, FUNC_0(VAR_0));
 for(VAR_5 = 0; VAR_5 < VAR_3->NameCount; VAR_5++)
  FUNC_2(VAR_2, &VAR_3->Names[VAR_5]);
 FUNC_1(VAR_2, "}}}");
}
