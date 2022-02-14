
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int LRESULT ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int,int,int,int,int,int ,int *,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

LRESULT FUNC_2(
   HWND VAR_20)
{
   UCHAR VAR_21;
   FUNC_1("WM_CREATE (enter).");

   FUNC_1("test 1");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19 | VAR_2,
      10, 10, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 2");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19 | VAR_1,
      10, 40, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 3");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19 | VAR_8,
      10, 70, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 4");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19 | VAR_7,
      10, 100, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 5");
   FUNC_0(0, VAR_17,
      "&Left-aligned text &static control window",
      VAR_18 | VAR_19 | VAR_9,
      10, 130, 100, 50, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 6");
   FUNC_0(0, VAR_17,
      "&Right-aligned text &static control window",
      VAR_18 | VAR_19 | VAR_12,
      10, 185, 100, 50, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 7");
   FUNC_0(0, VAR_17,
      "&Centered text &static control window",
      VAR_18 | VAR_19 | VAR_3,
      10, 240, 100, 50, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 8");
   FUNC_0(0, VAR_17,
      "&No prefix and no word wrapping",
      VAR_18 | VAR_19 | VAR_10 | VAR_11,
      10, 295, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 9");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19 | VAR_15,
      120, 10, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 10");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19 | VAR_14,
      120, 40, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 11");
   FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19
      | VAR_4, 120, 70, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 12");
   for (VAR_21 = 0; VAR_21 < 5; ++VAR_21)
      FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19
         | VAR_5, 120, 100 + (4L * VAR_21), 100, 4, VAR_20,
         ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 13");
   for (VAR_21 = 0; VAR_21 < 25; ++VAR_21)
      FUNC_0(0, VAR_17, ((void*)0), VAR_18 | VAR_19
         | VAR_6, 120 + (4L * VAR_21), 130, 4, 20, VAR_20,
         ((void*)0), VAR_0, ((void*)0));

   FUNC_1("test 14");
   FUNC_0(0, VAR_17,
      "Sunken frame and word ellipsis",
      VAR_18 | VAR_19 | VAR_13 | VAR_16,
      120, 160, 100, 20, VAR_20, ((void*)0), VAR_0, ((void*)0));
   FUNC_1("WM_CREATE (leave).");
   return 0;
}
