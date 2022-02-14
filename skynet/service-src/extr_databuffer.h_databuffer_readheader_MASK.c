
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct messagepool {int dummy; } ;
struct databuffer {int header; int size; } ;


 int FUNC_0 (struct databuffer*,struct messagepool*,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct databuffer *VAR_0, struct messagepool *VAR_1, int VAR_2) {
 if (VAR_0->header == 0) {

  if (VAR_0->size < VAR_2) {
   return -1;
  }
  uint8_t VAR_3[4];
  FUNC_0(VAR_0,VAR_1,(char *)VAR_3,VAR_2);

  if (VAR_2 == 2) {
   VAR_0->header = VAR_3[0] << 8 | VAR_3[1];
  } else {
   VAR_0->header = VAR_3[0] << 24 | VAR_3[1] << 16 | VAR_3[2] << 8 | VAR_3[3];
  }
 }
 if (VAR_0->size < VAR_0->header)
  return -1;
 return VAR_0->header;
}
