
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int* count; int const* buffer; int state; } ;
typedef TYPE_1__ R_MD5_CTX ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (void*,void*,int) ;

void FUNC_2(R_MD5_CTX *VAR_0, const ut8 *VAR_1, ut32 VAR_2) {
 ut32 VAR_3;


 ut32 VAR_4 = (ut32)((VAR_0->count[0] >> 3) & 0x3F);


 if ((VAR_0->count[0] += ((ut32)VAR_2 << 3)) < ((ut32)VAR_2 << 3)) {
  VAR_0->count[1]++;
 }
 VAR_0->count[1] += ((ut32)VAR_2 >> 29);

 ut32 VAR_5 = 64 - VAR_4;


 if (VAR_2 >= VAR_5) {
  FUNC_1 ((void*)&VAR_0->buffer[VAR_4], (void*)VAR_1, VAR_5);
  FUNC_0 (VAR_0->state, VAR_0->buffer);
  for (VAR_3 = VAR_5; VAR_3 + 63 < VAR_2; VAR_3 += 64) {
   FUNC_0 (VAR_0->state, &VAR_1[VAR_3]);
  }
  VAR_4 = 0;
 } else {
  VAR_3 = 0;
 }

 FUNC_1 ((void*)&VAR_0->buffer[VAR_4], (void*)&VAR_1[VAR_3], VAR_2 - VAR_3);
}
