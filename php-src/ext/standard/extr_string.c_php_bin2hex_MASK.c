
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 char* FUNC_0 (int *) ;
 char* VAR_0 ;
 int * FUNC_1 (size_t const,int,int ,int ) ;

__attribute__((used)) static zend_string *FUNC_2(const unsigned char *VAR_1, const size_t VAR_2)
{
 zend_string *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = FUNC_1(VAR_2, 2 * sizeof(char), 0, 0);

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(VAR_3)[VAR_5++] = VAR_0[VAR_1[VAR_4] >> 4];
  FUNC_0(VAR_3)[VAR_5++] = VAR_0[VAR_1[VAR_4] & 15];
 }
 FUNC_0(VAR_3)[VAR_5] = '\0';

 return VAR_3;
}
