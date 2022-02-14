
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sproto {int memory; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static const char *
FUNC_3(struct sproto *VAR_1, const uint8_t * VAR_2) {
 uint32_t VAR_3 = FUNC_2(VAR_2);
 char * VAR_4 = FUNC_1(&VAR_1->memory, VAR_3+1);
 FUNC_0(VAR_4, VAR_2+VAR_0, VAR_3);
 VAR_4[VAR_3] = '\0';
 return VAR_4;
}
