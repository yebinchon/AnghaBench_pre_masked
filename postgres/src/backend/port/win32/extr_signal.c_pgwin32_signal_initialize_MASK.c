
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;


 int * FUNC_0 (int *,int ,int ,int *) ;
 int * FUNC_1 (int *,int ,int ,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;

void
FUNC_7(void)
{
 int VAR_14;
 HANDLE VAR_15;

 FUNC_3(&VAR_8);

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
 {
  VAR_7[VAR_14] = VAR_3;
  VAR_9[VAR_14] = VAR_4;
 }
 VAR_10 = 0;
 VAR_11 = 0;


 VAR_13 = FUNC_0(((void*)0), VAR_5, VAR_0, ((void*)0));
 if (VAR_13 == ((void*)0))
  FUNC_5(VAR_1,
    (FUNC_6("could not create signal event: error code %lu", FUNC_2())));


 VAR_15 = FUNC_1(((void*)0), 0, VAR_12, ((void*)0), 0, ((void*)0));
 if (VAR_15 == ((void*)0))
  FUNC_5(VAR_1,
    (FUNC_6("could not create signal handler thread")));


 if (!FUNC_4(VAR_6, VAR_5))
  FUNC_5(VAR_1,
    (FUNC_6("could not set console control handler")));
}
