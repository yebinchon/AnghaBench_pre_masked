
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; } ;
typedef int GistInetKey ;
typedef TYPE_1__ GISTENTRY ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(GISTENTRY *VAR_0,
        int VAR_1, int VAR_2,
        int *VAR_3,
        int *VAR_4,
        int *VAR_5,
        int *VAR_6)
{
 int VAR_7,
    VAR_8,
    VAR_9,
    VAR_10;
 unsigned char *VAR_11;
 GistInetKey *VAR_12;
 int VAR_13;


 FUNC_0(VAR_1 <= VAR_2);


 VAR_12 = FUNC_1(VAR_0[VAR_1].key);
 VAR_7 = VAR_8 = FUNC_5(VAR_12);
 VAR_9 = FUNC_6(VAR_12);
 VAR_10 = FUNC_4(VAR_12);
 VAR_11 = FUNC_3(VAR_12);


 for (VAR_13 = VAR_1 + 1; VAR_13 <= VAR_2; VAR_13++)
 {
  VAR_12 = FUNC_1(VAR_0[VAR_13].key);


  if (VAR_7 > FUNC_5(VAR_12))
   VAR_7 = FUNC_5(VAR_12);
  if (VAR_8 < FUNC_5(VAR_12))
   VAR_8 = FUNC_5(VAR_12);


  if (VAR_9 > FUNC_6(VAR_12))
   VAR_9 = FUNC_6(VAR_12);


  if (VAR_10 > FUNC_4(VAR_12))
   VAR_10 = FUNC_4(VAR_12);
  if (VAR_10 > 0)
   VAR_10 = FUNC_2(VAR_11, FUNC_3(VAR_12), VAR_10);
 }


 if (VAR_7 != VAR_8)
  VAR_9 = VAR_10 = 0;

 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;
 *VAR_5 = VAR_9;
 *VAR_6 = VAR_10;
}
