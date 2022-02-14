
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_parser_t ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 (int,int ,int *,int ,int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 (char) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ,int ) ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static mpc_parser_t *FUNC_10(char VAR_3) {
  switch (VAR_3) {
    case 'a': return FUNC_3('\a');
    case 'f': return FUNC_3('\f');
    case 'n': return FUNC_3('\n');
    case 'r': return FUNC_3('\r');
    case 't': return FUNC_3('\t');
    case 'v': return FUNC_3('\v');
    case 'b': return FUNC_1(2, VAR_2, FUNC_2(), FUNC_6(VAR_1), VAR_0);
    case 'B': return FUNC_7(FUNC_2(), VAR_0, VAR_1);
    case 'A': return FUNC_1(2, VAR_2, FUNC_8(), FUNC_6(VAR_1), VAR_0);
    case 'Z': return FUNC_1(2, VAR_2, FUNC_5(), FUNC_6(VAR_1), VAR_0);
    case 'd': return FUNC_4();
    case 'D': return FUNC_7(FUNC_4(), VAR_0, VAR_1);
    case 's': return FUNC_9();
    case 'S': return FUNC_7(FUNC_9(), VAR_0, VAR_1);
    case 'w': return FUNC_0();
    case 'W': return FUNC_7(FUNC_0(), VAR_0, VAR_1);
    default: return ((void*)0);
  }
}
