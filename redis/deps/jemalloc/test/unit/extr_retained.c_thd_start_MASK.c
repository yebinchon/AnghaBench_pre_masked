
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spin_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (unsigned int,unsigned int,char*) ;
 int FUNC_3 (int *,int,int ) ;
 unsigned int FUNC_4 (int *,int ) ;
 int VAR_7 ;
 void* FUNC_5 (int ,int) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int VAR_9 ;

__attribute__((used)) static void *
FUNC_7(void *VAR_10) {
 for (unsigned VAR_11 = 1; VAR_11 < VAR_3; VAR_11++) {

  unsigned VAR_12;
  spin_t VAR_13 = VAR_5;
  while ((VAR_12 = FUNC_4(&VAR_7, VAR_0)) !=
      VAR_11) {
   FUNC_6(&VAR_13);
  }
  FUNC_2(VAR_12, VAR_11, "Unexpected epoch");





  for (unsigned VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   void *VAR_15 = FUNC_5(VAR_9, FUNC_0(VAR_6) |
       VAR_2
       );
   FUNC_1(VAR_15,
       "Unexpected mallocx() failure\n");
  }


  FUNC_3(&VAR_8, 1, VAR_1);
 }

 return ((void*)0);
}
