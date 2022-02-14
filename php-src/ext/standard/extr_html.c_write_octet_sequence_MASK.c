
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum entity_charset { ____Placeholder_entity_charset } entity_charset ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (unsigned char*,unsigned int) ;
 size_t FUNC_2 (unsigned char*,unsigned int) ;

__attribute__((used)) static inline size_t FUNC_3(unsigned char *VAR_0, enum entity_charset VAR_1, unsigned VAR_2) {

 switch (VAR_1) {
 case 128:
  return FUNC_2(VAR_0, VAR_2);

 case 141:
 case 135:
 case 140:
 case 131:
 case 136:
 case 139:
 case 134:
 case 130:

  *VAR_0 = VAR_2;
  return 1;

 case 138:
 case 137:
 case 129:
 case 132:
  *VAR_0 = VAR_2;
  return 1;


 case 133:






  *VAR_0 = VAR_2;
  return 1;


 default:
  FUNC_0(0);
  return 0;
 }
}
