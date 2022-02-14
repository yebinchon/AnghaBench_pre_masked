
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int smart_str ;
typedef TYPE_2__* encodePtr ;
struct TYPE_4__ {int sdl_type; int ns; int type_str; int type; } ;
struct TYPE_5__ {TYPE_1__ details; } ;
typedef int HashTable ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(encodePtr VAR_0, HashTable *VAR_1, smart_str *VAR_2)
{
 FUNC_0(VAR_0->details.type, VAR_2);
 FUNC_1(VAR_0->details.type_str, VAR_2);
 FUNC_1(VAR_0->details.ns, VAR_2);
 FUNC_2(VAR_0->details.sdl_type, VAR_1, VAR_2);
}
