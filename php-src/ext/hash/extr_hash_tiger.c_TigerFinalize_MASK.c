
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int passed; int length; int* buffer; int state; int passes; } ;
typedef TYPE_1__ PHP_TIGER_CTX ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,int*,int ) ;

__attribute__((used)) static inline void FUNC_3(PHP_TIGER_CTX *VAR_0)
{
 VAR_0->passed += (uint64_t) VAR_0->length << 3;

 VAR_0->buffer[VAR_0->length++] = 0x1;
 if (VAR_0->length % 8) {
  FUNC_1(&VAR_0->buffer[VAR_0->length], 0, 8-VAR_0->length%8);
  VAR_0->length += 8-VAR_0->length%8;
 }

 if (VAR_0->length > 56) {
  FUNC_1(&VAR_0->buffer[VAR_0->length], 0, 64 - VAR_0->length);
  FUNC_2(VAR_0->passes, ((uint64_t *) VAR_0->buffer), VAR_0->state);
  FUNC_1(VAR_0->buffer, 0, 56);
 } else {
  FUNC_1(&VAR_0->buffer[VAR_0->length], 0, 56 - VAR_0->length);
 }


 FUNC_0(&VAR_0->buffer[56], &VAR_0->passed, sizeof(uint64_t));
 FUNC_2(VAR_0->passes, ((uint64_t *) VAR_0->buffer), VAR_0->state);
}
