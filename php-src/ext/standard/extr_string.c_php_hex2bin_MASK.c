
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static zend_string *FUNC_4(const unsigned char *VAR_0, const size_t VAR_1)
{
 size_t VAR_2 = VAR_1 >> 1;
 zend_string *VAR_3 = FUNC_2(VAR_2, 0);
 unsigned char *VAR_4 = (unsigned char *)FUNC_1(VAR_3);
 size_t VAR_5, VAR_6;

 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_2; VAR_5++) {
  unsigned char VAR_7 = VAR_0[VAR_6++];
  unsigned char VAR_8 = VAR_7 & ~0x20;
  int VAR_9 = ((unsigned int) ((VAR_8 - 'A') ^ (VAR_8 - 'F' - 1))) >> (8 * sizeof(unsigned int) - 1);
  unsigned char VAR_10;


  if (FUNC_0((((VAR_7 ^ '0') - 10) >> (8 * sizeof(unsigned int) - 1)) | VAR_9)) {
   VAR_10 = (VAR_8 - 0x10 - 0x27 * VAR_9) << 4;
  } else {
   FUNC_3(VAR_3);
   return ((void*)0);
  }
  VAR_7 = VAR_0[VAR_6++];
  VAR_8 = VAR_7 & ~0x20;
  VAR_9 = ((unsigned int) ((VAR_8 - 'A') ^ (VAR_8 - 'F' - 1))) >> (8 * sizeof(unsigned int) - 1);
  if (FUNC_0((((VAR_7 ^ '0') - 10) >> (8 * sizeof(unsigned int) - 1)) | VAR_9)) {
   VAR_10 |= VAR_8 - 0x10 - 0x27 * VAR_9;
  } else {
   FUNC_3(VAR_3);
   return ((void*)0);
  }
  VAR_4[VAR_5] = VAR_10;
 }
 VAR_4[VAR_5] = '\0';

 return VAR_3;
}
