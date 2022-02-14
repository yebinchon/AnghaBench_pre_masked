
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; char* str; int * hash_next; int * sym_identifier; int * sym_struct; int * sym_label; int * sym_define; scalar_t__ tok; } ;
typedef TYPE_1__ TokenSym ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 TYPE_1__** FUNC_2 (TYPE_1__**,int) ;
 TYPE_1__** VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static TokenSym *FUNC_4(TokenSym **VAR_5, const char *VAR_6, int VAR_7)
{
 TokenSym *VAR_8, **VAR_9;
 int VAR_10;

 if (VAR_4 >= VAR_0) {
  FUNC_3 ("memory full");
 }


 VAR_10 = VAR_4 - VAR_2;
 if ((VAR_10 % VAR_1) == 0) {
  VAR_9 = FUNC_2 (VAR_3, (VAR_10 + VAR_1) * sizeof(TokenSym *));
  VAR_3 = VAR_9;
 }
 VAR_8 = FUNC_0 (sizeof(TokenSym) + VAR_7);
 VAR_3[VAR_10] = VAR_8;
 VAR_8->tok = VAR_4++;
 VAR_8->sym_define = ((void*)0);
 VAR_8->sym_label = ((void*)0);
 VAR_8->sym_struct = ((void*)0);
 VAR_8->sym_identifier = ((void*)0);
 VAR_8->len = VAR_7;
 VAR_8->hash_next = ((void*)0);
 FUNC_1 (VAR_8->str, VAR_6, VAR_7);
 VAR_8->str[VAR_7] = '\0';
 *VAR_5 = VAR_8;
 return VAR_8;
}
