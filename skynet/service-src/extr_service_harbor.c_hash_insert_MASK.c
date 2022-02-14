
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct keyvalue {size_t hash; scalar_t__ value; int * queue; struct keyvalue* next; int key; } ;
struct hashmap {struct keyvalue** node; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char const*,int ) ;
 struct keyvalue* FUNC_1 (int) ;

__attribute__((used)) static struct keyvalue *
FUNC_2(struct hashmap * VAR_2, const char VAR_3[VAR_0]) {
 uint32_t *VAR_4 = (uint32_t *)VAR_3;
 uint32_t VAR_5 = VAR_4[0] ^ VAR_4[1] ^ VAR_4[2] ^ VAR_4[3];
 struct keyvalue ** VAR_6 = &VAR_2->node[VAR_5 % VAR_1];
 struct keyvalue * VAR_7 = FUNC_1(sizeof(*VAR_7));
 FUNC_0(VAR_7->key, VAR_3, VAR_0);
 VAR_7->next = *VAR_6;
 VAR_7->queue = ((void*)0);
 VAR_7->hash = VAR_5;
 VAR_7->value = 0;
 *VAR_6 = VAR_7;

 return VAR_7;
}
