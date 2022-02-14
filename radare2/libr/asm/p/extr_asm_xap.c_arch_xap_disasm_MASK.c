
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
struct state {unsigned char const* s_buf; scalar_t__ s_ff_quirk; int * s_out; int s_off; } ;
struct directive {int d_inst; int d_asm; } ;


 int FUNC_0 (struct directive*) ;
 struct state* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct state*,int ,int) ;
 struct directive* FUNC_4 (struct state*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct state*,struct directive*) ;

__attribute__((used)) static int FUNC_8(char *VAR_0, const unsigned char *VAR_1, ut64 VAR_2) {
 struct state *VAR_3 = FUNC_1();
 struct directive *VAR_4;
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->s_buf = VAR_1;
 VAR_3->s_off = VAR_2;
 VAR_3->s_out = ((void*)0);
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_7 (VAR_3, VAR_4);
  FUNC_6 (VAR_0, VAR_4->d_asm);
  FUNC_0 (VAR_4);
 } else {
  *VAR_0 = '\0';
 }






 return 0;
}
