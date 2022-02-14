
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int tcc_lib_path; } ;
typedef TYPE_1__ TCCState ;
typedef TYPE_2__ CString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void***,int*,int ) ;

__attribute__((used)) static void FUNC_4(TCCState *VAR_1, void ***VAR_2, int *VAR_3, const char *VAR_4)
{
 const char *VAR_5;
 do {
  int VAR_6;
  CString VAR_7;

  FUNC_2 (&VAR_7);
  for (VAR_5 = VAR_4; VAR_6 = *VAR_5, VAR_6 != '\0' && VAR_6 != VAR_0; ++VAR_5) {
   if (VAR_6 == '{' && VAR_5[1] && VAR_5[2] == '}') {
    VAR_6 = VAR_5[1], VAR_5 += 2;
    if (VAR_6 == 'B') {
     FUNC_0 (&VAR_7, VAR_1->tcc_lib_path);
    }
   } else {
    FUNC_1 (&VAR_7, VAR_6);
   }
  }
  FUNC_1 (&VAR_7, '\0');
  FUNC_3 (VAR_2, VAR_3, VAR_7.data);
  VAR_4 = VAR_5 + 1;
 } while (*VAR_5);
}
