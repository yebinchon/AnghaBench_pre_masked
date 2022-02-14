
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfChildren; int * Children; scalar_t__ szKey; } ;
typedef TYPE_1__ StringTable ;
typedef int Sdb ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,char*,int ) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static Sdb* FUNC_8(StringTable* VAR_1) {
 char VAR_2[20];
 char* VAR_3 = ((void*)0);
 int VAR_4 = 0;
 Sdb* VAR_5 = ((void*)0);
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_5 = FUNC_4 ();
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_3 = FUNC_2 ((unsigned char*) VAR_1->szKey, VAR_0);
 if (!VAR_3) {
  FUNC_3 (VAR_5);
  return ((void*)0);
 }
 FUNC_6 (VAR_5, "key", VAR_3, 0);
 FUNC_1 (VAR_3);
 for (; VAR_4 < VAR_1->numOfChildren; VAR_4++) {
  FUNC_7 (VAR_2, 20, "string%d", VAR_4);
  FUNC_5 (VAR_5, VAR_2, FUNC_0 (VAR_1->Children[VAR_4]));
 }
 return VAR_5;
}
