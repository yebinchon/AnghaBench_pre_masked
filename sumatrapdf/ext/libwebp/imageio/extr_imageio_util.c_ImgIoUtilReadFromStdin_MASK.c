
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*,int,size_t const,int ) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_7(const uint8_t** VAR_2, size_t* VAR_3) {
  static const size_t VAR_4 = 16384;
  size_t VAR_5 = 0;
  size_t VAR_6 = 0;
  uint8_t* VAR_7 = ((void*)0);

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) return 0;
  *VAR_2 = ((void*)0);
  *VAR_3 = 0;

  if (!FUNC_0(VAR_1)) return 0;

  while (!FUNC_1(VAR_1)) {

    const size_t VAR_8 = (VAR_5 == 0) ? VAR_4 : VAR_5;

    void* const VAR_9 = FUNC_6(VAR_7, VAR_5 + VAR_8 + 1);
    if (VAR_9 == ((void*)0)) goto Error;
    VAR_7 = (uint8_t*)VAR_9;
    VAR_5 += VAR_8;
    VAR_6 += FUNC_4(VAR_7 + VAR_6, 1, VAR_8, VAR_1);
    if (VAR_6 < VAR_5) break;
  }
  if (FUNC_2(VAR_1)) goto Error;
  if (VAR_7 != ((void*)0)) VAR_7[VAR_6] = '\0';
  *VAR_2 = VAR_7;
  *VAR_3 = VAR_6;
  return 1;

 Error:
  FUNC_5(VAR_7);
  FUNC_3(VAR_0, "Could not read from stdin\n");
  return 0;
}
