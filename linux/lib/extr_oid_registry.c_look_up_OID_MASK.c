
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum OID { ____Placeholder_OID } OID ;
struct TYPE_2__ {unsigned char hash; int oid; } ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 size_t* VAR_2 ;
 TYPE_1__* VAR_3 ;

enum OID FUNC_0(const void *VAR_4, size_t VAR_5)
{
 const unsigned char *VAR_6 = VAR_4;
 enum OID VAR_7;
 unsigned char VAR_8;
 unsigned VAR_9, VAR_10, VAR_11, VAR_12;
 size_t VAR_13;


 VAR_12 = VAR_5 - 1;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_12 += VAR_6[VAR_9] * 33;
 VAR_12 = (VAR_12 >> 24) ^ (VAR_12 >> 16) ^ (VAR_12 >> 8) ^ VAR_12;
 VAR_12 &= 0xff;





 VAR_9 = 0;
 VAR_11 = VAR_0;
 while (VAR_9 < VAR_11) {
  VAR_10 = (VAR_9 + VAR_11) / 2;

  VAR_8 = VAR_3[VAR_10].hash;
  if (VAR_8 > VAR_12) {
   VAR_11 = VAR_10;
   continue;
  }
  if (VAR_8 < VAR_12) {
   VAR_9 = VAR_10 + 1;
   continue;
  }

  VAR_7 = VAR_3[VAR_10].oid;
  VAR_13 = VAR_2[VAR_7 + 1] - VAR_2[VAR_7];
  if (VAR_13 > VAR_5) {
   VAR_11 = VAR_10;
   continue;
  }
  if (VAR_13 < VAR_5) {
   VAR_9 = VAR_10 + 1;
   continue;
  }




  while (VAR_13 > 0) {
   unsigned char VAR_14 = VAR_1[VAR_2[VAR_7] + --VAR_13];
   unsigned char VAR_15 = VAR_6[VAR_13];
   if (VAR_14 > VAR_15) {
    VAR_11 = VAR_10;
    goto next;
   }
   if (VAR_14 < VAR_15) {
    VAR_9 = VAR_10 + 1;
    goto next;
   }
  }
  return VAR_7;
 next:
  ;
 }

 return VAR_0;
}
