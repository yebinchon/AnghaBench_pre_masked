
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RHash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int const) ;
 int * FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5 (const ut8 *VAR_2, int VAR_3) {
 int VAR_4 = 0;
 RHash *VAR_5 = FUNC_4 (1, VAR_0);
 const ut8 *VAR_6 = FUNC_2 (VAR_5, VAR_2, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) FUNC_1 ("%02x", VAR_6[VAR_4]);
 FUNC_0 ();
 FUNC_3 (VAR_5);
}
