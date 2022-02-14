
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8 ;
typedef int os_event_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,size_t,int *,size_t) ;
 int ** VAR_1 ;
 int VAR_2 ;

bool FUNC_3(uint8 VAR_3, uint8 VAR_4) {
  if (VAR_3 <= VAR_0 && VAR_1[VAR_3] == ((void*)0)) {
    VAR_1[VAR_3] = (os_event_t *) FUNC_0( sizeof(os_event_t)*VAR_4 );
    FUNC_1 (VAR_1[VAR_3], 0, sizeof(os_event_t)*VAR_4);
    if (VAR_1[VAR_3]) {
      return FUNC_2( VAR_2, VAR_3, VAR_1[VAR_3], VAR_4 );
    }
  }
  return 0;
}
