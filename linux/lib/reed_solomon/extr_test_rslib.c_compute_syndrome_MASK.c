
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct rs_control {struct rs_codec* codec; } ;
struct rs_codec {size_t* alpha_to; size_t* index_of; int nroots; int prim; int fcr; } ;


 size_t FUNC_0 (struct rs_codec*,size_t) ;

__attribute__((used)) static void FUNC_1(struct rs_control *VAR_0, uint16_t *VAR_1,
    int VAR_2, uint16_t *VAR_3)
{
 struct rs_codec *VAR_4 = VAR_0->codec;
 uint16_t *VAR_5 = VAR_4->alpha_to;
 uint16_t *VAR_6 = VAR_4->index_of;
 int VAR_7 = VAR_4->nroots;
 int VAR_8 = VAR_4->prim;
 int VAR_9 = VAR_4->fcr;
 int VAR_10, VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_3[VAR_10] = VAR_1[0];
  for (VAR_11 = 1; VAR_11 < VAR_2; VAR_11++) {
   if (VAR_3[VAR_10] == 0) {
    VAR_3[VAR_10] = VAR_1[VAR_11];
   } else {
    VAR_3[VAR_10] = VAR_1[VAR_11] ^
     VAR_5[FUNC_0(VAR_4, VAR_6[VAR_3[VAR_10]]
      + (VAR_9 + VAR_10) * VAR_8)];
   }
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  VAR_3[VAR_10] = VAR_4->index_of[VAR_3[VAR_10]];
}
