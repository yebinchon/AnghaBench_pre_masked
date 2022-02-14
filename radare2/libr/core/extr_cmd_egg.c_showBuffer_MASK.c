
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(RBuffer *VAR_1) {
 int VAR_2;
 if (VAR_1 && FUNC_2 (VAR_1) > 0) {
  FUNC_1 (VAR_1, 0, VAR_0);
  for (VAR_2 = 0; VAR_2 < FUNC_2 (VAR_1); VAR_2++) {
   FUNC_4 ("%02x", FUNC_0 (VAR_1));
  }
  FUNC_3 ();
 }
}
