
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wValueLength; scalar_t__ Value; int wKeyLen; scalar_t__ szKey; } ;
typedef TYPE_1__ String ;
typedef int Sdb ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,char*,int ) ;

__attribute__((used)) static Sdb* FUNC_5(String* VAR_0) {
 Sdb* VAR_1 = ((void*)0);
 char* VAR_2 = ((void*)0), * VAR_3 = ((void*)0);
 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_1 = FUNC_3 ();
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_3 = FUNC_1 ((unsigned char*) VAR_0->szKey, VAR_0->wKeyLen);
 if (!VAR_3) {
  FUNC_2 (VAR_1);
  return ((void*)0);
 }
 VAR_2 = FUNC_1 ((unsigned char*) VAR_0->Value, VAR_0->wValueLength);
 if (!VAR_2) {
  FUNC_0 (VAR_3);
  FUNC_2 (VAR_1);
  return ((void*)0);
 }
 FUNC_4 (VAR_1, "key", VAR_3, 0);
 FUNC_4 (VAR_1, "value", VAR_2, 0);
 FUNC_0 (VAR_3);
 FUNC_0 (VAR_2);
 return VAR_1;
}
