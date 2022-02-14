
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
struct blowfish_state {int* p; } ;


 int FUNC_0 (struct blowfish_state* const,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int*) ;

__attribute__((used)) static void FUNC_3(struct blowfish_state *const VAR_0, const ut8 *VAR_1, ut8 *VAR_2, int VAR_3) {
 ut32 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_0 || !VAR_1 || !VAR_2 || VAR_3 < 0 || VAR_3%8 != 0) {

  if (VAR_3 % 8 != 0) {
   FUNC_1 ("Invalid input length %d. Expected length is multiple of 8 bytes.\n", VAR_3);
  }
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 8) {
  VAR_4 = (VAR_1[VAR_6+0] << 24 | VAR_1[VAR_6+1] << 16 | VAR_1[VAR_6+2] << 8 | VAR_1[VAR_6+3]);
  VAR_5 = (VAR_1[VAR_6+4] << 24 | VAR_1[VAR_6+5] << 16 | VAR_1[VAR_6+6] << 8 | VAR_1[VAR_6+7]);

  for (VAR_7 = 0; VAR_7 < 16; VAR_7 += 1) {
   VAR_4 ^= VAR_0->p[VAR_7];
   VAR_5 ^= FUNC_0 (VAR_0, VAR_4);
   FUNC_2 (&VAR_4, &VAR_5);
  }

  FUNC_2 (&VAR_4, &VAR_5);
  VAR_5 ^= VAR_0->p[16];
  VAR_4 ^= VAR_0->p[17];

  VAR_2[VAR_6+0] = VAR_4 >> 24;
  VAR_2[VAR_6+1] = VAR_4 >> 16;
  VAR_2[VAR_6+2] = VAR_4 >> 8;
  VAR_2[VAR_6+3] = VAR_4;
  VAR_2[VAR_6+4] = VAR_5 >> 24;
  VAR_2[VAR_6+5] = VAR_5 >> 16;
  VAR_2[VAR_6+6] = VAR_5 >> 8;
  VAR_2[VAR_6+7] = VAR_5;
 }
}
