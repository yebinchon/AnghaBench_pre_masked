
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* encodePtr ;
typedef int encode ;
struct TYPE_7__ {scalar_t__ sdl_type; void* ns; void* type_str; } ;
struct TYPE_8__ {TYPE_1__ details; } ;
typedef int HashTable ;


 int FUNC_0 (scalar_t__*,int *,int *) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static encodePtr FUNC_4(encodePtr VAR_0, HashTable *VAR_1, HashTable *VAR_2, HashTable *VAR_3)
{
 encodePtr VAR_4 = ((void*)0);

 VAR_4 = FUNC_1(sizeof(encode));
 FUNC_2(VAR_4, 0, sizeof(encode));

 *VAR_4 = *VAR_0;

 if (VAR_4->details.type_str) {
  VAR_4->details.type_str = FUNC_3(VAR_4->details.type_str);
 }
 if (VAR_4->details.ns) {
  VAR_4->details.ns = FUNC_3(VAR_4->details.ns);
 }

 if (VAR_4->details.sdl_type) {
  FUNC_0(&VAR_4->details.sdl_type, VAR_1, VAR_2);
 }

 return VAR_4;
}
