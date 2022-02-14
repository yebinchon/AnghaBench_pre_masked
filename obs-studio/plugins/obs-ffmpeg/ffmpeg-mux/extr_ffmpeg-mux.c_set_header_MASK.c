
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct header {int size; int data; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_2(struct header *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 VAR_0->size = (int)VAR_2;
 VAR_0->data = FUNC_0(VAR_2);
 FUNC_1(VAR_0->data, VAR_1, VAR_2);
}
