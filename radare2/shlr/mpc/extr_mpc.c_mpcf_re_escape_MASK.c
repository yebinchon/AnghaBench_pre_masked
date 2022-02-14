
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char mpc_val_t ;
typedef char mpc_parser_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ,int ,int ,int (*) (char*)) ;
 char* FUNC_2 () ;
 char* FUNC_3 (char) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char) ;
 int FUNC_7 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static mpc_val_t *FUNC_8(mpc_val_t *VAR_2) {

  char *VAR_3 = VAR_2;
  mpc_parser_t *VAR_4;


  if (VAR_3[0] == '.') { FUNC_0(VAR_3); return FUNC_2(); }
  if (VAR_3[0] == '^') { FUNC_0(VAR_3); return FUNC_1(2, VAR_1, FUNC_7(), FUNC_5(VAR_0), FUNC_0); }
  if (VAR_3[0] == '$') { FUNC_0(VAR_3); return FUNC_1(2, VAR_1, FUNC_4(), FUNC_5(VAR_0), FUNC_0); }


  if (VAR_3[0] == '\\') {
    VAR_4 = FUNC_6(VAR_3[1]);
    VAR_4 = (!VAR_4) ? FUNC_3(VAR_3[1]) : VAR_4;
    FUNC_0(VAR_3);
    return VAR_4;
  }


  VAR_4 = FUNC_3(VAR_3[0]);
  FUNC_0(VAR_3);
  return VAR_4;
}
