
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,...) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline void FUNC_2(uint8_t **VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_1) + 1;

 FUNC_0(*VAR_0, &VAR_2, sizeof(size_t));
 *VAR_0 += sizeof(size_t);
 FUNC_0(*VAR_0, VAR_1, VAR_2);
 *VAR_0 += VAR_2;
}
