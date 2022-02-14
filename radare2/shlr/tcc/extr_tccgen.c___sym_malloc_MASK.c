
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static Sym *FUNC_3(void) {
 Sym *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8 = VAR_0 * sizeof(Sym);
 VAR_4 = FUNC_1 (VAR_8);
 FUNC_2 (VAR_4, 0, VAR_8);
 FUNC_0 (&VAR_3, &VAR_1, VAR_4);

 VAR_6 = VAR_2;
 VAR_5 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5->next = VAR_6;
  VAR_6 = VAR_5;
  VAR_5++;
 }
 VAR_2 = VAR_6;
 return VAR_6;
}
