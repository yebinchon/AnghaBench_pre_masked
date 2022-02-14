
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct func_hook {int started; scalar_t__ type; scalar_t__ func_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct func_hook*,scalar_t__*,intptr_t) ;
 int FUNC_2 (struct func_hook*,intptr_t) ;
 int FUNC_3 (struct func_hook*,scalar_t__*) ;
 int FUNC_4 (struct func_hook*,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_5(struct func_hook *VAR_4, bool VAR_5, intptr_t VAR_6)
{
 FUNC_0((void *)(VAR_4->func_addr - VAR_1),
   VAR_1 * 2);

 if (VAR_5 || !VAR_4->started) {
  uint8_t *VAR_7 = (uint8_t *)VAR_4->func_addr - VAR_1;
  size_t VAR_8 = 0;


  for (size_t VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   if (VAR_7[VAR_9] == VAR_3)
    VAR_8++;
  }

  if (VAR_8 == VAR_1 && VAR_7[5] == 0x8B && VAR_7[6] == 0xFF) {
   FUNC_4(VAR_4, VAR_7);

  } else if (VAR_7[0] == 0xE9 &&
      *(uint16_t *)&VAR_7[5] == VAR_2) {
   FUNC_3(VAR_4, VAR_7);

  } else if (VAR_7[5] == 0xE9) {
   FUNC_1(VAR_4, VAR_7, VAR_6);

  } else if (VAR_4->type != VAR_0) {
   VAR_4->type = VAR_0;
  }

  VAR_4->started = 1;
 }

 if (VAR_4->type == VAR_0) {
  FUNC_2(VAR_4, VAR_6);
 }
}
